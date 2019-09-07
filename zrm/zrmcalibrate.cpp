#include "zrmcalibrate.h"

ZrmCalibrate::ZrmCalibrate(QWidget *parent) :
    ZrmChannelWidget(parent)
{
    setupUi(this);
    for(auto b : findChildren<QAbstractButton*>())
        connect(b, &QAbstractButton::clicked, this, &ZrmCalibrate::set_real_value);
}


void ZrmCalibrate::set_real_value()
{
  QObject * src = sender();
  double value =.0 ;
  zrm::zrm_param_t param = zrm::PARAM_CON;
  if(src == this->bSetVoltage)
  {
    param = zrm::PARAM_VOLT;
    value = vVoltage->value();
  }
  if(src == this->bSetCurrent)
  {
   param = zrm::PARAM_CUR;
   value = vCurrent->value();
  }
  if(param && m_source)
  {
    int16_t  wr_value = int16_t(value*1000.0);
    m_source->channel_write_param(m_channel, zrm::WM_PROCESS_AND_WRITE, param,  &wr_value, sizeof(wr_value));
  }

}
