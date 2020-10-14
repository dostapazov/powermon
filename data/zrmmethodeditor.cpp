#include "zrmmethodeditor.h"
#include <signal_bloker.hpp>
#include <qstring.h>
#include <qdesktopwidget.h>
#include <QMenu>



ZrmMethodEditor::ZrmMethodEditor(QWidget* parent) :
	QWidget(parent)
{
	setupUi(this);
	adjustUi();
	methods_tree->setFont(font());
	param_widget->setVisible(false);
	stages_page->set_methods_tree(methods_tree);
	param_widget->setCurrentWidget(stages_page);
	param_widget->setCurrentWidget(empty_page);
	methods_abstract->show_method_params(false);
	connect_signals();
	setupButtons();

}

void ZrmMethodEditor::connect_signals()
{
	connect(actMethodEdit, &QAction::toggled, this, &ZrmMethodEditor::switch_edit_widget    );
	connect(actAllMethods, &QAction::toggled, this, &ZrmMethodEditor::act_all_methods       );
	connect(actCopyModel, &QAction::triggered, this, &ZrmMethodEditor::copy_model            );

	connect(actNewType, &QAction::triggered, this, &ZrmMethodEditor::createNewType);
	connect(actNewModel, &QAction::triggered, this, &ZrmMethodEditor::createNewModel);
	connect(actNewMethod, &QAction::triggered, this, &ZrmMethodEditor::createNewMethod);

	connect(tbUnlinkMethod, &QAbstractButton::clicked, this, &ZrmMethodEditor::on_actDelete_triggered);
	connect(tbLinkMethod, &QAbstractButton::clicked, this, &ZrmMethodEditor::link_abstract_method  );
	connect(stages_page, &ZrmStagesEditor::method_changed, this, &ZrmMethodEditor::sl_method_changed);

	connect(methods_tree, &ZrmMethodsTree::current_item_changed, this, &ZrmMethodEditor::onCurrentItemChanged);
	connect(methods_tree, &ZrmMethodsTree::item_changed, this, &ZrmMethodEditor::onItemDataChanged);
	connect(methods_abstract, &ZrmMethodsTree::current_item_changed, this, &ZrmMethodEditor::abstract_method_changed);
}

bool ZrmMethodEditor::open_db(zrm::zrm_work_mode_t as_charger, bool all_methods)
{
	bool ret =  methods_tree->open_database(as_charger, all_methods);
	return ret;
}

void ZrmMethodEditor::setupButtons()
{
	QMenu* menu = new QMenu;
	menu->addAction(actNewType);
	menu->addAction(actNewModel);
	menu->addAction(actNewMethod);
	bCreate->setMenu(menu);
	bAbstractMethod->setDefaultAction(actAllMethods);
	bLinkMethod->setDefaultAction(actLink);
	bEdit->setDefaultAction(actMethodEdit);
	bApply->setDefaultAction(actApply);
	bUndo->setDefaultAction(actUndo);
	bDelete->setDefaultAction(actDelete);
	bCopyModel->setDefaultAction(actCopyModel);
}


void ZrmMethodEditor::adjustUi()
{
#ifdef Q_OS_ANDROID
	QSize sz(48, 48);
#else
	QSize sz(32, 32);
#endif
	auto tb_list =  findChildren<QToolButton*>();
	for (auto tb : tb_list)
	{
		tb->setIconSize(sz);
	}
}



void ZrmMethodEditor::act_all_methods(bool checked)
{
	open_db( methods_tree->open_as(), checked);
	auto tw = methods_tree->treeWidget();
	QTreeWidgetItem* item = tw->topLevelItemCount() ? tw->topLevelItem(0) : Q_NULLPTR;
	tw->setCurrentItem(item);
	actLink->setEnabled(!checked);
	actNewModel->setVisible(!checked);
	actNewType->setVisible(!checked);
}


void set_edit_enable(QTreeWidgetItem* item, bool edit_name, bool edit_voltage, bool edit_capacity )
{
	if (item)
	{
		QSignalBlocker bl(item->treeWidget());
		//qDebug()<<"Set enable  edit voltage "<<edit_voltage<<" edit_capacity "<<edit_capacity;
		item->setData(ZrmMethodsTree::column_name, ZrmMethodsTree::role_edit_enable, edit_name    );
		item->setData(ZrmMethodsTree::column_voltage, ZrmMethodsTree::role_edit_enable, edit_voltage );
		item->setData(ZrmMethodsTree::column_capacity, ZrmMethodsTree::role_edit_enable, edit_capacity);
	}
}


