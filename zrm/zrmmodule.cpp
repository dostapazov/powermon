/*
* Ostapenko D.V. NIKTES 2019-03-11
* inner class ZrmModule for save state of the zrm device
*/

#include "zrmmodule.hpp"
#include <algorithm>
#include <math.h>
#include <stdlib.h>
#include <qdebug.h>
#include <memory>

namespace zrm {

ZrmModule::ZrmModule(uint16_t channel, zrm_work_mode_t work_mode)
          :m_channel(channel),m_work_mode(work_mode)
{
   m_ctrl_params.reserve(64);
   session_reset();
}


ZrmModule::~ZrmModule()
{}


bool ZrmModule::ping_check     (int timer_value)
{
  m_ping_timeout -= timer_value;
  if(m_ping_timeout<=0)
  {
    m_ping_timeout = m_ping_period;
   return true;
  }
 return false;
}

/**
 * @brief ZrmModule::param_request_add
 * @param param
 * Добавление параметра для контроля
 */

void     ZrmModule::param_request_add  (zrm_param_t param)
{
  //locker_t l(m_mut);
  params_t::iterator ptr = this->m_ctrl_params.begin();
  params_t::iterator end = m_ctrl_params.end();
  ptr = std::lower_bound(ptr, end , param) ;

  if(ptr >= end || *ptr != param)
     m_ctrl_params.insert(ptr, params_t::value_type(param));
}


void     ZrmModule::params_request_add  (const params_t &  params)
{
  //locker_t l(m_mut);
  m_ctrl_params.insert(m_ctrl_params.end(), params.begin(), params.end());
  std::sort  (m_ctrl_params.begin(), m_ctrl_params.end(), std::less<params_t::value_type>());
  m_ctrl_params.erase(std::unique(m_ctrl_params.begin() , m_ctrl_params.end()), m_ctrl_params.end());
}


void     ZrmModule::param_request_remove(const zrm_param_t param)
{
  //locker_t l(m_mut);
    params_t::iterator ptr = this->m_ctrl_params.begin();
    params_t::iterator end = m_ctrl_params.end();
    ptr = std::lower_bound(ptr, end , params_t::value_type(param)) ;
    if(ptr < end && *ptr == param)
       {
          m_ctrl_params.erase(ptr);
          m_curr_params.erase(param);
          m_chg_params.erase(param);
       }
}

void     ZrmModule::params_request_remove(const params_t &  params)
{
  //locker_t l(m_mut);
  for(auto p : params)
      param_request_remove(zrm_param_t(p));
}

bool     ZrmModule::param_is_requested (zrm_param_t param)
{
  return std::binary_search(m_ctrl_params.begin(), m_ctrl_params.end(),params_t::value_type(param));
}

bool     ZrmModule::params_is_changed   (zrm_param_t param) const
{
    //locker_t l(m_mut);
    return m_chg_params.count(param);
}

param_variant     ZrmModule::param_get          (zrm_param_t param ) const
{
  param_variant pvar;
  //locker_t l(m_mut);
  if(m_curr_params.count(param))
  {
     pvar = m_curr_params.find(param)->second;
  }
 return pvar;
}

void ZrmModule::handle_conreq(const session_t * session)
{
   param_variant pv;
   pv.size      = sizeof(*session);
   pv.udword    = session->value;
   m_chg_params.clear();
   m_curr_params.clear();
   m_ping_timeout = 0;
   param_set  ( PARAM_CON , pv );
}


oper_state_t ZrmModule::get_state(bool prev) const
{
  oper_state_t state;
  if(prev)
      state = m_prev_state;
  else
  {
    state.state = param_get(PARAM_STATE).uword;
  }
  return state;
}


void     fill_cells_random(zrm_cell_t * ptr ,int v, int t, int c , int cnt)
{
  zrm_cell_t * end = ptr + cnt;

  while(ptr<end)
  {
    ptr->m_volt = uint16_t(v);
    ptr->m_temp = uint16_t(t);
    ptr->m_cap  = uint16_t(c);
      ++ptr;
  }
}


void     ZrmModule::simulate_massakb()
{
#ifdef QT_DEBUG
    param_variant v = init_variant(8);
    m_curr_params[PARAM_CCNT] = v;
    m_chg_params [PARAM_CCNT] = v;
    m_cells.resize   (v.uword);
    zrm_cell_t  tmp_cells[8];
    fill_cells_random(tmp_cells, rand(), rand(), rand(),8);
    int rand_num   = abs(rand()%8);
    int16_t rand_delta = int16_t(rand());

    lp_zrm_cell_t cell = tmp_cells+rand_num;
    cell->m_volt += rand_delta;

    rand_num   = abs(rand()%8);
    rand_delta = int16_t(rand());
    cell = tmp_cells+rand_num;
    cell->m_temp += rand_delta;


    uint8_t * bptr = reinterpret_cast<uint8_t *>(tmp_cells);
    handle_cells(sizeof(tmp_cells), bptr, bptr+sizeof(tmp_cells));

#endif
}

void     ZrmModule::param_set(zrm_param_t param, const param_variant & pv)
{
  //locker_t l(m_mut);
  auto v = m_curr_params[param];
  if(v != pv)
  {
    if(param == PARAM_STATE && v.is_valid()) m_prev_state.state = v.uword;
    m_curr_params[param] = pv;
    m_chg_params [param] = pv;

    if(param == PARAM_CCNT)
    {
     #ifdef QT_DEBUG
      simulate_massakb();
     #else
        m_cells.resize(pv.uword);
     #endif
    }

  }
}

int ZrmModule::handle_recv(const zrm::recv_header_t & recv_data)
{
   switch(recv_data.proto_hdr.type)
   {
     case PT_CONCONF  :
     case PT_CONREQ   : handle_conreq(recv_data.as<session_t>()); break;
     case PT_DATAREAD :
       if(session().session_param.ssID == recv_data.proto_hdr.session_id)
          handle_data  (reinterpret_cast<const uint8_t*>(recv_data.data) , recv_data.proto_hdr.data_size);
       break;
   }
   return int(m_chg_params.size());
}


void    ZrmModule::handle_data  (const uint8_t * data_ptr, size_t data_size)
{

  if(!data_ptr || !data_size) return;
  auto data_end  =  data_ptr + data_size;
  uint8_t  state = *data_ptr++;
  (void)(state);

  //locker_t l(m_mut);

  while(data_ptr < data_end)
  {

    zrm_param_t  param      = zrm_param_t(*data_ptr++);
    uint16_t      param_size = *data_ptr++;
    if(!param_size) continue;
    switch(param)
    {

     case PARAM_METHOD_STAGES :
          param_size = handle_method_stages(param_size,data_ptr, data_end);
          //param_set(param, init_variant(m_method.count()));
     break;
     case PARAM_METH_EXEC_RESULT:
          param_size = handle_results(param_size,data_ptr, data_end);
          param_set(param, init_variant(m_exec_results.size()));
     break;
     case PARAM_CELL:
          param_size = handle_cells(param_size,data_ptr, data_end);
      break;
     case PARAM_RD_EPROM_METHOD:
          param_size = handle_eprom_method(param_size,data_ptr, data_end);
     break;

     default :{
                  param_variant pv;
                  pv.size = param_size;
                  memcpy(&pv.uqword, data_ptr, pv.size);
                  param_set(param, pv);
              }
              break;
    }
    data_ptr +=  param_size;
  }
}



uint16_t ZrmModule::handle_cells        (uint16_t data_size, const uint8_t * beg, const uint8_t * end)
{
    Q_UNUSED(end)
  lpc_zrm_cell_t cbeg = reinterpret_cast<lpc_zrm_cell_t>(beg);
  size_t cnt = data_size/sizeof (*cbeg);
  size_t i = 0;
  while( i < cnt )
  {
   zrm_cell_t & cell =  m_cells.at(i);

   if(memcmp(&cell, cbeg, sizeof(*cbeg)))
   {
    cell = *cbeg;
    m_chg_params[PARAM_CELL].udword = uint32_t(cnt);
   }
   ++cbeg;
   ++i;
  }
  return data_size;

}

/**
 * @brief ZrmModule::handle_results
 * @param data_size
 * @param beg
 * @param end
 * @return размер обработанных данных
 * Обработка результатов работы метода
 */

uint16_t  ZrmModule::handle_results (uint16_t data_size, const uint8_t * beg, const uint8_t * end)
{
  const stage_exec_result_t * res_beg = reinterpret_cast<const stage_exec_result_t*>(beg);
  const stage_exec_result_t * res_end = reinterpret_cast<const stage_exec_result_t*>(end);
  qDebug()<<"handle results channel no "<< this->channel();
  if( data_size<0xFF ) res_end = res_beg + data_size/sizeof (*res_beg);
  data_size = 0;
  //qDebug()<<"ZrmModule::Handle results";
  while(res_beg < res_end)
  {
   auto ptr_beg = m_exec_results.begin();
   auto ptr_end = m_exec_results.end() ;
   ptr_beg = std::lower_bound(ptr_beg,ptr_end, *res_beg);

  if(ptr_beg>= ptr_end || !((*res_beg) == *ptr_beg) )
    m_exec_results.insert(ptr_beg, *res_beg);

  ++res_beg;
   data_size += sizeof (*res_beg);
  }
  std::sort(m_exec_results.begin(), m_exec_results.end());
  return data_size;
}


/**
 * @brief ZrmModule::handle_method_stages
 * @param data_size
 * @param beg
 * @param end
 * @return Обработка результатов работы метода
 * Обработка текущих методов на устройстве
 */

uint16_t ZrmModule::handle_method_stages(zrm_method_t & method, uint16_t data_size, const uint8_t * beg, const uint8_t * end)
{
 lpc_method_t recv_meth = reinterpret_cast<lpc_method_t>(beg);
 method.m_stages.clear();
 if(data_size > sizeof (*recv_meth))
  {
     method.m_method = *recv_meth;
     auto stage_beg = reinterpret_cast<lpc_stage_t>(beg+sizeof (*recv_meth));
     auto stage_end = reinterpret_cast<lpc_stage_t>(end);
     if(data_size < 0xFF){ stage_end = stage_beg + ((data_size-sizeof (*recv_meth))/sizeof (*stage_beg));}

     data_size = sizeof(*recv_meth);

     while(stage_beg<stage_end)
         {
          method.m_stages.push_back(*stage_beg);
          data_size += sizeof (*stage_beg);
          ++stage_beg;
         }

     std::sort(method.m_stages.begin(),method.m_stages.end());
  }
  return data_size;
}

uint16_t ZrmModule::handle_method_stages(uint16_t data_size, const uint8_t * beg, const uint8_t * end)
{
  //locker_t l(m_mut);
  method_clear();
  //qDebug()<<"Handle method stages";
  data_size = handle_method_stages( m_current_method, data_size, beg, end);
  param_set( PARAM_METHOD_STAGES , init_variant( m_current_method.m_stages.size()) );
  return   data_size;
}

uint16_t ZrmModule::handle_eprom_method (uint16_t data_size, const uint8_t * beg, const uint8_t * end)
{
    m_eprom_method.m_method = method_t();
    m_eprom_method.m_stages.clear();
    param_set(PARAM_RD_EPROM_METHOD, init_variant(0));
    data_size = handle_method_stages(m_eprom_method,data_size,beg,end);
    //qDebug()<<"Handle eprom method stages "<< QString::fromLocal8Bit(m_eprom_method.m_method.m_name);
    param_set(PARAM_RD_EPROM_METHOD, init_variant(m_eprom_method.stages_count()));
    return data_size;
}



void        ZrmModule::method_set  (const zrm_method_t & method)
{
  //locker_t l(m_mut);
  method_clear();
  m_current_method.m_method = method.m_method;
  if(m_current_method.m_method.m_id == uint16_t(-1))
     m_current_method.m_method.m_id = 0;

  stages_t & stages = m_current_method.m_stages;
  stages.reserve(method.stages_count());
  stages.insert(stages.end(), method.m_stages.begin(), method.m_stages.end());
  m_current_method.m_method.m_stages = uint8_t(m_current_method.m_stages.size());
  param_set(PARAM_METHOD_STAGES, init_variant(stages.size()));
}


zrm_cells_t ZrmModule::cells_get() const
{
  return m_cells;
}


/**
 * @brief ZrmModule::session
 * @return получение текущей сессии
 */
session_t ZrmModule::session               () const
{
    session_t sess(uint16_t(-1));
    auto param = param_get(PARAM_CON);
    if(param.is_valid())
       sess.value = param.udword;
   return sess;
}


void      ZrmModule::session_reset         ()
{
   m_curr_params.erase(PARAM_CON);
   m_prev_state.state = 0;
   m_chg_params.clear();
   m_ping_timeout = 0;
}


int ZrmModule::results_get  (method_exec_results_t & res) const
{
  res.clear();
  //locker_t l(m_mut);
  res.insert(res.end(), m_exec_results.begin(), m_exec_results.end());
  return int(res.size());
}

void      ZrmModule::results_clear()
{
    //locker_t l(m_mut);
    m_exec_results.clear();
    param_set(PARAM_METH_EXEC_RESULT,param_variant());
}


void     ZrmModule::method_clear()
{
  //locker_t l(m_mut);
  m_current_method.m_method = method_t();
  m_current_method.m_stages.clear();
  param_set(PARAM_METHOD_STAGES, init_variant(0));
}

std::string  ZrmModule::time_param(const param_variant & pv)
{
  char text[128];
  if(pv.is_valid())
     {
      snprintf (text,sizeof(text),"%02u:%02u:%02u",unsigned(pv.puchar[2]),unsigned(pv.puchar[1]),unsigned(pv.puchar[0]));
     }
  else
  {
   *text = 0;
  }
  return std::string(text);
}

std::string   ZrmModule::trect_param(const param_variant &pv )
{

  std::string ret;
  size_t pcount = pv.size/sizeof(uint32_t);
  ret.reserve(pcount*16);
  const uint32_t * ptr = reinterpret_cast<const uint32_t*>(pv.puchar);
  const uint32_t * end = ptr + pcount;
  char  text[32];
  while(ptr < end)
  {
    snprintf(text,sizeof(text),"%s%2.3f",ret.empty() ? "":", ",double(*ptr)/1000.0);
    ret +=text;
    ++ptr;
  }

  return ret;
}


} // namespace zrm
