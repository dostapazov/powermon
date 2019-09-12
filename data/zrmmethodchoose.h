/* Ostapenko D. V.
 * NIKTES 2019-03-22
 * Choose method dialog
 *
 */

#ifndef ZRMMETHODCHOOSE_H
#define ZRMMETHODCHOOSE_H

#include "ui_zrmmethodchoose.h"

class ZrmMethodChoose : public QDialog, private Ui::ZrmMethodChoose
{
    Q_OBJECT
    Q_DISABLE_COPY(ZrmMethodChoose)
public:
    explicit ZrmMethodChoose(QWidget *parent = nullptr);
    ~ZrmMethodChoose() override;
    bool  get_as_charger(){return m_work_mode;}
    void  set_mode(zrm::zrm_work_mode_t value);
    bool  get_method(zrm::zrm_method_t  & zrm_method, QTextCodec * codec, bool * is_automatic = Q_NULLPTR, QString * model_name = Q_NULLPTR);
    void  store_last_manual_values    ();
    void  restore_last_manual_values();
    int   exec() override;
    bool  open_database(bool remake_tree = false);
    void  close_database();
signals:
    void   method_choosed();
private    slots:
    void   sl_method_selected (QTreeWidgetItem * item);
    void   sl_methods_button_toggled(bool checked);
    void   sl_man_value_changed(double arg1);

private:
    bool    make_manual_method(zrm::zrm_method_t  & zrm_method, QTextCodec * codec);

    QString manual_value_file_name();
    zrm::zrm_work_mode_t   m_work_mode = zrm::as_charger;
    QTreeWidgetItem * m_current_method = Q_NULLPTR;
};

#endif // ZRMMETHODCHOOSE_H
