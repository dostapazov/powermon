#include <qglobal.h>
#include "mainwindow.h"
#include <crc_unit.hpp>
#include <qdatetime.h>
#include <QTextCodec>
#include <qfiledialog.h>
#include <qstylefactory.h>
#include <qactiongroup.h>
#include <qdesktopwidget.h>


#include <zrmdatasource.h>
#include <zrmmethodeditor.h>
#include <zrmconnectivityparam.h>
#include <zrmmethodchoose.h>
#include <signal_bloker.hpp>

#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qjsonarray.h>
#include <qscreen.h>


enum actions_id_t {act_unknown, act_ready_view, act_zrm_view, act_start_all, act_stop_all, act_method_choose, act_method_editor, act_configure, act_style, act_reports};
constexpr const char* const act_id_prop = "action_id";

QtMessageHandler   MainWindow::prev_msg_handler = Q_NULLPTR;
void MainWindow::msg_handler   (QtMsgType msg_type, const QMessageLogContext& msg_context, const QString& msg_text)
{
	if (prev_msg_handler)
		prev_msg_handler(msg_type, msg_context, msg_text);
#ifdef QT_DEBUG
	// TODO Add interceptors
#endif
}


MainWindow::MainWindow(QWidget* parent) :
	QMainWindow(parent)


{
	//ChildrenSignalBlocker<QWidget>sb( this);
	prev_msg_handler = qInstallMessageHandler(msg_handler);
	//setLocale(QLocale::C);
	setupUi(this);

	QScreen* screen = qApp->primaryScreen();
	connect(screen, &QScreen::primaryOrientationChanged, this, &MainWindow::orientation_changed);


	write_log(QtInfoMsg, "Application started");
	QCoreApplication::setApplicationVersion(QString("2.1"));
	QString wtitle = QString("%1  v:%2").arg(qApp->applicationName()).arg(qApp->applicationVersion());
#ifdef QT_DEBUG
	wtitle += QString(" [debug version]");
#endif
	setWindowTitle(wtitle);
	ZrmBaseWidget::set_codec_name(QLatin1String("CP1251"));
	ZrmDatabase::set_codec(ZrmBaseWidget::codec());
	init_actions();
	init_styles();
	read_config();

	zrm::ZrmConnectivity::read_from_json(connectivity_file_name());
	zrm::ZrmConnectivity::start_all();

	init_slots();
	install_event_filers();
#ifdef Q_OS_ANDROID
	update_android_ui();
#endif
	zrm_ready->update_ready();
	zrm_ready->ready_accum()->set_action(actReadyView);
	if (zrm::ZrmConnectivity::channels_total() < 2)
		actZrmView->setChecked(true);
	else
		actReadyView->setChecked (true);
	QIcon icon(QLatin1String(":/icons/icons/powermon.png"));
	setWindowIcon(icon);
	qApp->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
	write_config();
	for (auto zrm : findChildren<ZrmBaseWidget*>())
		zrm->bind(Q_NULLPTR, 0);
	zrm::ZrmConnectivity::stop_all();
	qApp->processEvents();
	for (auto c : zrm::ZrmConnectivity::connectivities())
		delete c;

}


#ifdef Q_OS_ANDROID
void MainWindow::update_android_ui()
{
	for (auto sb : findChildren<QAbstractSpinBox*>())
		sb->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
}
#endif



void MainWindow::init_actions()
{

	actReadyView->setProperty(act_id_prop, act_ready_view);
	connect(actReadyView, &QAction::toggled, this, &MainWindow::action_toggled);

	actZrmView->setProperty(act_id_prop, act_zrm_view);
	connect(actZrmView, &QAction::toggled, this, &MainWindow::action_toggled);

	actChooseMethod->setProperty(act_id_prop, act_method_choose);
	connect(actChooseMethod, &QAction::toggled, this, &MainWindow::action_toggled);

	actMethod_Editor->setProperty(act_id_prop, act_method_editor);
	connect(actMethod_Editor, &QAction::toggled, this, &MainWindow::action_toggled);


	actConfigure->setProperty(act_id_prop, act_configure);
	connect(actConfigure, &QAction::toggled, this, &MainWindow::action_toggled);

	actStyle->setProperty(act_id_prop, act_style);
	connect(actStyle, &QAction::toggled, this, &MainWindow::action_toggled);

	actReports->setProperty(act_id_prop, act_reports);
	connect(actReports, &QAction::toggled, this, &MainWindow::action_toggled);

	m_action_grp = new QActionGroup(this);
	m_action_grp->addAction(actReadyView);
	m_action_grp->addAction(actZrmView);
	m_action_grp->addAction(actChooseMethod);
	m_action_grp->addAction(actMethod_Editor);
	m_action_grp->addAction(actConfigure);
	m_action_grp->addAction(actStyle);
	m_action_grp->addAction(actReports);

	m_action_grp->setExclusive(true);
	for (auto act : m_action_grp->actions())
	{
		act->setCheckable(true);
		act->setChecked(false );
	}

}

