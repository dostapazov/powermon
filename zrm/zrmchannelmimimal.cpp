#include "zrmchannelmimimal.h"

ZrmChannelMimimal::ZrmChannelMimimal(QWidget *parent) :
    ZrmGroupWidget(parent)
{
    setupUi(this);
    set_active(false);
    connect(bStop, &QAbstractButton::clicked, this, &ZrmChannelMimimal::stop);
    ed_time->setVisible(false);
    for(auto w : findChildren<QWidget*>())
    {
      if(w!= bStop)
      {
         w->installEventFilter(this);
         w->setMouseTracking  (true);
      }
    }

}


void     ZrmChannelMimimal::set_active(bool active)
{
  if(active)
    {
     frame->setFrameShadow  (QFrame::Shadow::Sunken);
//     lb_mode->setFrameShape (QFrame::Shape::Box);
//     lb_mode->setFrameShadow(QFrame::Shadow::Raised);
     lb_mode->setForegroundRole(QPalette::ColorRole::Link);

    }
    else
    {
     frame->setFrameShadow(QFrame::Shadow::Raised);
//     lb_mode->setFrameShape (QFrame::Shape::NoFrame);
//     lb_mode->setFrameShadow(QFrame::Shadow::Plain);
     lb_mode->setForegroundRole(QPalette::ColorRole::Text);
    }
}

void  ZrmChannelMimimal::bind(zrm::ZrmConnectivity   * src,uint16_t chan, bool _connect_signals)
{
  if(src == m_source && m_channel == chan)
     update_controls();
  ZrmGroupWidget::bind(src,chan,_connect_signals);
}

void  ZrmChannelMimimal::clear_controls  ()
{
    for(auto lb : findChildren<QLabel*>(QString(), Qt::FindChildOption::FindDirectChildrenOnly))
    {
      set_icon(lb, Q_NULLPTR);
    }
    handle_error_state(0);
    volt->setValue(.0);
    curr->setValue(.0);
    volt->setSpecialValueText(ZrmBaseWidget::no_value);
    curr->setSpecialValueText(ZrmBaseWidget::no_value);
    ed_time->setText(no_value);

    bStop->setEnabled(false);
    lb_mode->setText(no_value);
}

void  ZrmChannelMimimal::update_controls()
{
    if(m_source && m_channel)
    {
        lb_mode->setText(m_source->channel_work_mode(m_channel) == zrm::zrm_work_mode_t::as_charger ? tr("ЗРУ"):tr("ИП"));
        channel_param_changed(m_channel,m_source->channel_params(m_channel));
    }
}

void ZrmChannelMimimal::update_state    (uint32_t state)
{
  zrm::oper_state_t oper_state;
  oper_state.state = uint16_t(state);
  bool stop_enable =  oper_state.state_bits.auto_on || oper_state.state_bits.start_pause;
  bStop->setEnabled(stop_enable);

}


void  ZrmChannelMimimal::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{

  if(channel == m_channel && m_source)
  {
     for(auto param : params_list)
     {
       QVariant value = m_source->param_get(m_channel, param.first);
       switch(param.first)
       {
         case zrm::PARAM_STATE        : update_state(param.second.udword);break;
         case zrm::PARAM_VOLT         :
                                        volt->setValue(value.toDouble()); break;
         case zrm::PARAM_CUR          : curr->setValue(value.toDouble()); break;
         case zrm::PARAM_WTIME        : ed_time ->setText(value.toString()); break;
       //case zrm::PARAM_STG_NUM      : set_number_value(lbStageNum, int(param.second.sdword), 2);break;
         case zrm::PARAM_ERROR_STATE  : handle_error_state(param.second.udword); break;
       //case zrm::PARAM_ZRMMODE      : edMode->setText(m_source->zrm_mode_text(param.second.udword)); break;
         default: break;
      }
     }
  }
  ZrmGroupWidget::channel_param_changed(channel, params_list);
}

void  ZrmChannelMimimal::channel_session(unsigned ch_num)
{
  if(m_source && ch_num == m_channel)
  {
    if(m_source->channel_session(m_channel).is_active())
    {
      zrm::params_t params;
      params.push_back( zrm::PARAM_STATE       ) ;
      params.push_back( zrm::PARAM_CUR         ) ;
      params.push_back( zrm::PARAM_VOLT        ) ;
      params.push_back( zrm::PARAM_WTIME       ) ;
      params.push_back( zrm::PARAM_ERROR_STATE ) ;
      m_source->channel_subscribe_params(m_channel, params,true);
      volt->setSpecialValueText( QString() );
      curr->setSpecialValueText( QString() );

    }

  }
}


void ZrmChannelMimimal::handle_error_state(unsigned err_code)
{
     setToolTip(m_source->zrm_error_text(err_code));
}


void ZrmChannelMimimal::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
    ZrmGroupWidget::mousePressEvent(event);
};

void     ZrmChannelMimimal::start()
{
  if(m_source && m_channel)
      m_source->channel_start(m_channel);
}

void     ZrmChannelMimimal::stop ()
{
  if(m_source && m_channel)
      m_source->channel_stop(m_channel);
}

void     ZrmChannelMimimal::set_method(const zrm::zrm_method_t & method)
{
    if(m_source && m_channel)
        m_source->channel_set_method(m_channel, method);
}

zrm::zrm_work_mode_t ZrmChannelMimimal::work_mode()
{
  return (m_source && m_channel) ? m_source->channel_work_mode(m_channel) : zrm::zrm_work_mode_t::as_charger;
}

bool  ZrmChannelMimimal::eventFilter(QObject * target,QEvent * event)
{
    switch(event->type())
    {
      case QEvent::MouseMove            : emit mouse_over();break;
      case QEvent::MouseButtonRelease   : emit clicked()   ;break;
      case QEvent::MouseButtonPress     : emit clicked()   ;break;
      default: break;
    }
    return ZrmBaseWidget::eventFilter(target, event);
}


