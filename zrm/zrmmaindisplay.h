/*
 * Ostapenko D.V. NIKTES 2019-03-14
 * Main display of the device
*/

#ifndef ZRMMAINDISPLAY_H
#define ZRMMAINDISPLAY_H

#include <zrmbasewidget.h>
#include "ui_zrmmaindisplay.h"
#include <qicon.h>

class ZrmMainDisplay : public ZrmChannelWidget, private Ui::ZrmMainDisplay
{
    Q_OBJECT
public:
    explicit      ZrmMainDisplay(QWidget *parent = nullptr);
 signals:
         void  method_choose();
 protected slots:

         void  manual_method_changed(const QString & str);
         void  start_stop   ();
         void  pause        ();
         void  reset_error  ();

 protected:
         virtual void  update_controls() override;
         virtual void  clear_controls() override;
         virtual void  channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  ) override;
         virtual void    on_connected         (bool con_state) override;
         virtual void    on_ioerror           (const QString & error_string) override;

         void  channel_session  (unsigned ch_num) override;

         void  make_request  ();
         void  setup_method  ();
         void  update_state    (uint32_t state);
         void  set_method_duration(zrm::zrm_method_t & method,const QString & str);
         void  handle_error_state (uint32_t err_code);
         void  update_method_controls();

         bool     m_auto_method = false;
         QString  m_model_name  ;
         uint16_t m_method_id   = zrm::METHOD_UNKNOWN_ID;
         static void            init_icons();
         static QIcon           start_icon;
         static QIcon           stop_icon;
         static QIcon           pause_icon;
};

#endif // ZRMMAINDISPLAY_H
