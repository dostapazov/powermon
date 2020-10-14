#ifndef ZRMMETHODSTHREE_H
#define ZRMMETHODSTHREE_H

#include "zrmdatasource.h"
#include "ui_zrmmethodstree.h"
#include <zrmproto.hpp>
#include <qtextcodec.h>
#include <zrmdatabase.h>




class ZrmMethodsTree : public QWidget, private Ui::ZrmMethodsTree
{
	Q_OBJECT
	Q_DISABLE_COPY(ZrmMethodsTree)
	Q_DISABLE_MOVE(ZrmMethodsTree)

public:
	enum tree_roles_t
	{
		role_edit_enable = Qt::UserRole, role_table, role_id, role_voltage, role_capacity, role_volt_rate
		, role_curr_rate, role_duration, role_cycle_count, role_user_voltage, role_user_capacity, role_user_changed, role_stage_type
	};

	enum table_types_t { table_unknown, table_types, table_models, table_method, table_stages };
	enum column_type_t { column_name, column_voltage, column_capacity };


	explicit ZrmMethodsTree(QWidget* parent = nullptr);
	~ZrmMethodsTree() override;
	void close_database();
	bool open_database (zrm::zrm_work_mode_t work_mode, bool _abstract_methods);
	zrm::zrm_work_mode_t open_as() {return m_work_mode;}
	bool abstract_methods()  {return m_abstract_methods;}
	QSqlError last_error();
	virtual bool item_edit_enable(const QModelIndex& index);
	bool get_method(zrm::zrm_method_t& zrm_method, QTextCodec* codec, QString* model_name = Q_NULLPTR);
	bool get_method(QTreeWidgetItem* item, zrm::zrm_method_t& zrm_method, QTextCodec* codec, QString* model_name = Q_NULLPTR);
	bool method_valid(QTreeWidgetItem* item);
	double get_method_param  (const QTreeWidgetItem* item, column_type_t param);
	void set_method_param  (QTreeWidgetItem* item, column_type_t param, double value);
	bool read_type         (QTreeWidgetItem* item);
	bool read_model        (QTreeWidgetItem* item);
	bool read_method       (QTreeWidgetItem* item);
	void show_method_params(bool enable);

	QString   get_stage_desctipt(unsigned stage_id);

	QAbstractItemView::SelectionMode multi_selection();
	void multi_selection_enable(QAbstractItemView::SelectionMode mode);


	QTreeWidgetItem* search_method_by_id(QTreeWidgetItem* item, const QVariant& method_id);
	void save_user_values();


	static QTreeWidgetItem* new_tree_item  (const QString& text, unsigned table_type, const QVariant& id, bool prepare_expandable);
	static void remove_children(QTreeWidgetItem* parent, bool one_retain);
	static QTreeWidgetItem* copy_tree_item(QTreeWidgetItem* src, QTreeWidgetItem* new_parent );
	QString number(double value, int prec = 2);
	void number_string(QString& str, bool to_dot);


	QSqlDatabase& database() {return db;}
	QTreeWidgetItem* current_item();
	QTreeWidget*      treeWidget  ();
	static QVariant item_id(QTreeWidgetItem* item);
	static void set_item_id   (QTreeWidgetItem* item, const QVariant& id);
	static table_types_t item_table    (QTreeWidgetItem* item);
	static double   item_capacity (QTreeWidgetItem* item);
	static double   item_voltage  (QTreeWidgetItem* item);


signals:
	void method_selected     (QTreeWidgetItem* item);
	void method_param_changed(QTreeWidgetItem* item);
	void current_item_changed(QTreeWidgetItem* current, QTreeWidgetItem* previous);
	void item_changed        (QTreeWidgetItem* current, int column);
	void database_open       (bool success);
protected:
	void fill_tree      ();

	void read_types           ();
	void read_models          (QTreeWidgetItem* item);
	void read_methods         (QTreeWidgetItem* item);
	void read_abstract_methods();
	void method_user_data_to_real(QTreeWidgetItem* item) ;

	size_t    read_stages(QTreeWidgetItem* item, zrm::stages_t& stages);
	size_t    read_stages(zrm::stages_t& stages);
	void read_stages(QTreeWidgetItem* item);



	virtual   QItemDelegate* create_delegate();

	QSqlDatabase         db;
	QSqlError            m_last_error;
	zrm::zrm_work_mode_t m_work_mode         = zrm::charger;
	bool m_abstract_methods  = false;
	bool m_method_expandable = false;//Разрешить чтение этапов
	friend class         QItemDelegate;

private slots:
	void on_tw_methods_itemChanged(QTreeWidgetItem* item, int column);
	void on_tw_methods_currentItemChanged(QTreeWidgetItem* current, QTreeWidgetItem* previous);
	void slot_item_expanded(QTreeWidgetItem* item);
	void slot_item_collapsed(QTreeWidgetItem* item);
public slots:
	void volt_cap_changed(const QString& val_text);
};



template <typename _Type>
QTreeWidgetItem* find_method_by_id( _Type* wg, unsigned id
									, std::function<int(const _Type&)> get_count
									, std::function<QTreeWidgetItem*(const _Type&, int) > get_elem)
{
	QTreeWidgetItem* result = Q_NULLPTR;
	for (int i = 0; i < get_count(*wg); i++ )
	{
		QTreeWidgetItem* elem = get_elem(*wg, i);
		if (elem->data(ZrmMethodsTree::column_name, ZrmMethodsTree::role_id).toUInt() == id)
			result = elem;
	}
	return result;
}


inline QSqlError  ZrmMethodsTree::last_error()
{
	return m_last_error;
}


inline QString   ZrmMethodsTree::number(double value, int prec )
{
	QString ret = QString::number(value, 'f', prec);
	number_string(ret, false);
	return ret;
}

inline QTreeWidgetItem* ZrmMethodsTree::current_item()
{
	return tw_methods->currentItem();
}

inline QVariant ZrmMethodsTree::item_id   (QTreeWidgetItem* item)
{
	return item ? item->data(static_cast<unsigned>(column_type_t::column_name), role_id) : QVariant();
}

inline void ZrmMethodsTree::set_item_id   (QTreeWidgetItem* item, const QVariant& id)
{
	if ( item )
		item->setData( static_cast<unsigned>(column_type_t::column_name), role_id, id);
}


inline ZrmMethodsTree::table_types_t ZrmMethodsTree::item_table(QTreeWidgetItem* item)
{
	return item ?
		   static_cast<table_types_t>( item->data(static_cast<unsigned>(column_type_t::column_name), role_table).toUInt())
		   :
		   table_types_t::table_unknown;
}

inline QTreeWidget*      ZrmMethodsTree::treeWidget  ()
{
	return tw_methods;
}

inline double  ZrmMethodsTree::item_capacity(QTreeWidgetItem* item)
{
	return item ? item->data(static_cast<int>(column_type_t::column_name), role_capacity).toDouble() : .0;
}

inline double  ZrmMethodsTree::item_voltage(QTreeWidgetItem* item)
{
	return item ? item->data(static_cast<int>(column_type_t::column_name), role_voltage).toDouble() : .0;
}

#endif // ZRMMETHODSTHREE_H
