
/* SQL Data source
 * Ostapenko D. V. NIKTES 2019-03-25
 */



#ifndef ZRMDATASOURCE_H
#define ZRMDATASOURCE_H


#include <QtSql>
#include <qsharedpointer.h>
#include <map>

using  query_args_t = std::map<QString,QVariant>;

class ZrmDataSource : public QObject
{
    Q_OBJECT
    explicit ZrmDataSource(QObject *parent = nullptr);
public:
using  data_source_ptr_t = QSharedPointer<ZrmDataSource>;
    static QSqlDatabase      method_database  (bool as_charger);
    static QSqlDatabase      reports_database ();
    static QString           config_file_name (const QString &kind);
//    static bool              exec_query      (QSqlQuery & query, const QString & query_text, const query_args_t & args = query_args_t());
//    static bool              skip_empty      (QSqlQuery & query, int index = 0);
//    template <typename _Func>
//    static   int fetch_records(QSqlQuery & query, _Func func);

private:
    static bool              register_data_base(bool as_charge);
    static ZrmDataSource *   instance();
    static data_source_ptr_t data_source ;
    static const char *      charge_methods;
    static const char *      power_methods;
    static const char *      svc_reports      ;
};

#endif // ZRMDATASOURCE_H
