#ifndef REPORTCOMMON_H
#define REPORTCOMMON_H

#include "ui_reportcommon.h"
#include <zrmreportdatabase.h>
#include <qtablewidget.h>

constexpr int REPORT_COLUMN_DATA      = 3;
constexpr int REPORT_COLUMN_USER      = 4;
constexpr int REPORT_COLUMN_DURATION  = 5;
constexpr int REPORT_COLUMN_POWER     = 6;
constexpr int REPORT_COLUMN_CAPACITY  = 7;


class ReportCommon : public QWidget, private Ui::ReportCommon
{
    Q_OBJECT
    Q_DISABLE_COPY(ReportCommon)
    Q_DISABLE_MOVE(ReportCommon)

public:
    explicit ReportCommon(QWidget *parent = nullptr);
    ~ReportCommon() override;
private slots:
    void users_btn_clicked  ();
    void types_btn_clicked  ();
    void numbers_btn_clicked();

    void user_new           ();
    void user_apply         ();
    void user_revert        ();
    void user_mark_del      ();
    void type_row_changed   (const QModelIndex &current);
    void number_row_changed (const QModelIndex &current);
    void report_row_changed (const QModelIndex &current);
    void switch_pages       (bool checked);
    void read_reports       ();




private :
    void init_actions();
    void open_users  ();
    void open_types  ();
    void open_numbers();

    QSqlQuery report_query_get();
    void      report_query_bind_values(QSqlQuery & query);


    QSqlQueryModel   *m_reports_model        = Q_NULLPTR;
    QSqlQueryModel   *m_report_details_model = Q_NULLPTR;
    //static
    ZrmReportDatabase rep_database;
};

#endif // REPORTCOMMON_H
