#ifndef ZRMWIDGET_H
#define ZRMWIDGET_H

#include "ui_zrmwidget.h"
#include <zrmbasewidget.h>

class ZrmWidget : public ZrmGroupWidget, private Ui::ZrmWidget
{
    Q_OBJECT
public:
    explicit ZrmWidget(QWidget *parent = nullptr);
    void  bind(zrm::ZrmConnectivity   * src, uint16_t chan, bool _connect_signals = true) override;
    bool method_is_showing();
    bool additional_is_showing();
    ZrmMainDisplay * main_display(){return zrm_display;}
signals:
    void next_channel();
    void prev_channel();
public slots:
    void show_method   (bool visible);
    void show_report   ();
    void show_monitor  ();
    void show_cells    ();
    void show_dev_meth ();
    void show_params   ();
    void show_calibrate();
    void show_additional(bool visible);
private slots:
    void additional_button_toggeld(bool checked);
protected:
    void update_controls() override;
    void update_buttons_visible();
    void clear_controls () override;
};

#endif // ZRMWIDGET_H
