/*
 * Ostapenko D.V. NIKTES 2019-Apr-25
 * Upload/Download methods from device EPROM;
 *
 *
*/

#include "zrmdevmethods.h"

ZrmDevMethods::ZrmDevMethods(QWidget *parent) :
    ZrmChannelWidget(parent)
{
    setupUi(this);
    connect(spr_methods->treeWidget() , &QTreeWidget::itemClicked, this, &ZrmDevMethods::method_clicked);
    connect(dev_methods               , &QTreeWidget::itemClicked, this, &ZrmDevMethods::method_clicked);

    connect(spr_methods->treeWidget() , &QTreeWidget::currentItemChanged, this, &ZrmDevMethods::method_changed);
    connect(dev_methods               , &QTreeWidget::currentItemChanged, this, &ZrmDevMethods::method_changed);
    connect(dev_methods->model()      , &QAbstractItemModel::rowsInserted, this, &ZrmDevMethods::update_buttons_enabled);

    connect(bAdd     , &QAbstractButton::clicked, this, &ZrmDevMethods::method_add);
    connect(bRemove  , &QAbstractButton::clicked, this, &ZrmDevMethods::method_remove);
    connect(bDownload, &QAbstractButton::clicked, this, &ZrmDevMethods::method_download);
    connect(bUpload  , &QAbstractButton::clicked, this, &ZrmDevMethods::method_upload  );
    spr_methods->multi_selection_enable(QAbstractItemView::SelectionMode::ExtendedSelection);
    spr_methods->show_method_params(false);
}


ZrmDevMethods::~ZrmDevMethods()
{
   dev_methods_clear();
}


void ZrmDevMethods::update_controls()
{
  if(m_source && m_channel)
     {
       spr_methods->open_database( this->m_source->channel_work_mode(m_channel), true);
       bDownload->setEnabled(true);

     }
}

void ZrmDevMethods::clear_controls()
{
 dev_methods_clear();
 for(auto b : findChildren<QAbstractButton*>())
      b->setEnabled(false);
}


void ZrmDevMethods::update_buttons_enabled   ()
{
   bRemove->setEnabled(dev_methods->selectedItems().count());
   bAdd->setEnabled(spr_methods->treeWidget()->selectedItems().count());
   bUpload->setEnabled(dev_methods->topLevelItemCount());
}

void ZrmDevMethods::method_changed           (QTreeWidgetItem * item, QTreeWidgetItem * prev)
{
    Q_UNUSED(prev)
    Q_UNUSED(item);
    update_buttons_enabled();

 #ifdef QT_DEBUG
    QObject * src = sender();

    if(src == dev_methods)
       {
         auto met = dev_method_get(item);
         if(met)
         {
           //qDebug()<<QString("Устройство Метoд id %1 stages %2").arg(uint32_t( met->m_method.m_id )).arg( met->stages_count() );
         }
       }

    if(src == spr_methods->treeWidget())
     {
       zrm::zrm_method_t met;
       spr_methods->get_method(item,met,codec());
       //qDebug()<<QString("Справочник Метoд id %1 stages %2").arg(uint32_t( met.m_method.m_id )).arg( met.stages_count() );
     }
#endif
}

void ZrmDevMethods::method_clicked(QTreeWidgetItem * item, int col)
{
  Q_UNUSED(item)
  Q_UNUSED(col)
  update_buttons_enabled();
}


constexpr int method_role = ZrmMethodsTree::role_stage_type+1;

void  ZrmDevMethods::dev_method_clear (QTreeWidgetItem * item)
{
  if(item)
  {

  zrm::zrm_method_t * met = dev_method_get(item);
  if(met)
     delete met;
  QSignalBlocker sb(item->treeWidget());
  item->setData(ZrmMethodsTree::column_name, method_role, QVariant());
  }

}


void  ZrmDevMethods::dev_methods_clear()
{
  for(int i = 0; i < dev_methods->topLevelItemCount();i++ )
       dev_method_clear(dev_methods->topLevelItem(i));
  dev_methods->clear();
}

void  ZrmDevMethods::dev_method_set   (QTreeWidgetItem * item, const zrm::zrm_method_t & src_metod)
{
 if(item)
 {
     zrm::zrm_method_t * dest = dev_method_get(item);
     if(!dest)
     {
       dest = new zrm::zrm_method_t;
       qlonglong long_val = reinterpret_cast<qlonglong>(dest);
       item->setData(ZrmMethodsTree::column_name, method_role, QVariant(long_val));
     }
   *dest = src_metod;
 }

}

zrm::zrm_method_t * ZrmDevMethods::dev_method_get   (QTreeWidgetItem * item)
{
  zrm::zrm_method_t * res = Q_NULLPTR;
  if(item)
  {
   QVariant v = item->data(ZrmMethodsTree::column_name, method_role);

   if(v.isValid() && !v.isNull())
   {
     bool ok = false;
     auto ll = v.toLongLong(&ok);
     if(ok && ll ) res = reinterpret_cast<zrm::zrm_method_t*>(ll);
   }
  }
  return res;
}




void ZrmDevMethods::method_add    ()
{
 QList<QTreeWidgetItem*> items;
 for(auto src : spr_methods->treeWidget()->selectedItems())
 {
   if(!find_method_by_id<QTreeWidget>(dev_methods, ZrmMethodsTree::item_id(src).toUInt(), &QTreeWidget::topLevelItemCount, &QTreeWidget::topLevelItem))
   {
    QTreeWidgetItem * item = ZrmMethodsTree::copy_tree_item(src, Q_NULLPTR) ;
    if(item)
      {
       items.append(item);
       zrm::zrm_method_t method;
       spr_methods->get_method(method, codec());
       dev_method_set(item, method);
       src->setSelected(false);
      }
   }
 }
 dev_methods->addTopLevelItems(items);
}

void ZrmDevMethods::method_remove ()
{
   for(auto item : dev_methods->selectedItems())
   {
     dev_method_clear(item);
     delete item;
   }
}


void ZrmDevMethods::channel_param_changed(unsigned channel, const zrm::params_list_t & params_list  )
{
  if(m_channel == channel)
  {
    auto p = params_list.find(zrm::PARAM_RD_EPROM_METHOD);
    if  (p != params_list.end())
    {
      const zrm::zrm_method_t method = m_source->channel_get_method(m_channel, true);
      size_t name_len = method.m_method.m_name[zrm::METHOD_NAME_SIZE-1] ? zrm::METHOD_NAME_SIZE: strlen(method.m_method.m_name);
      auto item =  ZrmMethodsTree::new_tree_item( to_utf(method.m_method.m_name, int(name_len) ) ,ZrmMethodsTree::table_method,int(method.m_method.m_id),false );
      dev_method_set(item, method);
      dev_methods->addTopLevelItem(item);
      qApp->processEvents();
      m_source->channel_read_eprom_method(m_channel, uint8_t(dev_methods->topLevelItemCount()));
    }
  }
}

void ZrmDevMethods::method_download ()
{
  dev_methods_clear();
  m_source->channel_read_eprom_method(m_channel,0);
}

void ZrmDevMethods::method_upload   ()
{
  uint8_t cmd = zrm::CMD_ERASE;
  m_source->channel_write_param(m_channel,zrm::WM_PROCESS,zrm::PARAM_ZRMMODE, &cmd, sizeof(cmd) );
  QThread::msleep(100);
  for(int i = 0; i< dev_methods->topLevelItemCount();i++)
  {
    auto met = dev_method_get(dev_methods->topLevelItem(i));
    if(met)
       m_source->channel_write_method(m_channel,*met,zrm::WM_PROCESS_AND_WRITE);
  }
}



