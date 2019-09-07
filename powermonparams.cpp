#include "powermonparams.h"
#include <qpushbutton.h>
#include <mutli_iodev_params.h>

PowerMonParams::PowerMonParams(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    QPushButton * ok_btn = buttonBox->button(QDialogButtonBox::Ok);
    ok_btn->setEnabled(false);
    connect(conn_params, &mutli_iodev_params::params_valid, ok_btn, &QPushButton::setEnabled);
}

QString  PowerMonParams::connection_string()
{
 return conn_params->connectionString();
}

bool     PowerMonParams::connection_string(const QString & str)
{
  conn_params->setConnectionString(str);
  return conn_params->check_params_valid();
}