void ZrmMethodEditor::item_set_inactive(QTreeWidgetItem* prev)
{
	if (prev )
	{
		set_edit_enable(prev, false, false, false);
		if (change_mask(prev))
		{
			if (isItemNew(prev))
			{
				do_delete_item(prev, false);
			}
			else
			{
				do_undo_changes(prev);
			}
		}
	}
}

void ZrmMethodEditor::actionsEnable(ZrmMethodsTree::table_types_t tableType)
{
	bool enableUnlink = false;
	bool enableMethodEdit = false;
	bool enableCopy = false;
	bool enableCreateModel = false;
	bool enableCreateMethod = false;


	switch (tableType)
	{
		case ZrmMethodsTree::table_method :
			enableUnlink = true;
			enableMethodEdit = true;
			enableCreateMethod = true;
			enableCreateModel = true;
			break;
		case ZrmMethodsTree::table_models :
			enableCopy = true;
			enableCreateModel = true;
			enableCreateMethod = true;
			break;
		case ZrmMethodsTree::table_types :
			enableCreateModel = true;
			break;
		default:
			break;
	}

	tbUnlinkMethod->setEnabled( enableUnlink );
	actMethodEdit->setEnabled( enableMethodEdit );
	actCopyModel->setEnabled( enableCopy );
	actNewMethod->setEnabled(enableCreateMethod);
	actNewModel->setEnabled(enableCreateModel);

}

void ZrmMethodEditor::onCurrentItemChanged (QTreeWidgetItem* current, QTreeWidgetItem* prev)
{
	if (current != prev)
	{
		SignalBlocker sb(findChildren<QWidget*>());
		item_set_inactive(prev);
		actDelete->setEnabled(current);
		auto table_type = methods_tree->item_table(current);
		actionsEnable(table_type);

		if (actLink->isChecked())
		{
			abstract_method_changed(methods_abstract->current_item(), Q_NULLPTR);
		}
		else
		{

			switch (table_type)
			{
				case ZrmMethodsTree::table_models:
					set_edit_enable(current, true, true, true);
					setup_akb(current);
					break;
				case  ZrmMethodsTree::table_method:
					if (actAllMethods->isChecked())
						set_edit_enable(current, true, true, true);
					break;
				default:
					set_edit_enable(current, true, false, false);
					break;
			}
		}

	}

}

void ZrmMethodEditor::setup_akb(QTreeWidgetItem* item)
{
	if (item)
	{
		zrm_method.m_method.set_voltage( methods_tree->get_method_param(item, ZrmMethodsTree::column_voltage));
		zrm_method.m_method.set_capacity(methods_tree->get_method_param(item, ZrmMethodsTree::column_capacity));
	}
}

QString method_time(const zrm::method_t& method)
{
	return QString("%1:%2:%3").arg(method.m_hours, 2, 10, QLatin1Char('0')).arg(method.m_minutes, 2, 10, QLatin1Char('0')).arg(method.m_secs, 2, 10, QLatin1Char('0'));
}

void set_method_time( zrm::method_t& method, const QString& str)
{
	uint8_t tval[3] = {0};
	uint8_t* ptval = tval;
	for (const auto& sl : str.split(QLatin1String(":")))
		*ptval++ = uint8_t(sl.trimmed().toUInt());
	method.m_hours = tval[0];
	method.m_minutes = tval[1];
	method.m_secs = tval[2];

}


void ZrmMethodEditor::setup_method(QTreeWidgetItem* item)
{
	bool is_abstarct = methods_tree->abstract_methods();
	set_edit_enable(item, true, is_abstarct, is_abstarct);

	methods_tree->read_method(item);

	//Разрешаем редактирование

//  QTreeWidgetItem * parent = item->parent() ? item->parent() : item;
	//Учитываем  абстрактный метод
	double volt = methods_tree->get_method_param(item, ZrmMethodsTree::column_voltage );
	double cap  = methods_tree->get_method_param(item, ZrmMethodsTree::column_capacity);
	if (qFuzzyIsNull(volt))
		volt = 12;
	if (qFuzzyIsNull(cap ))
		cap  = 55;

	stages_page->set_voltage ( volt, false);
	stages_page->set_capacity( cap, false);
	stages_page->set_abstract(is_abstarct);
	stages_page->set_method_id(ZrmMethodsTree::item_id(item));
}


