#ifndef ZRMREADYWIDGET_H
#define ZRMREADYWIDGET_H

#include "ui_zrmreadywidget.h"
#include <zrmbasewidget.h>
#include <zrm_connectivity.hpp>
#include <zrmreadylayout.h>
#include <zrmreadyaccum.h>



class ZrmChannelMimimal;


class ZrmReadyWidget : public ZrmBaseWidget, private Ui::ZrmReadyWidget
{
    Q_OBJECT
    Q_DISABLE_COPY(ZrmReadyWidget)

public:
    explicit ZrmReadyWidget(QWidget *parent = nullptr);
    ~ZrmReadyWidget() override;
    QSize sizeHint() const  override;
    ZrmChannelMimimal * current_ready();
    int ready_count();
    ZrmChannelMimimal * ready_at   (int idx);
    ZrmReadyAccum     * ready_accum();

signals:
    void channel_activated (zrm::ZrmConnectivity * conn, unsigned channel);
    void channel_mouse_over(ZrmChannelMimimal * w);
public slots:
    void update_ready();
    void next_channel    ();
    void prev_channel    ();
private slots:
    void zrm_clicked    ();
    void zrm_mouse_over ();
private:
    void                resizeEvent(QResizeEvent * event) override;
    void                set_layout_count     (int count);
    ZrmChannelMimimal * create_channel_widget();
    void                zrm_chanhel_activate (ZrmChannelMimimal * w);
    ZrmReadyLayout    * m_ready_layout = Q_NULLPTR;
    ZrmChannelMimimal * m_current      = Q_NULLPTR;
    ZrmReadyAccum     * m_ready_accum  = Q_NULLPTR;
};


inline ZrmChannelMimimal * ZrmReadyWidget::current_ready()
{
  return m_current;
}
#endif // ZRMREADYWIDGET_H
