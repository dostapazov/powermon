#include "zrmwidget.h"

ZrmWidget::ZrmWidget(QWidget *parent) :
    ZrmGroupWidget (parent)
{
    setupUi(this);
    connect(bNextChannel, &QAbstractButton::clicked, this, &ZrmWidget::next_channel);
    connect(bPrevChannel, &QAbstractButton::clicked, this, &ZrmWidget::prev_channel);
    for(auto pb : gb_additional->findChildren<QAbstractButton*>())
    {
      pb->setCheckable(true);
      connect(pb, &QAbstractButton::toggled, this, &ZrmWidget::additional_button_toggeld);
    }

    zrm_method->setVisible(false);
    gb_additional->setVisible(false);
    bReport->setChecked(true);
    zrm_method->set_details_enable(false);

}

void  ZrmWidget::bind(zrm::ZrmConnectivity   * src, uint16_t chan, bool _connect_signals)
{
  ZrmGroupWidget::bind(src, chan, _connect_signals);
}

void ZrmWidget::update_controls()
{
  ZrmGroupWidget::update_controls();
 if(m_source && m_channel)
 {
  zrm::zrm_work_mode_t wm = m_source->channel_work_mode(m_channel);
  QString str = QString("%1 : %2").arg( m_source->name()  ).arg(m_channel);
  dev_name->setText(str);
  if(wm  == zrm::zrm_work_mode_t::power)
  {
      //Режим источника МАСАКБ - запретить
     if(bMasakb->isChecked())
     {
        bMonitor->setChecked(true);
     }
     bMasakb->setEnabled(false);
  }
  else
  {
   bMasakb->setEnabled(true);
  }
 }
 update_buttons_visible();
}

void ZrmWidget::clear_controls()
{
  ZrmGroupWidget::clear_controls();
  QString str;
  if(m_source && m_channel)
  {
   str = QString("%1 : %2").arg( m_source->name()  ).arg(m_channel);
  }
 dev_name->setText(str);
}

void ZrmWidget::update_buttons_visible()
{
   bool visible = m_source && m_channel && m_source->channel_work_mode(m_channel) == zrm::charger;
   bMasakb->setVisible(visible);
   bReport->setVisible(visible);
   if(!visible && (bMasakb->isChecked() || bReport->isChecked()) )
       bDevMeth->setChecked(true);
}

void ZrmWidget::show_report()
{
 additional_widgets->setCurrentWidget(zrm_report);
 bReport->setChecked(true);
}

void ZrmWidget::show_monitor()
{
 additional_widgets->setCurrentWidget(zrm_mon);
 bMonitor->setChecked(true);
}

void ZrmWidget::show_cells  ()
{
    additional_widgets->setCurrentWidget(zrm_cells);
    zrm_cells->update_params();
    bMasakb->setChecked(true);
}

void ZrmWidget::show_dev_meth()
{
 additional_widgets->setCurrentWidget(zrm_devmeth);
 bDevMeth->setChecked(true);
}

void ZrmWidget::show_params  ()
{
  additional_widgets->setCurrentWidget(zrm_params);
  bParams->setChecked(true);
}


void ZrmWidget::show_calibrate()
{
  additional_widgets->setCurrentWidget(zrm_calibrate);
}



void ZrmWidget::show_additional(bool visible)
{
   bAddition->setChecked(visible);
}

void ZrmWidget::additional_button_toggeld(bool checked)
{
  if(checked)
  {
   QObject *src = sender();
   if(src == bReport   ) show_report   ();
   if(src == bMonitor  ) show_monitor  ();
   if(src == bMasakb   ) show_cells    ();
   if(src == bDevMeth  ) show_dev_meth ();
   if(src == bParams   ) show_params   ();
   if(src == bCalibrate) show_calibrate();
   zrm_params->set_active(bParams->isChecked());
  }
}


bool ZrmWidget::method_is_showing()
{
  return bShowMethod->isChecked();
}

bool ZrmWidget::additional_is_showing()
{
 return bAddition->isChecked();
}

void ZrmWidget::show_method ( bool visible )
{
   bShowMethod->setChecked(visible);
}

