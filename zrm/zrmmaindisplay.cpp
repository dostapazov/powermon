#include "zrmmaindisplay.h"
#include "zrmmethodchoose.h"
#include <signal_bloker.hpp>
#include <qdesktopwidget.h>
#include <qscreen.h>

QIcon           ZrmMainDisplay::start_icon;
QIcon           ZrmMainDisplay::stop_icon;
QIcon           ZrmMainDisplay::pause_icon;


ZrmMainDisplay::ZrmMainDisplay(QWidget *parent) :
    ZrmChannelWidget(parent)
{
    setupUi(this);
    init_icons();
    connect(bMethod, &QAbstractButton::clicked, this, &ZrmMainDisplay::method_choose);
    bind(Q_NULLPTR,0);

    connect(edTimeLimit , &QLineEdit::textChanged      , this, &ZrmMainDisplay::manual_method_changed);
#if QT_VERSION < QT_VERSION_CHECK(5,14,0)
    connect(sbCurrLimit , QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged), this, &ZrmMainDisplay::manual_method_changed);
    connect(sbVoltLimit , QOverload<const QString &>::of(&QDoubleSpinBox::valueChanged), this, &ZrmMainDisplay::manual_method_changed);
    connect(sbCycleTotal, QOverload<const QString &>::of(&QSpinBox::valueChanged),       this, &ZrmMainDisplay::manual_method_changed);
#else
    connect(sbCurrLimit , QOverload<const QString &>::of(&QDoubleSpinBox::textChanged), this, &ZrmMainDisplay::manual_method_changed);
    connect(sbVoltLimit , QOverload<const QString &>::of(&QDoubleSpinBox::textChanged), this, &ZrmMainDisplay::manual_method_changed);
    connect(sbCycleTotal, QOverload<const QString &>::of(&QSpinBox::textChanged),       this, &ZrmMainDisplay::manual_method_changed);
#endif
    connect(bStartStop  , &QAbstractButton::clicked, this, &ZrmMainDisplay::start_stop);
    connect(bPause      , &QAbstractButton::clicked, this, &ZrmMainDisplay::pause);
    connect(bResetError , &QAbstractButton::clicked, this, &ZrmMainDisplay::reset_error);
}

void            ZrmMainDisplay::init_icons()
{
    if(start_icon.isNull())
    {
      QString icon_path = QLatin1String(":/zrm/icons/%1");
      start_icon  = QIcon(icon_path.arg("start.png"));
      stop_icon   = QIcon(icon_path.arg("stop.png" ));
      pause_icon  = QIcon(icon_path.arg("control_pause.png"));
    }
}


/**
 * @brief ZrmMainWidget::update_controls
 * Установка всех параметров из источника
 */

void  ZrmMainDisplay::update_controls()
{
  if(m_source && m_channel)
  {
    channel_param_changed(m_channel,m_source->channel_params(m_channel));
    setup_method();
    bool value = m_source->channel_work_mode(m_channel) == zrm::zrm_work_mode_t::as_charger;
    QString cap_name = value ? tr("Ёмкость"):tr("Ток");
    QString cap_unit = value ? tr("   Ач"):tr("   А");
    lb_cap_name->setText (cap_name);
    edCapacity->setSuffix(cap_unit);
    bMethod->setEnabled   (true);
  }

}


void ZrmMainDisplay::clear_controls()
{

  SignalBlocker sb(findChildren<QWidget*>());
  bMethod->setEnabled(false);
  m_method_id  = zrm::METHOD_UNKNOWN_ID;
  m_model_name = QString();
  lbVolt      ->setValue(0);
  sbVoltLimit ->setValue(0.0);
  lbCurr      ->setValue(0);
  sbCurrLimit ->setValue(0.0);
  edCapacity  ->setValue(0.0);
  lb_work_time->setText (no_value);
  edTimeLimit ->setText (no_value);
  edMode      ->setText (no_value);
  lbStageNum  ->setValue(0);
  lbStageTotal->setValue(0);
  lbCycleNum  ->setValue(0);
  sbCycleTotal->setValue(0);
  edMethodName->setText (no_value);
  bMethod->setEnabled   (false);
  bPause->setEnabled    (false);
  bStartStop->setEnabled(false);
  edMode->setText(tr("Не назначено устройство"));
  handle_error_state(0);

}

void  ZrmMainDisplay::handle_error_state (uint32_t err_code)
{
  auto p = error_state->palette();
  p.setColor(QPalette::Text, Qt::red);
  error_state->setPalette(p);
  error_state->setText(m_source->zrm_error_text(err_code))  ;
  bResetError->setVisible(err_code);
}