void MainWindow::init_slots  ()
{

	connect(zrm_widget->main_display(), &ZrmMainDisplay::method_choose, this, &MainWindow::channel_method_choose);
	connect(method_chooser, &ZrmMethodChoose::method_choosed, this, &MainWindow::method_choosed    );

	connect(zrm_ready, &ZrmReadyWidget::channel_activated, this, &MainWindow::channel_activated );
	connect(zrm_ready, &ZrmReadyWidget::channel_mouse_over, this, &MainWindow::channel_mouse_over);

	connect(actStartAll, &QAction::triggered, this, &MainWindow::start_all);
	connect(actStopAll, &QAction::triggered, this, &MainWindow::stop_all);

	connect(style_select, &QComboBox::currentTextChanged, this, &MainWindow::set_style);
	connect(font_bold, &QCheckBox::clicked,  this, &MainWindow::edit_font_changed_props );
	connect(font_italic, &QCheckBox::clicked,  this, &MainWindow::edit_font_changed_props );
	connect(font_size, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::edit_font_changed_props );
	connect(fontComboBox, &QFontComboBox::currentFontChanged, this, &MainWindow::edit_font_changed );

	connect(zrm_widget, &ZrmWidget::next_channel, zrm_ready, &ZrmReadyWidget::next_channel);
	connect(zrm_widget, &ZrmWidget::prev_channel, zrm_ready, &ZrmReadyWidget::prev_channel);

}

void MainWindow::install_event_filers  ()
{
	for (auto sb : findChildren<QDoubleSpinBox*>())
	{
		sb->installEventFilter(this);
	}
}




void MainWindow::init_styles()
{
	QStringList stl = QStyleFactory::keys();
	foreach (QString st, stl)
	{
		style_select->addItem(st);
	}
}


void MainWindow::set_style(const QString& styleName)
{
	if (QStyleFactory::keys().contains(styleName))
	{
		qApp->setStyle(QStyleFactory::create(styleName));
	}
}



QString MainWindow::connectivity_file_name()
{
	return ZrmDataSource::config_file_name(".conn");
}

QString MainWindow::window_param_file_name()
{
	return ZrmDataSource::config_file_name("-config");
}



void MainWindow::resizeEvent(QResizeEvent* event)
{
	QMainWindow::resizeEvent(event);
#ifdef Q_OS_ANDROID
	QSize sz = size();
	QDesktopWidget* dw = qApp->desktop();
	QRect dr = dw->screenGeometry(this);

	if (sz.width() < dr.width() || sz.height() < dr.height() )
	{
		setGeometry(dr);
		layout()->update();
	}
#endif
}

void MainWindow::write_log(QtMsgType msg_type, QString log_string)
{
#ifdef POWERMON_LOG
	static const char* dtfmt = "yyyy-MM-dd hh::mm:ss.zzz";
	if (!log_file.isOpen())
	{
		log_file.setFileName(qApp->applicationName() + QLatin1String(".log"));
		if (log_file.open(QFile::ReadWrite | QFile::Append ))
		{
			log_stream.setDevice(&log_file);
			write_log(QtMsgType::QtInfoMsg, " open log");
		}
		else
			return;
	}
	QString dts = QDateTime::currentDateTime().toString(dtfmt);
	log_stream << dts << QString(" level %1").arg(msg_type) << " :> " << log_string;
	endl(log_stream);
#else
	Q_UNUSED(msg_type)
	Q_UNUSED(log_string)
#endif
}

void MainWindow::slot_dev_error(QString error_string)
{
	write_log(QtMsgType::QtCriticalMsg, error_string);
}


