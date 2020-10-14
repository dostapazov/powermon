/* Ostapenko D. V.
 * NIKTES 2019-03-30
 * Zrm Method database editor
 */

#ifndef ZRMMETHODEDITOR_H
#define ZRMMETHODEDITOR_H

#include "ui_zrmmethodeditor.h"
#include <qtoolbar.h>


struct zrm_edit_method_t : public zrm::zrm_method_t
{
	zrm::stages_t m_removed_stages;
};

class ZrmMethodEditor : public QWidget, private Ui::zrmmethodeditor
{
	Q_OBJECT
	void adjustUi();
public:
	enum tree_editor_roles_t  { role_changes_mask = ZrmMethodsTree::role_stage_type + 1, role_new };
	enum change_mask_t        { changes_empty, change_item, change_stage, change_all_mask = -1 } ;

	explicit ZrmMethodEditor(QWidget* parent = nullptr);
	bool open_db(zrm::zrm_work_mode_t as_charger, bool all_methods);
	void save_user_values();
private slots:
	void act_all_methods(bool checked);
	void copy_model();
	void onCurrentItemChanged(QTreeWidgetItem* current, QTreeWidgetItem* prev);
	void onItemDataChanged(QTreeWidgetItem* item, int column);

	void on_actApply_triggered();
	void on_actUndo_triggered();
	void on_actDelete_triggered();
	void on_actLink_toggled(bool checked);

	void abstract_method_changed(QTreeWidgetItem* current, QTreeWidgetItem* prev);
	void link_abstract_method();
	bool unlink_method(QTreeWidgetItem* method_item, bool del);

	void switch_edit_widget(bool edit_param);
	void sl_method_changed(int what);
	void createNewType();
	void createNewModel();
	void createNewMethod();
	void createNew();
	void createNewChild();


protected:

	void connect_signals();
	void item_set_inactive(QTreeWidgetItem* prev);
	bool set_change_mask(QTreeWidgetItem* item, int mask, bool set);
	void clr_change_mask(QTreeWidgetItem* item);

	void setup_method(QTreeWidgetItem* item);
	void setup_akb(QTreeWidgetItem* item);
	//bool on_dsb_changed(QDoubleSpinBox  * dsb);
	void actionsEnable(ZrmMethodsTree::table_types_t tableType);

	static bool isItemNew(QTreeWidgetItem* item);
	static void setItemNew(QTreeWidgetItem* item, bool is_new);

	bool write_changes(QTreeWidgetItem* item);
	bool write_type(QTreeWidgetItem* item);
	bool write_model(QTreeWidgetItem* item);
	bool write_method(QTreeWidgetItem* item);


	bool erase_modles(QTreeWidgetItem* item, bool commit_trans = true );
	bool erase_types(QTreeWidgetItem* item);

	void do_undo_changes(QTreeWidgetItem* item);
	void do_delete_item(QTreeWidgetItem* item, bool select_next);
	static int change_mask(const QTreeWidgetItem* item) ;
private:
	void setupButtons();
	zrm_edit_method_t zrm_method;
	QSqlError         m_last_error;
};

inline bool ZrmMethodEditor::isItemNew (QTreeWidgetItem* item)
{
	return  item && item->data(ZrmMethodsTree::column_name, role_new).toBool() ;
}

inline void ZrmMethodEditor::setItemNew        (QTreeWidgetItem* item, bool is_new)
{
	if (item)
		item->setData(ZrmMethodsTree::column_name, role_new, is_new);
}



#endif // ZRMMETHODEDITOR_H
