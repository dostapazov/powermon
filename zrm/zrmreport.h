#ifndef ZRMREPORT_H
#define ZRMREPORT_H

#include "ui_zrmreport.h"
#include <zrmbasewidget.h>
#include <zrmreportdatabase.h>

class ZrmReport : public ZrmChannelWidget, private Ui::ZrmReport
{
    Q_OBJECT

public:
    explicit ZrmReport(QWidget *parent = nullptr);
protected slots:
     void save_report();
     void save_report_sql();
     void gen_result_report();
     void akb_type_changed (int idx);
protected:
    void save_report_html(const QString & file_name);
    void save_report_pdf (const QString & file_name);
    void update_controls() override;
    void clear_controls () override;
    void channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  ) override;
    void channel_session      (unsigned ch_num) override;
 QString make_report(const QString & a_maker_name, const QString & a_akb_type
                     , const QString & a_akb_number, bool details, const zrm::method_exec_results_t & results);
 protected:
 zrm::method_exec_results_t m_method_result;
 ZrmReportDatabase          m_rep_db;


};

#endif // ZRMREPORT_H