void  ZrmMainDisplay::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
  SignalBlocker sb(findChildren<QWidget*>());
  if(channel == m_channel && m_source)
  {
     for(auto param : params_list)
     {
       QVariant value = m_source->param_get(m_channel, param.first);
       switch(param.first)
       {
         //case zrm::PARAM_CON          : channel_session(); break;
         case zrm::PARAM_STATE        : update_state(param.second.udword);break;
         case zrm::PARAM_WTIME        : lb_work_time ->setText(value.toString()); break;
         case zrm::PARAM_LTIME        : edTimeLimit->setText(value.toString()); break;
         case zrm::PARAM_CUR          : lbCurr->setValue(value.toDouble() ); break;
         case zrm::PARAM_LCUR         : sbCurrLimit->setValue(value.toDouble()); break;
         case zrm::PARAM_VOLT         : lbVolt->setValue(value.toDouble() ); break;
         case zrm::PARAM_LVOLT        : sbVoltLimit->setValue(value.toDouble()); break;
         case zrm::PARAM_CAP          : set_number_value(edCapacity , value.toDouble(), 3); break;
         case zrm::PARAM_STG_NUM      : lbStageNum->setValue(int(param.second.sdword));break;
         case zrm::PARAM_LOOP_NUM     : lbCycleNum->setValue(int(param.second.sdword));break;
         case zrm::PARAM_ERROR_STATE  : handle_error_state(param.second.udword);break;


//         case zrm::PARAM_FAULTL_DEV   :break;
//         case zrm::PARAM_MID          :break;
//         case zrm::PARAM_TRECT        :break;
//         case zrm::PARAM_TCONV        :break;
//         case zrm::PARAM_VOUT         :break;
//         case zrm::PARAM_DOUT         :break;
//         case zrm::PARAM_DIN          :break;
//         case zrm::PARAM_CCNT         :break;
         case zrm::PARAM_ZRMMODE      :edMode->setText(m_source->zrm_mode_text(param.second.udword)); break;
//         case zrm::PARAM_TEMP         :break;
//         case zrm::PARAM_METH_EXEC_RESULT: gen_result_report();break;
         case zrm::PARAM_METHOD_STAGES: setup_method()     ;break;
         default: break;
      }
     }
  }
  ZrmChannelWidget::channel_param_changed(channel, params_list);
}

void  ZrmMainDisplay::channel_session  (unsigned ch_num)
{
 bool wr_enabled = false;
 if(ch_num == m_channel)
 {
  wr_enabled =  m_source && !m_source->channel_session(m_channel).is_read_only();
  make_request();
 }

 bStartStop->setEnabled(wr_enabled);
 bPause->setEnabled    (wr_enabled);
}

void  ZrmMainDisplay::make_request  ()
{
 if(m_source)
   {
      zrm::params_t params;
      unsigned pv_first = zrm::PARAM_STATE;
      unsigned pv_last  = zrm::PARAM_ZRMMODE+1;
      params.resize(zrm::params_t::size_type(pv_last - pv_first));
      auto pb = params.begin();
      while(pb < params.end())
      {
           *pb = zrm::params_t::value_type(pv_first++);
           ++pb;
      }
    m_source->channel_subscribe_params(m_channel, params,true);
   }
}


void  ZrmMainDisplay::setup_method  ()
{
  SignalBlocker sb(findChildren<QWidget*>());
  auto method = m_source->channel_get_method(m_channel,false);
  if(method.m_method.m_id != m_method_id)
  {
    m_auto_method = method.m_method.method_kind() == zrm::method_kind_automatic;
    m_model_name  = QString();
    m_method_id   = method.m_method.m_id;
    update_method_controls();
  }
  else
  {
     m_model_name  = QString();
  }

  //qDebug() << Q_FUNC_INFO  <<" method_id " << m_method_id;


  QString method_name;
  if(m_model_name.isEmpty())
     method_name = to_utf(method.m_method.m_name,sizeof(method.m_method.m_name));
     else
     method_name = QString("%1:%2").arg(m_model_name).arg(to_utf(method.m_method.m_name,sizeof(method.m_method.m_name)));

   edMethodName->setText(method_name);

  //set_number_value(lbStageTotal,int(method.stages_count()), 2, infinity_symbol );
  lbStageTotal->setValue(int(method.stages_count()));
  sbCycleTotal->setValue(method.m_method.m_cycles_count);
  auto met_volt = method.m_method.voltage();
  auto met_curr = method.m_method.current();

  sbVoltLimit->setValue(met_volt);
  sbCurrLimit->setValue(met_curr);


  QString time_limit_string = zrm_method_duration_text(method);
  edTimeLimit->setText(time_limit_string);
  auto param = m_source->param_get(m_channel, zrm::PARAM_STG_NUM);
  //set_number_value(lbStageNum, param.toInt(),2);
  lbStageNum->setValue(param.toInt());

}

