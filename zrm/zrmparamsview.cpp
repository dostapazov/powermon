#include "zrmparamsview.h"

ZrmParamsView::ZrmParamsView(QWidget *parent) :
    ZrmChannelWidget (parent)
{
    setupUi(this);
    init_params();
    QHeaderView * hdr = zrm_params->header();
    hdr->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);
    connect(&m_request_timer, &QTimer::timeout, this, &ZrmParamsView::request);
    zrm_params->sortItems(0,Qt::SortOrder::AscendingOrder);
}


void ZrmParamsView::init_params()
{

   m_orders[zrm::PARAM_ADDR     ] = "01 Адрес";
   m_orders[zrm::PARAM_VRDEV    ] = "02 Версия блока";
   m_orders[zrm::PARAM_RVDEV    ] = "03 Модификация блока";
   m_orders[zrm::PARAM_RVSW     ] = "04 Модификация ПО";
   m_orders[zrm::PARAM_SERNM    ] = "05 Зав. номер";
   m_orders[zrm::PARAM_MEMFR    ] = "06 Свободная память ";

   m_orders[zrm::PARAM_MAX_CHP  ] = "07 Макс. мощность заряда  ";
   m_orders[zrm::PARAM_DPOW     ] = "08 Макс. мощность разряда ";
   m_orders[zrm::PARAM_MVOLT    ] = "09 Макс. напряжение";
   m_orders[zrm::PARAM_MCUR     ] = "10 Макс. ток";
   m_orders[zrm::PARAM_MCURD    ] = "12 Макс. ток разряда";
   m_orders[zrm::PARAM_DCNT     ] = "12 Кол-во разрядных модулей";
   m_orders[zrm::PARAM_GCAP     ] = "13 Кол-во модулей в группе";
   m_orders[zrm::PARAM_GCNT     ] = "14 Кол-во групп";



  m_orders[zrm::PARAM_CCNT      ] = "15 Кол-во элементов MACAKБ";
  m_orders[zrm::PARAM_TEMP      ] = "16 Температура";
  m_orders[zrm::PARAM_TRECT     ] = "17 Температура выпрямителя";
  m_orders[zrm::PARAM_TCONV     ] = "18 Температура преобразователя";
  m_orders[zrm::PARAM_VOUT      ] = "19 Напряжение на выходе ЗРМ";
  m_orders[zrm::PARAM_MVOLT     ] = "20 Макс. напряжение ";
  m_orders[zrm::PARAM_MCUR      ] = "21 Макс. ток ";
  m_orders[zrm::PARAM_MCURD     ] = "22 Макс. ток разряда ";
  m_orders[zrm::PARAM_DCNT      ] = "23 Кол-во разрядных модулей ";
  m_orders[zrm::PARAM_GCAP      ] = "24 Кол-во модулей в группе ";
  m_orders[zrm::PARAM_GCNT      ] = "25 Кол-во групп ";
  m_orders[zrm::PARAM_TRYCT     ] = "26 Кол-во попыток запуска ";
  m_orders[zrm::PARAM_RSTTO     ] = "27 Таймаут между перезапусками ";
  m_orders[zrm::PARAM_VSTRT     ] = "28 Напряжение автозапуска ";


  m_orders[zrm::PARAM_UMAP      ] = "29 Карта используемых модулей. Бит0 – модуль вкл/выкл. биты 1-7 – номер ЗРМ ";

  m_orders[zrm::PARAM_MOD_DATA  ] = "30 Данные установки (расположения) модуля  ";
  m_orders[zrm::PARAM_MOD_CHMAP ] = "31 Карта каналов (канал и его адрес)  ";
  m_orders[zrm::PARAM_MXCVOLT   ] = "32 Макс. напряжение банки  ";
  m_orders[zrm::PARAM_MNCVOLT   ] = "33 Мин. напряжение банки  ";
  m_orders[zrm::PARAM_BTYPE     ] = "34 Тип АКБ (0-щелочной 1-кислотный)  ";
  m_orders[zrm::PARAM_CELL      ] = "35 Параметры элементов АКБ  ";

}


void    ZrmParamsView::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
    if(m_source && m_channel == channel)
    {
       for(auto param : params_list)
       {
         params_items_t::iterator item = m_items.find(zrm::zrm_param_t(param.first));
         if(item == m_items.end() && is_viewed_param(param.first) )
           item = m_items.insert(param.first, new QTreeWidgetItem(zrm_params,QStringList()<<m_orders[param.first]));
         if(item!= m_items.end())
         {
           QVariant value = m_source->param_get(m_channel, param.first);
           item.value()->setText(column_value,value.toString());
         }
       }
    }
}


bool ZrmParamsView::is_viewed_param(zrm::zrm_param_t param)
{
   bool ret = m_orders.contains(param);
   return ret;
}


void    ZrmParamsView::update_controls      ()
{
   ZrmChannelWidget::update_controls();
   if(m_source && m_channel)
   {
    channel_session(m_channel);
    channel_param_changed(m_channel ,m_source->channel_params(m_channel));
   }
}

void    ZrmParamsView::clear_controls       ()
{
  zrm_params->clear();
  m_items.clear();
}


void    ZrmParamsView::set_active           (bool active)
{
  m_active = active;
  channel_session(m_channel);


}

void    ZrmParamsView::channel_session      (unsigned channel)
{
    if(m_active && m_source && m_channel == channel && m_source->channel_session(m_channel).is_active())
    {
      m_request_timer.start(std::chrono::seconds(1));
      request();

    }
    else
    {
      m_request_timer.stop();
    }
}

void    ZrmParamsView::request()
{
  if(m_source && m_channel)
   {
    zrm::params_t req_params;
    req_params.resize(zrm::params_t::size_type( m_orders.size() ) );
    auto keys = m_orders.keys().toVector();
    std::copy(keys.begin(),keys.end(),req_params.begin());
    m_source->channel_query_params(m_channel,req_params);
   }
}

