#ifndef POWERMONPARAMS_H
#define POWERMONPARAMS_H

#include "ui_powermonparams.h"

class PowerMonParams : public QDialog, private Ui::PowerMonParams
{
    Q_OBJECT
public:
    explicit PowerMonParams(QWidget *parent = nullptr);
    QString  connection_string();
    bool     connection_string(const QString & str);
};

#endif // POWERMONPARAMS_H
