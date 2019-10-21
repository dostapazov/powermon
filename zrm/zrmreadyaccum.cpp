#include "zrmreadyaccum.h"
#include <qpainter.h>
#include <qdebug.h>


QIcon        ZrmReadyAccum::icon_red;
QIcon        ZrmReadyAccum::icon_green;
QIcon        ZrmReadyAccum::icon_yellow;

ZrmReadyAccum::ZrmReadyAccum(QWidget *parent) : ZrmBaseWidget (parent)
{
  setSizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
  setGeometry(0,0,48,48);
  init_icons();
  connect (&ZrmBaseWidget::flash_timer, &ZrmFlashTimer::flash, this, &ZrmReadyAccum::update_view);


}


void ZrmReadyAccum::init_icons()
{
    if(icon_red.isNull())
    {
      QString icon_path = QLatin1String(":/zrm/icons/%1");

      icon_red         = QIcon(icon_path.arg("ledred.png"));
      icon_green       = QIcon(icon_path.arg("ledgreen.png"));
      icon_yellow      = QIcon(icon_path.arg("ledyellow.png"));
    }

}

void  ZrmReadyAccum::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
    zrm::ZrmConnectivity * conn = dynamic_cast<zrm::ZrmConnectivity*>(sender());
    if(!conn) conn = m_source;

    auto p = params_list.find(zrm::PARAM_STATE);
    if(p!=params_list.end())
     {
       handle_state(conn, channel, p->second.udword);
     }

    p = params_list.find(zrm::PARAM_ERROR_STATE);
    if(p!=params_list.end())
        handle_error_state(conn, channel,p->second.udword);
    ZrmBaseWidget::channel_param_changed(channel,params_list);
}

void ZrmReadyAccum::source_destroyed     (zrm::ZrmConnectivity * src)
{
  Q_UNUSED(src)
}

void ZrmReadyAccum::handle_state      (zrm::ZrmConnectivity* __conn, unsigned channel, uint32_t state)
{
    Q_UNUSED(__conn)
    Q_UNUSED(channel)
    Q_UNUSED(state)
    int exec_count = 0;
    for(auto con: zrm::ZrmConnectivity::connectivities())
    {
        m_source = con;
        for(auto chan : con->channels())
        {
          if(con->channel_is_executing(chan))
              ++exec_count;
        }
    }
    m_source = Q_NULLPTR;
    if(m_exec_count != exec_count)
    {
       m_exec_count = exec_count;
       //qDebug()<<QString(" Running count %1").arg(exec_count);
       update_view(true);
    }
}

void ZrmReadyAccum::channel_session(unsigned ch_num)
{
  if(m_source)
  {
    m_source->channel_subscribe_param(uint16_t(ch_num), zrm::PARAM_STATE, true);
    m_source->channel_subscribe_param(uint16_t(ch_num), zrm::PARAM_ERROR_STATE, true);
  }
}

void ZrmReadyAccum::handle_error_state(zrm::ZrmConnectivity* __conn, unsigned channel, uint32_t error_code)
{
   Q_UNUSED(__conn)
   Q_UNUSED(channel)
   Q_UNUSED(error_code)

   int error_count = 0;
   for(auto con: zrm::ZrmConnectivity::connectivities())
   {
       m_source = con;
       for(auto chan : con->channels())
       {
         if(param_get(chan, zrm::PARAM_ERROR_STATE).toUInt())
             ++error_count;
       }
   }
   m_source = Q_NULLPTR;

   if(m_error_count != error_count)
   {
     if(m_error_count < error_count)
     {
         QSound::play(":/zrm/sounds/alarm.wav");
     }

     //qDebug()<<QString(" Error count %1").arg(error_count);
     m_error_count = error_count;
     update_view(true);
     if(error_code) ZrmBaseWidget::flash_timer.start_flash();
   }

}


void    ZrmReadyAccum::update_connectivities()
{
  for(auto con: zrm::ZrmConnectivity::connectivities())
  {
      connect_signals   (con, true);
      for(auto ch: con->channels())
      {
        m_source = con;
        channel_param_changed(ch,con->channel_params(ch) );
      }
  }
  m_source = Q_NULLPTR;
}


const QIcon  ZrmReadyAccum::get_current_icon(bool flash_on)
{
  QIcon  icon = m_action_icon;
  if(m_error_count)
  {
    icon = (flash_on) ? icon_red : icon_yellow ;
  }
  else
  {
    if(m_exec_count)
        icon = m_exec_count == zrm::ZrmConnectivity::channels_total() ? icon_green : icon_yellow;
  }
  return icon;
}

QString  ZrmReadyAccum::get_current_tip ()
{
    QString ret = m_action_tip;
    if(m_error_count)
    {
      ret = tr("Ошибка при выполнении");
    }
    else
    {
      if(m_exec_count)
          ret = m_exec_count == zrm::ZrmConnectivity::channels_total() ? tr("Все каналы работают") : tr("Не все каналы стартовали");
    }
  return ret;
}



void ZrmReadyAccum::update_view(bool flash_on)
{
    if(m_action)
    {
      m_action->setIcon   (get_current_icon(flash_on));
      m_action->setToolTip(get_current_tip());
    }
    repaint();
}

void ZrmReadyAccum::paintEvent        (QPaintEvent * pe  )
{
    //qDebug()<<Q_FUNC_INFO;
    Q_UNUSED(pe)
    QPainter p(this);
    auto icon = get_current_icon(ZrmBaseWidget::flash_timer.is_flash_on());
    p.drawPixmap(geometry(), icon.pixmap(geometry().size()));
}

void ZrmReadyAccum::set_action(QAction * act)
{
  if(m_action != act)
  {
    if(m_action)
      {
        m_action->setIcon(m_action_icon);
        m_action->setToolTip(m_action_tip);
      }
    m_action_icon = act ? act->icon() : QIcon  ();
    m_action_tip  = act ? act->toolTip() : QString();
    m_action = act;
  }
}


