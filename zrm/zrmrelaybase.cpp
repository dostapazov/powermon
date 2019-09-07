/*
 Виджет отображающий состояние реле, направление тока
 Режим работы, и состояние связи
*/
#include "zrmrelaybase.h"
#include <algorithm>
#include <functional>





QIcon             ZrmRelayBase::network_rx;
QIcon             ZrmRelayBase::network_tx;
QIcon             ZrmRelayBase::network_idle;
QIcon             ZrmRelayBase::network_offline;

QIcon             ZrmRelayBase::relay_off;
QIcon             ZrmRelayBase::relay_on;
QIcon             ZrmRelayBase::current_out;
QIcon             ZrmRelayBase::current_in;
QIcon             ZrmRelayBase::modeU;
QIcon             ZrmRelayBase::modeUstab;
QIcon             ZrmRelayBase::modeI;
QIcon             ZrmRelayBase::modeIstab;
QIcon             ZrmRelayBase::pause_icon;
QIcon             ZrmRelayBase::empty_icon;
QIcon             ZrmRelayBase::led_red;
QIcon             ZrmRelayBase::led_green;



ZrmRelayBase::ZrmRelayBase(QWidget *parent) :
    ZrmChannelWidget(parent)
{
    setupUi(this);
    init_icons();
}



void ZrmRelayBase::init_icons()
{
  if(relay_on.isNull())
  {
    QString icon_path = QLatin1String(":/zrm/icons/%1");
    relay_off  = QIcon(icon_path.arg("relay_off.png"  ));
    relay_on   = QIcon(icon_path.arg("relay_on.png"   ));
    current_out= QIcon(icon_path.arg("current_out.png"));
    current_in = QIcon(icon_path.arg("current_in.png" ));

    modeU      = QIcon(icon_path.arg("modeU.png"    ));
    modeUstab  = QIcon(icon_path.arg("modeUstab.png"));
    modeI      = QIcon(icon_path.arg("modeI.png"    ));
    modeIstab  = QIcon(icon_path.arg("modeIstab.png"));
    pause_icon = QIcon(icon_path.arg("control_pause.png"));

    network_rx = QIcon(icon_path.arg("network-receive.png"));
    network_tx = QIcon(icon_path.arg("network-transmit.png"));
    network_idle    = QIcon(icon_path.arg("network-idle.png"));
    network_offline = QIcon(icon_path.arg("network-offline.png"));

    led_red         = QIcon(icon_path.arg("ledred.png"));
    led_green       = QIcon(icon_path.arg("ledgreen.png"));

  }
}


void  ZrmRelayBase::update_controls()
{

    if(m_source && m_channel)
    {
        //qDebug()<<QString("%3 %1 %2").arg(m_source->name()).arg(m_channel).arg(this->objectName());
        QVariant v = param_get(zrm::PARAM_STATE).toUInt();
        update_state      (v.toUInt());
        handle_error_state(param_get(zrm::PARAM_ERROR_STATE).toUInt());
    }
}

void    ZrmRelayBase::clear_controls       ()
{
    handle_error_state(0) ;
    for(auto lb : findChildren<QLabel*>())
    {
       set_icon(lb, Q_NULLPTR);
    }
}