/**
 * @brief ZrmMethodEditor::on_stages_list_currentItemChanged
 * @param current
 * @param previous
 * stages_list has changes current stage
 * make setup of stages controls
 */


void ZrmMethodEditor::onItemDataChanged                  (QTreeWidgetItem* item, int column)
{

	QString item_text = item->text(column);
	//qDebug()<<Q_FUNC_INFO<<"sender "<<sender()<<"column "<<column<<" text "<<item_text;
	auto item_table = ZrmMethodsTree::item_table(item);

	switch (column)
	{
		case ZrmMethodsTree::column_name:
			if (item_table == ZrmMethodsTree::table_method)
				stages_page->set_method_name(item_text);
			break;
		case ZrmMethodsTree::column_voltage:
			if (item_table == ZrmMethodsTree::table_method)
			{
				stages_page->set_voltage(item_text.toDouble());
			}
			break;
		case ZrmMethodsTree::column_capacity:
			if (item_table == ZrmMethodsTree::table_method)
			{
				stages_page->set_capacity(item_text.toDouble());
			}
			break;

		default:
			return;
	}

	set_change_mask( item, change_item, true);
}

void ZrmMethodEditor::on_actApply_triggered()
{
	//Записать изменения
	SignalBlocker sb(findChildren<QWidget*>());
	write_changes(methods_tree->current_item());
}

void ZrmMethodEditor::do_undo_changes(QTreeWidgetItem* item )
{
	SignalBlocker sb(findChildren<QWidget*>());
	if (isItemNew(item))
	{
		do_delete_item(item, true);
		return;
	}

	switch (methods_tree->item_table(item))
	{
		case ZrmMethodsTree::table_types:
			methods_tree->read_type(item);
			break;
		case ZrmMethodsTree::table_models:
			methods_tree->read_model(item);
			break;
		case ZrmMethodsTree::table_method:
			methods_tree->read_method(item);
			stages_page->set_method_id(ZrmMethodsTree::item_id(item));
			break;
	}
	clr_change_mask( item );
	onCurrentItemChanged(item, Q_NULLPTR);
}

void ZrmMethodEditor::on_actUndo_triggered()
{
	//Отменить изменения
	auto item = methods_tree->current_item();
	do_undo_changes(item);
}


void ZrmMethodEditor::do_delete_item(QTreeWidgetItem* item, bool select_next)
{
	bool ret = true;

	if (!isItemNew(item))
	{
		switch (methods_tree->item_table(item))
		{
			case ZrmMethodsTree::table_method:
				ret = unlink_method(item, actAllMethods->isChecked());
				break;
			case ZrmMethodsTree::table_models:
				ret = erase_modles( item );
				break;
			case ZrmMethodsTree::table_types:
				ret = erase_types ( item );
				break;
			default:
				break;
		}
	}

	if (ret)
	{
		QTreeWidget* tw = item->treeWidget();
		QTreeWidgetItem* parent_item = item->parent();
		int idx = parent_item ? parent_item->indexOfChild(item) : tw->indexOfTopLevelItem(item);
		item = Q_NULLPTR;

		if (parent_item )
		{
			delete parent_item->takeChild(idx);
			if (select_next)
			{
				idx = std::min(idx, parent_item->childCount() - 1);
				item = idx < 0 ? parent_item :  parent_item->child(idx);
			}
		}
		else
		{
			delete tw->takeTopLevelItem(idx);
			if (select_next)
			{
				idx = std::min(idx, tw->topLevelItemCount() - 1);
				item = idx < 0 ? Q_NULLPTR :  tw->topLevelItem(idx);
			}
		}

		if (select_next)
			tw->setCurrentItem(item);
	}
}

void ZrmMethodEditor::on_actDelete_triggered()
{
	//Удалить элемент
	QTreeWidgetItem* item = methods_tree->current_item();
	if (item)
	{
		do_delete_item(item, true);
	}

}