void MainWindow::sl_style_sheet_triggered()
{
	QString file_name =
		QFileDialog::getOpenFileName(Q_NULLPTR
									 , tr("Выбор цветовой схемы")
									 , QString()
									 , QString("Style (*.qss)")
									).trimmed();
	if (!file_name.isEmpty())
	{
		QFile file(file_name);
		if (file.exists() && file.open(QFile::ReadOnly))
		{
			QString str = file.readAll();
			qApp->setStyleSheet(str);
			file.close();
		}
	}
}



/*Обработка завершения выбора метода*/
void MainWindow::method_choosed()
{

	zrm::zrm_method_t method;
	bool auto_method = false;
	auto m_current_zrm = zrm_ready->current_ready();
	auto wm =  m_current_zrm->work_mode();

	if (method_chooser->get_method(method, m_current_zrm->codec(), &auto_method, Q_NULLPTR))
	{
		if (m_current_zrm && m_current_zrm->channel_is_stopped(m_current_zrm->channel()))
			m_current_zrm->set_method(method);
		for (int i = 0 ; !m_channel_method_choose && i < zrm_ready->ready_count() ; i++)
		{
			auto zrm_chan = zrm_ready->ready_at(i);
			if (zrm_chan != m_current_zrm && zrm_chan->work_mode() == wm && zrm_chan->channel_is_stopped(zrm_chan->channel()))
				zrm_chan->set_method(method);
		}
	}

	if (m_channel_method_choose)
		actZrmView->setChecked(true);
	else
		actReadyView->setChecked(true);
}


void MainWindow::set_method_all()
{
	auto m_current_zrm = zrm_ready->current_ready();
	if (m_current_zrm)
	{
		auto wm =  m_current_zrm->work_mode();
		ZrmMethodChoose mc(this);

#ifdef Q_OS_ANDROID
		//mc.setGeometry(geometry());
#endif
		mc.set_mode(wm);

		if (mc.exec() == QDialog::Accepted)
		{
			zrm::zrm_method_t method;
			bool auto_method = false;
			if (mc.get_method(method, m_current_zrm->codec(), &auto_method, Q_NULLPTR))
			{
				for (int i = 0; i < zrm_ready->ready_count(); i++)
				{
					auto zrm = zrm_ready->ready_at(i);
					if (zrm && zrm->work_mode() == wm)
						zrm->set_method(method);
				}

			}
		}

	}
}

void MainWindow::start_all     ()
{
	for (int i = 0; i < zrm_ready->ready_count(); i++)
	{
		auto zrm = zrm_ready->ready_at(i) ;
		if (zrm)
			zrm->start();
	}

}

void MainWindow::stop_all      ()
{
	for (int i = 0; i < zrm_ready->ready_count(); i++)
	{
		auto zrm = zrm_ready->ready_at(i) ;
		if (zrm)
			zrm->stop();
	}
}


void MainWindow::configure_apply()
{
	if ( zrm::ZrmConnectivity::connectivities_changed())
	{
		zrm::ZrmConnectivity::write_to_json(connectivity_file_name());
		zrm::ZrmConnectivity::start_all();
		zrm_ready->update_ready();
	}
}

void MainWindow::style_apply()
{
	qApp->setStyle(QStyleFactory::create(style_select->currentText()));
	qApp->processEvents();
	QFont font = edit_font(fontComboBox->currentFont());
	qApp->setFont(font);
	setFont(font);
	for (auto w : findChildren<QWidget*>())
		w->setFont(font);
	layout()->update();
}


void MainWindow::set_font_for_edit()
{
	SignalBlocker sb(style_frame->findChildren<QWidget*>());
	QFontInfo     font_info = fontInfo();
	font_bold->setChecked  (font_info.bold());
	font_italic->setChecked(font_info.italic());
	font_size->setValue(font_info.pointSize());
	fontComboBox->setCurrentFont(font());
}


QFont MainWindow::edit_font(const QFont& f)
{
	QFont font    = f;
	font.setBold   (font_bold->isChecked());
	font.setItalic (font_italic->isChecked());
	font.setPointSize(font_size->value());
	return font;
}

void MainWindow::edit_font_changed_props()
{
	edit_font_changed(fontComboBox->currentFont());
}

void MainWindow::edit_font_changed(const QFont& font)
{
	QFont f = edit_font(font);
	gb_ctrls->setFont(f);
	for (auto w : gb_ctrls->findChildren<QWidget*>())
		w->setFont(f);
	gb_ctrls->layout()->update();

}





