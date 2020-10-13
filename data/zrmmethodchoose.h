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
	Q_DISABLE_MOVE(ZrmMethodChoose)
public:
	explicit ZrmMethodChoose(QWidget* parent = nullptr);
	~ZrmMethodChoose() override;
	bool  get_as_charger() {return m_work_mode;}
	void  set_mode(zrm::zrm_work_mode_t value);
	bool  get_method(zrm::zrm_method_t&   zrm_method, QTextCodec* codec, bool* is_automatic = Q_NULLPTR, QString* model_name = Q_NULLPTR);
	void  store_last_manual_values    ();
	void  restore_last_manual_values();
	int   exec() override;
	bool  open_database(bool remake_tree = false);
	void  close_database();
signals:
	void   method_choosed();
private    slots:
	void   sl_method_selected (QTreeWidgetItem* item);
	void   sl_man_value_changed(double arg1);
	void   methodTypeChanged(int index);

private:
	bool make_manual_method(zrm::zrm_method_t&   zrm_method, QTextCodec* codec);
	void setManualMethod();
	void setAutoMethod(bool noBatType);
	bool isManualMode();
	bool isAutoMode();
	bool isAbstractMode();

	QString manual_value_file_name();
	zrm::zrm_work_mode_t   m_work_mode =  zrm::inactive;
	QTreeWidgetItem* m_current_method = Q_NULLPTR;
};

inline bool ZrmMethodChoose::isManualMode()
{
	return cbMethodType->currentIndex() == 2;
}

inline bool ZrmMethodChoose::isAutoMode()
{
	return !isManualMode();
}

inline bool ZrmMethodChoose::isAbstractMode()
{
	return cbMethodType->currentIndex() == 1;
}

#endif // ZRMMETHODCHOOSE_H
