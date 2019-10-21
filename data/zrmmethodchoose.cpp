#include "zrmmethodchoose.h"
#include <qjsonobject.h>
#include <qjsondocument.h>

ZrmMethodChoose::ZrmMethodChoose(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    gb_manual->setVisible   (false);
    bCancel->setVisible     (false);
    gb_add_flags->setVisible(false);
    connect(bOk          , &QAbstractButton::clicked, this, &ZrmMethodChoose::method_choosed);

    connect(bAutoMethod  , &QAbstractButton::clicked, this, &ZrmMethodChoose::sl_methods_button_toggled);
    connect(bAnyMethod   , &QAbstractButton::clicked, this, &ZrmMethodChoose::sl_methods_button_toggled);
    connect(bManual      , &QAbstractButton::clicked, this, &ZrmMethodChoose::sl_methods_button_toggled);

    connect(methods      , &ZrmMethodsTree::method_selected , this, &ZrmMethodChoose::sl_method_selected);
    connect(manLimI      , QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &ZrmMethodChoose::sl_man_value_changed) ;
    connect(manLimU      , QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &ZrmMethodChoose::sl_man_value_changed) ;
}

ZrmMethodChoose::~ZrmMethodChoose()
{
   close_database();
}

bool ZrmMethodChoose::open_database(bool remake_tree)
{
    tbCharge   ->setText(QString::fromUtf8(zrm::stage_t::stage_type_name(m_work_mode, zrm::STT_CHARGE)));
    tbDischarge->setText(QString::fromUtf8(zrm::stage_t::stage_type_name(m_work_mode, zrm::STT_DISCHARGE)));

    //tbCharge   ->setText(m_work_mode == zrm::as_charger ? tr("ЗАРЯД" ) : tr("ИСТОЧНИК"));
    //tbDischarge->setText(m_work_mode == zrm::as_charger ? tr("РАЗРЯД") : tr("НАГРУЗКА"));

    bAutoMethod->setText( m_work_mode == zrm::as_charger  ? tr("Выбрать модель АКБ"   )  : tr("Автоматическая программа") );
    bAnyMethod ->setText( m_work_mode == zrm::as_charger  ? tr("Без выбора модели АКБ")  : tr("Ручная программа")  );
    gb_add_flags->setVisible(m_work_mode == zrm::zrm_work_mode_t::as_charger);
    restore_last_manual_values();

    if(!bManual->isChecked())
       {
        if(remake_tree) methods->treeWidget()->clear();
        return methods->open_database(m_work_mode,bAnyMethod->isChecked());
       }
  return true;
}


void ZrmMethodChoose::close_database()
{
 store_last_manual_values();
 methods->close_database ();
}

int ZrmMethodChoose::exec()
{
  setSizeGripEnabled(true);
  open_database();
  bCancel->setVisible(true);
  connect(bOk, &QAbstractButton::clicked, this, &QDialog::accept);
  return QDialog::exec();
}


void  ZrmMethodChoose::set_mode(zrm::zrm_work_mode_t value)
{
  if(m_work_mode != zrm::zrm_work_mode_t(value))
  {
    m_work_mode = zrm::zrm_work_mode_t(value);
  }
}


void ZrmMethodChoose::sl_methods_button_toggled(bool checked)
{
   m_current_method = Q_NULLPTR;
   if(checked && isVisible())
   {
       QObject * src = sender();
       if(src)
       {
         bool manual = src == bManual;
         if(!manual)
         {
            methods->open_database(m_work_mode, src == bAnyMethod);
            auto tw   = methods->treeWidget();
            tw->setFocus(Qt::OtherFocusReason);
            auto item = tw->currentItem();
            if(item)
            {
              //tw->setItemSelected(item,true);
              item->setSelected(true);
              sl_method_selected(item);
            }
            else
              method_minmax->clear_controls();

         }
         else
           sl_method_selected(Q_NULLPTR);
         gb_manual->setVisible (manual);
         gb_methods->setVisible(!manual);
       }
   }
}



void   ZrmMethodChoose::sl_method_selected (QTreeWidgetItem * item)
{
  m_current_method = item;
  bool sel_enabled = false;
  zrm::zrm_method_t method;
  if(item)
  {
    if(methods->method_valid(item))
    {
     sel_enabled = true ;
    }
    else
    {
        m_current_method = Q_NULLPTR;
        sel_enabled = false ;
    }
  }
  else
   {
    sel_enabled = (bManual->isChecked() && (!qFuzzyIsNull(manLimU->value()) || tbDischarge->isChecked()) && !qFuzzyIsNull(manLimI->value()));
   }
  if(sel_enabled)
     get_method(method,Q_NULLPTR ) ;
  method_minmax->method_minmax(method);
  bOk->setEnabled(sel_enabled);
}

