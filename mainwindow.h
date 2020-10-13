#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <zrmchannelmimimal.h>
#include <qscreen.h>

class MainWindow : public QMainWindow, protected Ui::MainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget* parent = nullptr);
	~MainWindow() override;

private slots:

	void channel_activated(zrm::ZrmConnectivity* conn, unsigned channel);
	void channel_mouse_over(ZrmChannelMimimal* cm);
	void method_choosed    ();
	void action_toggled(bool checked);
	void channel_method_choose();
	void slot_dev_error(QString error_string);
	void write_log(QtMsgType msg_type, QString log_string);
	void set_style(const QString&   styleName);
	void sl_style_sheet_triggered();
	void edit_font_changed(const QFont& font);
	void edit_font_changed_props();
	void orientation_changed(Qt::ScreenOrientation screen_orient);

private:
	QFont edit_font  (const QFont& f);
	void init_styles ();
	void init_actions();
	void init_slots  ();
	void install_event_filers();
	void configure_apply();
	void style_apply    ();
	void resizeEvent(QResizeEvent* event) override;
	static QString connectivity_file_name();
	static QString window_param_file_name();
	void set_font_for_edit ();
	void set_method_all();
	void start_all     ();
	void stop_all      ();
	void write_config       ();
	void read_config        ();
	void set_default_config ();
	bool eventFilter(QObject* target, QEvent* event) override;
#ifdef Q_OS_ANDROID
	void update_android_ui();
#endif

	QFile               log_file;
	QTextStream         log_stream;
	QActionGroup*       m_action_grp     = Q_NULLPTR;
	bool                m_channel_method_choose = false;
	QToolBar*           m_edit_tool_bar = Q_NULLPTR;
	static QtMessageHandler   prev_msg_handler;
	static void msg_handler   (QtMsgType msg_type, const QMessageLogContext& msg_context, const QString& msg_text);
	void method_editor_activate(bool checked);
	void method_chooser_activate(bool checked);
};

#endif // MAINWINDOW_H