constexpr const char* cfg_style          = "style";
constexpr const char* cfg_font_name      = "font-name";
constexpr const char* cfg_font_size      = "font-size";
constexpr const char* cfg_font_bold      = "font-bold";
constexpr const char* cfg_font_italic    = "font-italic";
constexpr const char* cfg_xpos           = "x_pos";
constexpr const char* cfg_ypos           = "y_pos";
constexpr const char* cfg_width          = "width";
constexpr const char* cfg_height         = "height";
constexpr const char* cfg_full_screen    = "full-screen"   ;
constexpr const char* cfg_zrm_method     = "zrm-method";
constexpr const char* cfg_zrm_additional = "zrm-additional";

void MainWindow::write_config       ()
{
	QString cname = window_param_file_name();
	QJsonObject jobj;
	QFontInfo fi(this->font());


	jobj[cfg_style]          = style_select->currentText();
	jobj[cfg_font_name   ]   = fi.family();
	jobj[cfg_font_size   ]   = fi.pixelSize();
	jobj[cfg_font_bold   ]   = fi.bold();
	jobj[cfg_font_italic ]   = fi.italic();


	jobj[cfg_xpos        ]   = x();
	jobj[cfg_ypos        ]   = y();
	jobj[cfg_width       ]   = width();
	jobj[cfg_height      ]   = height();

	jobj[cfg_full_screen ]   = isFullScreen();
	jobj[cfg_zrm_method  ]   = zrm_widget->method_is_showing();
	jobj[cfg_zrm_additional] = zrm_widget->additional_is_showing();


	QFile file(cname);
	if (file.open(QFile::WriteOnly | QFile::Truncate))
	{

		QJsonDocument jdoc(jobj);
		file.write(jdoc.toJson());
		file.close();
	}
}

void MainWindow::read_config        ()
{
#ifdef Q_OS_ANDROID
	int def_font_size = 15;
#else
	int def_font_size = 10;
#endif

	QString cname = window_param_file_name();
	QFile file(cname);

	if (file.exists() && file.open(QFile::ReadOnly))
	{

		QJsonDocument jdoc = QJsonDocument::fromJson(file.readAll());
		QJsonObject jobj(jdoc.object());
		if (jobj.contains(cfg_style))
		{
			QString style_name = jobj[cfg_style].toString("Fusion");
			style_select->setCurrentText(style_name);
		}

		if (jobj.contains(cfg_font_name))
		{
			QFont  fnt(jobj[cfg_font_name].toString());
			fnt.setPixelSize(jobj[cfg_font_size].toInt(def_font_size));
			fnt.setBold(jobj[cfg_font_bold   ].toBool(true));
			fnt.setItalic(jobj[cfg_font_italic ].toBool(false));
			qApp->setFont(fnt);
			this->setFont(fnt);
			for (auto w : findChildren<QWidget*>())
				w->setFont(fnt);
		}

		zrm_widget->show_method(jobj[cfg_zrm_method  ].toBool(false));
		zrm_widget->show_additional(jobj[cfg_zrm_additional].toBool(false));

#ifndef Q_OS_ANDROID
		if (jobj[cfg_full_screen ].toBool(false))
			setGeometry(qApp->primaryScreen()->geometry());
		else
		{
			QRect r(
				jobj[cfg_xpos].toInt(10)
				, jobj[cfg_ypos].toInt(10)
				, jobj[cfg_width].toInt(300)
				, jobj[cfg_height].toInt(200)
			);
			r = QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, r.size(), qApp->primaryScreen()->geometry());
			setGeometry(r);
		}
#endif
		layout()->update();
	}
	else
	{
		set_default_config();
	}
}

void MainWindow::set_default_config()
{
#ifdef Q_OS_ANDROID
	int def_font_size = 15;
#else
	int def_font_size = 10;
#endif
	QFont  fnt = this->font();
	fnt.setPixelSize(def_font_size);
	fnt.setBold(true);
	fnt.setItalic(false);
	qApp->setFont(fnt);
	this->setFont(fnt);
	for (auto w : findChildren<QWidget*>())
		w->setFont(fnt);
	style_select->setCurrentText(QString("Fusion"));
}