void ZrmRelayBase::update_state    (uint32_t state)
{
  zrm::oper_state_t oper_state;
  oper_state.state = uint16_t(state);

  set_icon     ( lb_relay_state, oper_state.state_bits.relay_on ? &relay_on : &relay_off );

  if(oper_state.state_bits.start_rectifier || oper_state.state_bits.start_load)
  {
     set_icon(lb_curr_dir,oper_state.state_bits.start_rectifier ? &current_out : &current_in);
     QIcon * icon = Q_NULLPTR;

     if(oper_state.state_bits.ctr_stab)
        icon =  oper_state.state_bits.start_rectifier ? &modeUstab : &modeIstab;
     else
       icon = oper_state.state_bits.start_rectifier ? &modeU : &modeI;

     set_icon(lb_mode,icon);

  }
  else
  {
      set_icon(lb_mode, Q_NULLPTR);
      set_icon(lb_curr_dir,oper_state.state_bits.start_pause ? &pause_icon : Q_NULLPTR);
  }
}



 void  ZrmRelayBase::on_connected         (bool            conn_state)
 {
   if(!conn_state)
   {
    set_icon(lb_txrx, &network_offline);
    setToolTip(tr("Нет связи"));
    m_switch_led = conn_state;
    m_session_active = false;
   }
   watch_dog_enable(conn_state);
 }

 void  ZrmRelayBase::on_ioerror           (const QString & error_string)
 {
   on_connected(false);
   setToolTip(error_string);
 }

 void  ZrmRelayBase::channel_recv_packet  (unsigned channel, const zrm::recv_header_t * recv_data)
 {
    Q_UNUSED(recv_data);
     if( channel == m_channel)
     {
         if(!m_session_active)
         {
           m_session_active = true;
           watch_dog_enable(true);
           auto sess = m_source->channel_session(m_channel);
           QString str = QString("ID-сессии %1").arg(ulong(sess.session_param.ssID),4,16,QLatin1Char('0'));
           setToolTip(str);
         }
         else
           watch_dog_reset();

       if(!(++m_rcv_counter&3))
       {
         set_icon(lb_txrx, m_switch_led ? &network_rx : &network_idle);
         m_switch_led = !m_switch_led;
       }
     }
 }

 void  ZrmRelayBase::channel_send_packet  (unsigned channel, const zrm::send_header_t * send_data)
 {
  Q_UNUSED(send_data);
  if(channel == m_channel)
  {
    if(m_session_active)
       set_icon(lb_txrx,  &network_tx);
    watch_dog_enable(true);
  }
 }

void  ZrmRelayBase::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
 if(channel == m_channel)
 {
    auto p = params_list.find(zrm::PARAM_STATE);
    if(p!=params_list.end())
     {
       update_state(p->second.udword);
     }

    p = params_list.find(zrm::PARAM_ERROR_STATE);
    if(p!=params_list.end())
        handle_error_state(p->second.udword);

 }
}


void  ZrmRelayBase::handle_error_state   (uint32_t error)
{
  if(m_error_state != error)
  {
   if(error)
       flash_timer.start_flash();
   if(!m_error_state && error)
     {
       connect(&flash_timer, &ZrmFlashTimer::flash, this, &ZrmRelayBase::flash);
     }

   if(m_error_state && !error)
   {
      flash_timer.disconnect(this);
   }
   m_error_state = error;
  }
  flash(m_error_state);
  setToolTip(m_source->zrm_error_text(error));

}


void  ZrmRelayBase::flash(bool flash_on)
{
  set_icon(lb_error_led, flash_on ? &led_red :Q_NULLPTR);
}

void  ZrmRelayBase::watch_dog_enable     (bool enable)
{
  if(enable)
  {
    if(!m_watchdog_id)
       {
        m_watchdog_id = startTimer(std::chrono::seconds(1));
        watch_dog_reset();
       }
  }
  else
  {

    killTimer(m_watchdog_id);
    m_watchdog_id = 0;
  }
}

void  ZrmRelayBase::timerEvent(QTimerEvent * timer_event)
{
  if(timer_event->timerId() == m_watchdog_id )
  {
    timer_event->accept();
    if(!(--m_watchdog_value))
    {
      set_icon(lb_txrx, &network_offline);
      setToolTip(tr("Устройство не отвечает"));
    }
  }
  else
  ZrmChannelWidget::timerEvent(timer_event);
}

void  ZrmRelayBase::resizeEvent(QResizeEvent * event)
{
   ZrmChannelWidget::resizeEvent(event);
   auto labels = findChildren<QLabel*>();
   //int width  = (event->size().width() - labels.count()* layout()->spacing()*2)/labels.count();
   int height = event->size().height() - 2*layout()->margin();
   int sz = height;
   for(auto l :labels)
        l->setMaximumSize(sz,sz);
}

void  ZrmRelayBase::channel_session(unsigned ch_num)
{
   if(m_source && ch_num == m_channel)
   {
     zrm::params_t params;
     params.push_back( zrm::PARAM_STATE       ) ;
     params.push_back( zrm::PARAM_ERROR_STATE ) ;
     m_source->channel_subscribe_params(m_channel, params,true);
   }
}