void ZrmMainDisplay::update_state    (uint32_t state)
{
  zrm::oper_state_t oper_state;
  oper_state.state = uint16_t(state);

  bool stopped = is_stopped();
  bool paused  = is_paused ();
//  qDebug()<<QString("Update state %1").arg(state,4,16,QLatin1Char('0'));
//  qDebug()<< tr(" auto on %1  is_stopped  %2 ").arg(oper_state.state_bits.auto_on).arg(stopped);
  bMethod   ->setEnabled(  stopped );
  bStartStop->setText   ( (stopped) ? tr("Пуск") : tr("Стоп"));
  bStartStop->setIcon   (  stopped  ? start_icon : stop_icon);

  bPause->setCheckable(paused);
  bPause->setChecked(paused);

  bPause->setVisible(!stopped || paused);
  bPause->setText   ( (paused ) ? tr("Дальше") : tr("Пауза"));
  update_method_controls();
}

void  ZrmMainDisplay::update_method_controls()
{
  bool is_stopped      = m_source && m_source->channel_is_stopped(m_channel);
  bool enabled = is_stopped & !m_auto_method;
  bool visible = m_method_id == 0;
  edTimeLimit->setEnabled(enabled);
  sbCycleTotal->setEnabled(enabled);
  sbVoltLimit->setEnabled( enabled);
  sbCurrLimit->setEnabled( enabled);
  bCycleDec->setEnabled( enabled);
  bCycleInc->setEnabled( enabled);
  bCurrDec->setEnabled( enabled);
  bCurrInc->setEnabled( enabled);
  bVoltDec->setEnabled( enabled);
  bVoltInc->setEnabled( enabled);

  edTimeLimit->setEnabled( !m_auto_method );

  bCurrDec->setVisible     (visible);
  bCurrInc->setVisible     (visible);
  sbCurrLimit->setReadOnly (m_auto_method );

  bVoltDec->setVisible     (visible);
  bVoltInc->setVisible     (visible);
  sbVoltLimit->setReadOnly (m_auto_method );

  bCycleDec->setVisible    (visible);
  bCycleInc->setVisible    (visible);
  sbCycleTotal->setReadOnly(m_auto_method );

}


void ZrmMainDisplay::set_method_duration(zrm::zrm_method_t &method, const QString & str)
{
    method.m_method.m_hours = method.m_method.m_minutes = method.m_method.m_secs = 0;
    QStringList sl = str.split(':');
    int i = 0;
    for(auto text : sl)
    {
      switch(i)
      {
       case 0: method.m_method.m_hours   = uint8_t(text.trimmed().toUInt());break;
       case 1: method.m_method.m_minutes = uint8_t(text.trimmed().toUInt());break;
       case 2: method.m_method.m_secs    = uint8_t(text.trimmed().toUInt());break;
       default : return;
      }
      ++i;
    }

}


void ZrmMainDisplay::manual_method_changed(const QString & str)
{
  auto method = m_source->channel_get_method(m_channel,false);
  if(method.stages_count())
  {
    QObject * src = sender();
    if(src == edTimeLimit )
    {
      set_method_duration(method, str);
    }

    if(src == sbCurrLimit )
      method.m_method.set_current(sbCurrLimit->value());

    if(src == sbVoltLimit )
        method.m_method.set_voltage(sbVoltLimit->value());

    if(src == sbCycleTotal)
       method.m_method.m_cycles_count = uint8_t(sbCycleTotal->value());
    m_source->channel_set_method(m_channel, method);
  }
}

void    ZrmMainDisplay::on_connected         (bool con_state)
{
  edMode->setText(con_state ? QString() : tr("Нет связи"));
}

void    ZrmMainDisplay::on_ioerror           (const QString & error_string)
{
   edMode->setText(error_string);
}

void  ZrmMainDisplay::start_stop   ()
{
  if(is_stopped())
      m_source->channel_start(m_channel);
  else
      m_source->channel_stop(m_channel);
}

void  ZrmMainDisplay::pause        ()
{
  if(is_paused())
      m_source->channel_start(m_channel);
      else
      m_source->channel_pause(m_channel);
}

void  ZrmMainDisplay::reset_error  ()
{
  m_source->channel_reset_error(m_channel);
}