bool  ZrmMethodChoose::make_manual_method(zrm::zrm_method_t  & zrm_method, QTextCodec * codec)
{
 QString    text = tr("Ручной %1").arg(tbCharge->isChecked() ? tbCharge->text() : tbDischarge->text());
 QByteArray name = codec ? codec->fromUnicode(text) : text.toLocal8Bit();
 zrm::method_t  & met = zrm_method.m_method ;
 met = zrm::method_t();
 met.m_id = 0;
 strncpy(met.m_name,name.constData(),std::min(sizeof(met.m_name), size_t(name.size())));
 met.set_voltage (manLimU->value());
 met.set_current (manLimI->value());
 met.set_capacity(manLimI->value());
 if(!bUnlimitTime->isChecked())
 {
  met.m_secs    = uint8_t(manLimSecunds->value());
  met.m_minutes = uint8_t(manLimMinutes->value());
  met.m_hours   = uint8_t(manLimHour->value());
 }
 met.m_stages  = 1;
 zrm_method.m_stages.resize(1);

 zrm::stage_t st;
 st.m_number = 1;
 st.m_type   = tbCharge->isChecked() ? zrm::stage_type_t::STT_CHARGE : zrm::stage_type_t::STT_DISCHARGE;
 st.set_charge_volt   (1.0, 1.0);
 st.set_charge_curr   (1.0, 1.0);
 st.set_discharge_volt(1.0, 1.0);
 st.set_discharge_curr(1.0, 1.0);
 if(m_work_mode == zrm::as_charger)
 {
   st.m_stage_flags |= cbCapMeasure    ->isChecked() ? zrm::STFL_CAPACITY_MEASHURE  : 0;
   st.m_stage_flags |= cbCheckCondition->isChecked() ? zrm::STFL_CONDITION_CHECK    : 0;
 }
 zrm_method.m_stages.at(0) = st;

 return true;
}

bool  ZrmMethodChoose::get_method(zrm::zrm_method_t  & zrm_method, QTextCodec * codec, bool *is_automatic, QString *model_name)
{
  if(m_current_method && !bManual->isChecked())
  {
   if(is_automatic) * is_automatic = bAutoMethod->isChecked();
   return methods->get_method(zrm_method, codec, model_name);
  }
  if(is_automatic) *is_automatic = false;
  if(model_name  ) *model_name   = QString();
  return make_manual_method(zrm_method, codec);
}



void ZrmMethodChoose::sl_man_value_changed(double arg1)
{
 Q_UNUSED(arg1);
 sl_method_selected(Q_NULLPTR);
}

QString  ZrmMethodChoose::manual_value_file_name         ()
{
  QString fname = ZrmDataSource::config_file_name(QString("manval%1").arg(m_work_mode ? QLatin1String("ch") : QLatin1String("pw")));
  return  fname;

}

constexpr const char * val_voltage     = "voltage";
constexpr const char * val_current     = "current";
constexpr const char * val_hour        = "hour";
constexpr const char * val_minutes     = "minutes";
constexpr const char * val_secunds     = "secunds";
constexpr const char * val_time_unlim  = "time unlimited";
constexpr const char * val_cap_measure = "cap measure";
constexpr const char * val_check_cond  = "check condition";



void ZrmMethodChoose::restore_last_manual_values()
{
 QFile file(manual_value_file_name());
 if(file.exists() && file.open(QFile::ReadOnly))
 {
   QJsonDocument     jdoc = QJsonDocument::fromJson(file.readAll());
   QJsonObject       jobj = jdoc.object();
   manLimU      ->setValue     (jobj[val_voltage].toDouble(.0));
   manLimI      ->setValue     (jobj[val_current].toDouble(.0));

   int h = jobj[val_hour   ].toInt(0);
   int m = jobj[val_minutes].toInt(0);
   int s = jobj[val_secunds].toInt(0);
   manLimHour   ->setValue     (h);
   manLimMinutes->setValue     (m);
   manLimSecunds->setValue     (s);
   bUnlimitTime ->setChecked   (jobj[val_time_unlim].toBool(true) || !(m+h+s ));
   cbCapMeasure->setChecked    (jobj[val_check_cond].toBool(false));
   cbCheckCondition->setChecked(jobj[val_check_cond].toBool(false));
 }
}

void ZrmMethodChoose::store_last_manual_values()
{
  QFile file(manual_value_file_name());
  if(file.open(QFile::ReadWrite|QFile::Truncate))
  {
      QJsonObject jobj;
      jobj[val_voltage    ]   = manLimU        ->value();
      jobj[val_current    ]   = manLimI        ->value();
      jobj[val_time_unlim ]   = bUnlimitTime   ->isChecked();
      jobj[val_hour       ]   = manLimHour     ->value();
      jobj[val_minutes    ]   = manLimMinutes  ->value();
      jobj[val_secunds    ]   = manLimSecunds  ->value();
      jobj[val_cap_measure]  = cbCapMeasure    ->isChecked();
      jobj[val_check_cond ]  = cbCheckCondition->isChecked();
      QJsonDocument       jdoc(jobj);
      file.write(jdoc.toJson());
  }
}