bool MainWindow::eventFilter(QObject* target, QEvent* event)
{
	if (event->type() == QEvent::KeyPress)
	{
		//Замена точки или запятой в разделителе на соответсвующий в текущей локали
		QKeyEvent* key_event = dynamic_cast<QKeyEvent*>(event);
		if (key_event )
		{
			QChar c(key_event->key());
			if ((c == QChar(',') || c == QChar('.')) && c != locale().decimalPoint())
			{
				//qDebug()<<"decimal point is "<<locale().decimalPoint() << "text is "<<c;
				c = locale().decimalPoint();
				event = new QKeyEvent (key_event->type(), c.toLatin1(), key_event->modifiers(), QString(c) );
				key_event->accept();
				qApp->postEvent(target, event);
				return true;
			}
		}
	}
	return QObject::eventFilter(target, event);
}


void MainWindow::orientation_changed(Qt::ScreenOrientation screen_orient)
{
	Q_UNUSED(screen_orient)
}


void MainWindow::channel_method_choose()
{
	m_channel_method_choose = true;
	actChooseMethod->setChecked(true);
}


void MainWindow::method_editor_activate(bool checked)
{
	if (!m_edit_tool_bar)
	{
		m_edit_tool_bar = method_editor->get_toolbar();
		addToolBar(Qt::ToolBarArea::TopToolBarArea, m_edit_tool_bar);

	}
	if (checked)
	{
		stackedWidget->setCurrentWidget(method_editor_page);
		method_editor->open_db(zrm_ready->current_ready() ->work_mode(), false);
		m_edit_tool_bar->setVisible(true);
	}
	else
	{
		m_edit_tool_bar->setVisible(false);
		method_editor->save_user_values();
		//removeToolBar(m_edit_tool_bar);
	}
	//method_editor->setVisible(checked);
}

void MainWindow::method_chooser_activate(bool checked)
{
	if (checked)
	{
		auto m_current_zrm = zrm_ready->current_ready();
		auto wm =  m_current_zrm->work_mode();
		method_chooser->set_mode(wm);
		method_chooser->open_database(true);
		stackedWidget->setCurrentWidget(method_chooser);
	}
	else
	{
		method_chooser->set_mode(zrm::zrm_work_mode_t::inactive);
		m_channel_method_choose = false;
	}
}

void MainWindow::action_toggled(bool checked)
{
	QObject* src = sender();
	int act_id = src ? src->property(act_id_prop).toInt() : int(actions_id_t::act_unknown);
	switch (act_id)
	{
		case act_ready_view:
			if (checked)
			{
				stackedWidget->setCurrentWidget(zrm_ready);
				actZrmView->setChecked(false);
			}
			break;

		case act_zrm_view:
			if (checked)
			{
				stackedWidget->setCurrentWidget(zrm_view);
			}
			break;

		case act_method_choose:
			method_chooser_activate(checked);
			break;

		case act_method_editor:
			method_editor_activate(checked);
			break;

		case act_configure:
			if (checked)
				stackedWidget->setCurrentWidget(conn_params_page);
			else
				configure_apply();
			break;

		case act_style:
			if (checked)
			{
				set_font_for_edit();
				stackedWidget->setCurrentWidget(style_page);
			}
			else
				style_apply();
			break;
		case act_reports:
			if (checked)
				stackedWidget->setCurrentWidget(report_common);
			break;

		default:
			break;
	}

//  setGeometry(QGuiApplication::primaryScreen()->geometry());
//  adjustSize();
//  layout()->update();
}

void MainWindow::channel_activated(zrm::ZrmConnectivity* conn, unsigned channel)
{
	zrm_widget->bind(conn, uint16_t(channel));
	actMethod_Editor->setEnabled(conn && channel);
	actChooseMethod ->setEnabled(conn && channel);
	actZrmView->setEnabled      (conn && channel);
	//qDebug()<<Q_FUNC_INFO<<sender();
	actZrmView->setChecked(true);
}

void MainWindow::channel_mouse_over(ZrmChannelMimimal* cm)
{
	auto sb = QMainWindow::statusBar();
	if (cm && sb)
	{
		auto sess = cm->connectivity()->channel_session(cm->channel());
		QString str =  cm->channel_name (cm->channel());
		str += sess.is_active() ?  QString(" [ ID %1 ]").arg(sess.session_param.ssID, 4, 16, QLatin1Char('0')).toUpper() : tr(" [ нет соединения ]") ;
		sb->showMessage(str, 1000);
	}
}

