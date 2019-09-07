#ifndef ZRMRELAYBASE_H
#define ZRMRELAYBASE_H

#include "ui_zrmrelaybase.h"
#include <zrmbasewidget.h>
#include <qicon.h>


class ZrmRelayBase : public ZrmChannelWidget, private Ui::ZrmRelayBase
{
    Q_OBJECT
    friend class ZrmBaseWidget;
public:
    explicit      ZrmRelayBase(QWidget *parent = nullptr);
protected slots:
            void  flash(bool flash_on);
protected:
            void  channel_session(unsigned ch_num) override;
            void  timerEvent(QTimerEvent * timer_event) override;
            void  resizeEvent(QResizeEvent * event) override;
            void  update_controls() override;
            void  clear_controls () override;
            void  channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  ) override;
            void  on_connected         (bool            conn_state) override;
            void  on_ioerror           (const QString & error_string) override;
            void  channel_recv_packet  (unsigned channel, const zrm::recv_header_t * recv_data) override;
            void  channel_send_packet  (unsigned channel, const zrm::send_header_t * send_data) override;
            void  update_state         (uint32_t state);
            void  handle_error_state   (uint32_t error);

            void  watch_dog_enable     (bool enable);
            void  watch_dog_reset      (){m_watchdog_value = m_watchdog_period;}

            int   m_rcv_counter = 0;
            bool  m_switch_led  = true;
            int   m_watchdog_value  = 0;
            int   m_watchdog_period = 3;
            int   m_watchdog_id     = 0;
       uint32_t   m_error_state     = 0;
            bool  m_session_active  = false;

 static void      init_icons();

 static QIcon          network_rx;
 static QIcon          network_tx;
 static QIcon          network_idle;
 static QIcon          network_offline;

 static QIcon          relay_off;
 static QIcon          relay_on;
 static QIcon          current_out;
 static QIcon          current_in;
 static QIcon          modeU;
 static QIcon          modeUstab;
 static QIcon          modeI;
 static QIcon          modeIstab;
 static QIcon          pause_icon;
 static QIcon          empty_icon;
 static QIcon          led_red;
 static QIcon          led_green;

};


#endif // ZRMRELAYBASE_H
