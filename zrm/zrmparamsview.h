#ifndef ZRMPARAMSVIEW_H
#define ZRMPARAMSVIEW_H

#include "ui_zrmparamsview.h"
#include <zrmbasewidget.h>
#include <qmap.h>



class ZrmParamsView : public ZrmChannelWidget, private Ui::ZrmParamsView
{
    Q_OBJECT
public:
    enum     columns_t {column_name, column_value};

    explicit ZrmParamsView(QWidget *parent = nullptr);

    void    channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  ) override;
    void    update_controls      () override;
    void    clear_controls       () override;
    void    channel_session      (unsigned channel) override;
    void    set_active           (bool active);

protected slots:
    void    request ();
protected:
    void init_params();
    bool is_viewed_param(zrm::zrm_param_t param);
    using params_items_t  =  QMap<zrm::zrm_param_t, QTreeWidgetItem * >;
    using params_order_t  =  QMap<zrm::zrm_param_t,QString >;
    params_order_t   m_orders;
    params_items_t   m_items;
    QTimer           m_request_timer;
    bool             m_active = false;

};

#endif // ZRMPARAMSVIEW_H
