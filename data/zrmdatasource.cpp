/* Get databases for diferent purpose
 * Ostapenko D. V.
 * NIKTES 2019-03-22
 */


#include "zrmdatasource.h"
#include <qdir.h>
#include <qfile.h>
#include <qcoreapplication.h>
#include <qdebug.h>

ZrmDataSource::data_source_ptr_t ZrmDataSource::data_source ;

const char *      ZrmDataSource::charge_methods = "cmethods";
const char *      ZrmDataSource::power_methods  = "pmethods";
const char *      ZrmDataSource::svc_reports        = "svcreports";


ZrmDataSource::ZrmDataSource(QObject *parent) : QObject(parent)
{
}

ZrmDataSource * ZrmDataSource::instance()
{
  if(data_source.isNull())
     {
      data_source.reset(new ZrmDataSource);
     }
  return data_source.data();
}

/**
 * @brief check_and_restore
 * @param conn_str
 * @return full path to data base
 * Проверяет существование файла и восстанавливает его из ресурсов при необходимости
 */

QString check_and_restore(const QString & conn_str)
{
 QString db_path;
//#ifdef Q_OS_ANDROID
 {
  db_path = QStandardPaths::writableLocation(QStandardPaths::DataLocation);
  qDebug()<<db_path;
  QDir  dir(db_path);
  //db_path = qApp->applicationName();
  //qDebug()<<db_path;

  if(!dir.exists(db_path))
      dir.mkpath(db_path);
  dir.cd(db_path);
  db_path = dir.absolutePath();
  qDebug()<<db_path;
 }
//#else
// db_path = qApp->applicationDirPath();
//#endif

 QString file_name = QString("%1.%2").arg(conn_str).arg("db3");
 QString src_file = QString(":/data/%1").arg(file_name);

 QDir dir(db_path);
 QString data_dir  = QLatin1String("data");

 if(!dir.exists(data_dir)){ dir.mkdir(data_dir); }

 db_path = QString("%1/%2/%3").arg(db_path).arg(data_dir).arg(file_name);
 QFile dest(db_path);
 if(!dest.exists() && dest.open(QFile::WriteOnly|QFile::Truncate))
 {
   QFile source(src_file);
   if(source.open(QFile::ReadOnly))
   {
     constexpr int chunk_size = 8192;
     while(!source.atEnd())
     {
       dest.write( source.read(chunk_size) );
     }
   }
 }
 return db_path;
}


bool              ZrmDataSource::register_data_base(bool as_charge)
{
   bool ret = true;
    QString conn_str = QLatin1String( as_charge ? charge_methods : power_methods) ;
    if(!QSqlDatabase::contains(conn_str))
    {
      QString db_path =  check_and_restore(conn_str);
      QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", conn_str);
      db.setDatabaseName(db_path);
      ret = db.open();
      if(!ret) qDebug()<< db.lastError();
    }
  return ret;
}


QSqlDatabase      ZrmDataSource::method_database(bool as_charger)
{
  register_data_base(as_charger);
  return QSqlDatabase::database(QLatin1String(as_charger ? charge_methods : power_methods));
}


QSqlDatabase      ZrmDataSource::reports_database ()
{
   QString conn_str = QLatin1String(svc_reports);
   if(!QSqlDatabase::contains(conn_str))
   {
      QString db_path = check_and_restore(conn_str);
      QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", conn_str);
      db.setDatabaseName(db_path);
      if(!db.open())
        qDebug()<< db.lastError();
   }
  return QSqlDatabase::database(conn_str);
}


QString ZrmDataSource::config_file_name(const QString & kind)
{
  QString location = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation);
  QDir dir;
  if(!dir.exists(location))
      dir.mkdir(location);
  QString cfg_name = QString("%1/%2%3.json").arg(location).arg(qApp->applicationName()).arg(kind);
  return cfg_name;
}