void ZrmMethodEditor::on_actLink_toggled(bool checked)
{
	// Связать
	//gb_actions->setVisible(!checked)


	if (checked)
	{
		stages_page->setVisible(false);
		param_widget->setCurrentWidget(link_page);
		methods_abstract->open_database( methods_tree->open_as(), true);
	}
	else
	{
		param_widget->setCurrentWidget(stages_page);
		onCurrentItemChanged(this->methods_tree->current_item(), Q_NULLPTR);
	}
	param_widget->setVisible(checked);
	frToolBar1->setVisible(!checked);
	bAbstractMethod->setEnabled(!checked);
	//methods_tree->show_method_params(!checked);
//	actAllMethods->setEnabled(!checked);
//	actMethodEdit->setVisible(!checked);
//	actApply->setVisible     (!checked);
//	actUndo->setVisible      (!checked);
//	actNewType->setVisible   (!checked);
//	actNewModel->setVisible  (!checked);
//	actNewMethod->setVisible (!checked);
//	actDelete->setVisible    (!checked);
}


void ZrmMethodEditor::createNew()
{
//	bool child = false;
//	QTreeWidgetItem* cur_item = child ? methods_tree->current_item() : Q_NULLPTR;
//	auto t_type  =  ZrmMethodsTree::item_table(cur_item);

//	if (t_type == ZrmMethodsTree::table_unknown)
//	{
//		child  = false;
//		t_type = ZrmMethodsTree::table_types;
//	}

//	if (child && t_type == ZrmMethodsTree::table_method)
//		child = false;

//	if (child)
//		++t_type;

//	QString item_text;

//	switch (t_type)
//	{
//		case ZrmMethodsTree::table_types:
//			item_text = tr("Новый тип");
//			break;
//		case ZrmMethodsTree::table_models:
//			item_text = tr("Новая модель");
//			break;
//		default:
//			item_text = tr("Новый метод");
//			break;
//	}

//	QTreeWidgetItem* item = ZrmMethodsTree::new_tree_item(item_text, t_type, 0, false);
//	bool edit_params = t_type == ZrmMethodsTree::table_models || ( t_type == ZrmMethodsTree::table_method && actAllMethods->isChecked());
//	if (edit_params)
//	{
//		QString str = "?";
//		item->setText(ZrmMethodsTree::column_voltage, str);
//		item->setText(ZrmMethodsTree::column_capacity, str);
//	}
//	set_edit_enable(item, true, edit_params, edit_params);
//	item_new_set(item, true);

//	QTreeWidget* tw = methods_tree->treeWidget();
//	if (cur_item && !child )
//		cur_item =  cur_item->parent();
//	if (cur_item)
//	{
//		if (!cur_item->isExpanded())
//		{
//			cur_item->setExpanded(true);
//			qApp->processEvents();
//		}
//		cur_item->addChild(item);
//	}

//	else
//		tw->addTopLevelItem(item);
//	tw->setCurrentItem(item);
}


void ZrmMethodEditor::createNewChild()
{
	bool child = true;
	QTreeWidgetItem* cur_item = child ? methods_tree->current_item() : Q_NULLPTR;
	auto t_type  =  ZrmMethodsTree::item_table(cur_item);

	if (t_type == ZrmMethodsTree::table_unknown)
	{
		child  = false;
		t_type = ZrmMethodsTree::table_types;
	}

	if (child && t_type == ZrmMethodsTree::table_method)
		child = false;

//	if (child)
//		++t_type;

	QString item_text;

	switch (t_type)
	{
		case ZrmMethodsTree::table_types:
			item_text = tr("Новый тип");
			break;
		case ZrmMethodsTree::table_models:
			item_text = tr("Новая модель");
			break;
		default:
			item_text = tr("Новый метод");
			break;
	}

	QTreeWidgetItem* item = ZrmMethodsTree::new_tree_item(item_text, t_type, 0, false);
	bool edit_params = t_type == ZrmMethodsTree::table_models || ( t_type == ZrmMethodsTree::table_method && actAllMethods->isChecked());
	if (edit_params)
	{
		QString str = "?";
		item->setText(ZrmMethodsTree::column_voltage, str);
		item->setText(ZrmMethodsTree::column_capacity, str);
	}
	set_edit_enable(item, true, edit_params, edit_params);
	setItemNew(item, true);

	QTreeWidget* tw = methods_tree->treeWidget();
	if (cur_item && !child )
		cur_item =  cur_item->parent();
	if (cur_item)
	{
		if (!cur_item->isExpanded())
		{
			cur_item->setExpanded(true);
			qApp->processEvents();
		}
		cur_item->addChild(item);
	}
	else
		tw->addTopLevelItem(item);
	tw->setCurrentItem(item);
}

void ZrmMethodEditor::createNewType()
{
	QString item_text = tr("Новый тип");
	int t_type = ZrmMethodsTree::table_types;
	QTreeWidgetItem* item = ZrmMethodsTree::new_tree_item(item_text, t_type, 0, false);
	set_edit_enable(item, true, false, false);
	setItemNew(item, true);
	QTreeWidget* tw = methods_tree->treeWidget();
	tw->addTopLevelItem(item);
	tw->setCurrentItem(item);
}

void ZrmMethodEditor::createNewModel()
{
	QTreeWidgetItem* typeItem = nullptr;
}

void ZrmMethodEditor::createNewMethod()
{

}




void ZrmMethodEditor::switch_edit_widget(bool edit_param)
{
	if (edit_param)
	{
		fr_methods->setVisible(false);
		stages_page->setVisible(true);
		setup_method(methods_tree->current_item());
		param_widget->setCurrentWidget(stages_page);
		param_widget->setVisible(true);
	}
	else
	{
		stages_page->setVisible(false);
		param_widget->setCurrentWidget(empty_page);
		param_widget->setVisible(false);
		fr_methods->setVisible(true);
	}
//	param_widget->adjustSize();
//	layout()->update();
	actAllMethods->setEnabled(!edit_param);
	actLink->setEnabled(!edit_param);
	actNewType->setVisible(!edit_param);
	actNewModel->setVisible(!edit_param);
	actNewMethod->setVisible(!edit_param);
	actDelete->setVisible(!edit_param);
	actCopyModel->setVisible(!edit_param);
#ifdef Q_OS_ANDROID
	QWidget* p = parentWidget();
	while (p->parentWidget())
		p = p->parentWidget();
	adjustSize();
	p->adjustSize();
	p->setGeometry(qApp->desktop()->screenGeometry(p));
	p->layout()->update();

#endif
}

void ZrmMethodEditor::sl_method_changed(int what)
{
	QTreeWidgetItem* method_item =  methods_tree->current_item();
	if (method_item)
	{
		QSignalBlocker bl(method_item->treeWidget());
		switch (what)
		{
			case ZrmStagesEditor::method_param_changed:
				set_change_mask(method_item, change_item, true);
				break;
			case ZrmStagesEditor::method_name_changed:
			{
				QString met_name = stages_page->method_name();
				//qDebug()<<"new name "<<met_name;
				method_item->setText(ZrmMethodsTree::column_name, met_name);
				set_change_mask(method_item, change_item, true);
			}
			break;
			case ZrmStagesEditor::method_stage_changed:
				set_change_mask(method_item, change_stage, true);
				break;

		}
	}
}
/**
 * @brief ZrmMethodEditor::copy_model
 * Копирование модели
 */

void ZrmMethodEditor::copy_model()
{
	QTreeWidgetItem* item = methods_tree->current_item();
	if ( ZrmMethodsTree::item_table(item) == ZrmMethodsTree::table_models && item->childCount() )
	{
		setCursor(Qt::WaitCursor);
		bool was_expanding = item->isExpanded();
		if (!was_expanding)
		{item->treeWidget()->expandItem(item); qApp->processEvents();}

		QTreeWidgetItem* new_model = ZrmMethodsTree::copy_tree_item(item, item->parent());
		QString item_name = QString("%1 - КОПИЯ").arg(item->text(ZrmMethodsTree::column_name));
		new_model->setText(ZrmMethodsTree::column_name, item_name);
		ZrmMethodsTree::set_item_id( new_model, QVariant());
		QSqlDatabase& db = methods_tree->database();
		ZrmDatabase::start_transaction(db);
		bool success = write_model(new_model);
		int met_idx = item->childCount();
		QVariant model_id = ZrmMethodsTree::item_id(new_model);

		while (success && met_idx)
		{
			QTreeWidgetItem* met_item = item->child(--met_idx);
			success = ZrmDatabase::link_method(db, ZrmMethodsTree::item_id(met_item), model_id);
		}

		if (success)
		{
			ZrmDatabase::commit_transaction(db);
			new QTreeWidgetItem(new_model);
			methods_tree->treeWidget()->setCurrentItem(new_model);
			set_edit_enable(new_model, true, true, true);
		}
		else
		{
			ZrmMethodsTree::set_item_id( new_model, QVariant());
			do_delete_item(new_model, false);
		}

		if (!was_expanding)
			item->treeWidget()->collapseItem(item);
		setCursor(Qt::ArrowCursor);
	}
}

void ZrmMethodEditor::save_user_values()
{
	methods_tree->save_user_values();
}


