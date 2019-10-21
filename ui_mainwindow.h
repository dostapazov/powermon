/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <zrmreadywidget.h>
#include "reportcommon.h"
#include "zrmconnectivityparam.h"
#include "zrmmethodchoose.h"
#include "zrmmethodeditor.h"
#include "zrmwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actMethod_Editor;
    QAction *actConfigure;
    QAction *actExit;
    QAction *actZrmView;
    QAction *actStyle;
    QAction *actReadyView;
    QAction *actChooseMethod;
    QAction *actStartAll;
    QAction *actStopAll;
    QAction *actReports;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    ZrmReadyWidget *zrm_ready;
    QWidget *zrm_view;
    QHBoxLayout *horizontalLayout_3;
    ZrmWidget *zrm_widget;
    QWidget *method_editor_page;
    QVBoxLayout *verticalLayout_5;
    ZrmMethodEditor *method_editor;
    QWidget *conn_params_page;
    QVBoxLayout *verticalLayout_6;
    ZrmConnectivityParam *conn_params;
    QWidget *style_page;
    QHBoxLayout *horizontalLayout_5;
    QFrame *style_frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *style_select;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QLabel *label_4;
    QSpinBox *font_size;
    QToolButton *font_bold;
    QToolButton *font_italic;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QFrame *preview_frame;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *gb_ctrls;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *treeWidget;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_3;
    ZrmMethodChoose *method_chooser;
    ReportCommon *report_common;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(843, 617);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actMethod_Editor = new QAction(MainWindow);
        actMethod_Editor->setObjectName(QString::fromUtf8("actMethod_Editor"));
        actMethod_Editor->setCheckable(true);
        actMethod_Editor->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/method_editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        actMethod_Editor->setIcon(icon);
        actConfigure = new QAction(MainWindow);
        actConfigure->setObjectName(QString::fromUtf8("actConfigure"));
        actConfigure->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/settings-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actConfigure->setIcon(icon1);
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/exit-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon2);
        actZrmView = new QAction(MainWindow);
        actZrmView->setObjectName(QString::fromUtf8("actZrmView"));
        actZrmView->setCheckable(true);
        actZrmView->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/meter-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actZrmView->setIcon(icon3);
        actStyle = new QAction(MainWindow);
        actStyle->setObjectName(QString::fromUtf8("actStyle"));
        actStyle->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/style-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actStyle->setIcon(icon4);
        actReadyView = new QAction(MainWindow);
        actReadyView->setObjectName(QString::fromUtf8("actReadyView"));
        actReadyView->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/icons/table2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actReadyView->setIcon(icon5);
        actChooseMethod = new QAction(MainWindow);
        actChooseMethod->setObjectName(QString::fromUtf8("actChooseMethod"));
        actChooseMethod->setCheckable(true);
        actChooseMethod->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/zrm/icons/method.png"), QSize(), QIcon::Normal, QIcon::Off);
        actChooseMethod->setIcon(icon6);
        actStartAll = new QAction(MainWindow);
        actStartAll->setObjectName(QString::fromUtf8("actStartAll"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/start_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actStartAll->setIcon(icon7);
        actStopAll = new QAction(MainWindow);
        actStopAll->setObjectName(QString::fromUtf8("actStopAll"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/icons/stop_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actStopAll->setIcon(icon8);
        actReports = new QAction(MainWindow);
        actReports->setObjectName(QString::fromUtf8("actReports"));
        actReports->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/icons/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        actReports->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        stackedWidget->setFont(font1);
        stackedWidget->setFrameShape(QFrame::Panel);
        stackedWidget->setFrameShadow(QFrame::Raised);
        zrm_ready = new ZrmReadyWidget();
        zrm_ready->setObjectName(QString::fromUtf8("zrm_ready"));
        stackedWidget->addWidget(zrm_ready);
        zrm_view = new QWidget();
        zrm_view->setObjectName(QString::fromUtf8("zrm_view"));
        horizontalLayout_3 = new QHBoxLayout(zrm_view);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        zrm_widget = new ZrmWidget(zrm_view);
        zrm_widget->setObjectName(QString::fromUtf8("zrm_widget"));
        zrm_widget->setEnabled(true);
        sizePolicy.setHeightForWidth(zrm_widget->sizePolicy().hasHeightForWidth());
        zrm_widget->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(zrm_widget);

        horizontalLayout_3->setStretch(0, 5);
        stackedWidget->addWidget(zrm_view);
        method_editor_page = new QWidget();
        method_editor_page->setObjectName(QString::fromUtf8("method_editor_page"));
        verticalLayout_5 = new QVBoxLayout(method_editor_page);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        method_editor = new ZrmMethodEditor(method_editor_page);
        method_editor->setObjectName(QString::fromUtf8("method_editor"));

        verticalLayout_5->addWidget(method_editor);

        stackedWidget->addWidget(method_editor_page);
        conn_params_page = new QWidget();
        conn_params_page->setObjectName(QString::fromUtf8("conn_params_page"));
        verticalLayout_6 = new QVBoxLayout(conn_params_page);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
        conn_params = new ZrmConnectivityParam(conn_params_page);
        conn_params->setObjectName(QString::fromUtf8("conn_params"));

        verticalLayout_6->addWidget(conn_params);

        stackedWidget->addWidget(conn_params_page);
        style_page = new QWidget();
        style_page->setObjectName(QString::fromUtf8("style_page"));
        horizontalLayout_5 = new QHBoxLayout(style_page);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        style_frame = new QFrame(style_page);
        style_frame->setObjectName(QString::fromUtf8("style_frame"));
        style_frame->setFrameShape(QFrame::StyledPanel);
        style_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(style_frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(style_frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        style_select = new QComboBox(style_frame);
        style_select->setObjectName(QString::fromUtf8("style_select"));

        formLayout->setWidget(0, QFormLayout::FieldRole, style_select);

        label_2 = new QLabel(style_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        fontComboBox = new QFontComboBox(style_frame);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, fontComboBox);

        label_4 = new QLabel(style_frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        font_size = new QSpinBox(style_frame);
        font_size->setObjectName(QString::fromUtf8("font_size"));
        font_size->setMinimum(3);
        font_size->setMaximum(96);

        formLayout->setWidget(2, QFormLayout::FieldRole, font_size);

        font_bold = new QToolButton(style_frame);
        font_bold->setObjectName(QString::fromUtf8("font_bold"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/icons/checkbox_unchecked_focus.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QString::fromUtf8(":/icons/icons/checkbox_checked_focus.png"), QSize(), QIcon::Normal, QIcon::On);
        font_bold->setIcon(icon10);
        font_bold->setIconSize(QSize(24, 24));
        font_bold->setCheckable(true);
        font_bold->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        formLayout->setWidget(3, QFormLayout::LabelRole, font_bold);

        font_italic = new QToolButton(style_frame);
        font_italic->setObjectName(QString::fromUtf8("font_italic"));
        font_italic->setIcon(icon10);
        font_italic->setIconSize(QSize(24, 24));
        font_italic->setCheckable(true);
        font_italic->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        formLayout->setWidget(3, QFormLayout::FieldRole, font_italic);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 337, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_5->addWidget(style_frame);

        preview_frame = new QFrame(style_page);
        preview_frame->setObjectName(QString::fromUtf8("preview_frame"));
        preview_frame->setFrameShape(QFrame::StyledPanel);
        preview_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(preview_frame);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gb_ctrls = new QGroupBox(preview_frame);
        gb_ctrls->setObjectName(QString::fromUtf8("gb_ctrls"));
        verticalLayout_7 = new QVBoxLayout(gb_ctrls);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        treeWidget = new QTreeWidget(gb_ctrls);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        horizontalLayout_4->addWidget(treeWidget);

        verticalScrollBar = new QScrollBar(gb_ctrls);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(verticalScrollBar);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalScrollBar = new QScrollBar(gb_ctrls);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalScrollBar);


        verticalLayout_7->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doubleSpinBox = new QDoubleSpinBox(gb_ctrls);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 0, 5, 1, 1);

        label_3 = new QLabel(gb_ctrls);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        checkBox = new QCheckBox(gb_ctrls);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 1, 4, 1, 2);

        pushButton = new QPushButton(gb_ctrls);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 2);

        radioButton = new QRadioButton(gb_ctrls);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 1, 3, 1, 1);

        lineEdit = new QLineEdit(gb_ctrls);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 3);

        comboBox = new QComboBox(gb_ctrls);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout);

        progressBar = new QProgressBar(gb_ctrls);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_7->addWidget(progressBar);

        verticalSpacer_3 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        verticalLayout_8->addWidget(gb_ctrls);


        horizontalLayout_5->addWidget(preview_frame);

        stackedWidget->addWidget(style_page);
        method_chooser = new ZrmMethodChoose();
        method_chooser->setObjectName(QString::fromUtf8("method_chooser"));
        stackedWidget->addWidget(method_chooser);
        report_common = new ReportCommon();
        report_common->setObjectName(QString::fromUtf8("report_common"));
        stackedWidget->addWidget(report_common);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 843, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        mainToolBar->setOrientation(Qt::Vertical);
        mainToolBar->setIconSize(QSize(48, 48));
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::RightToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy1);
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actReadyView);
        mainToolBar->addAction(actZrmView);
        mainToolBar->addAction(actStartAll);
        mainToolBar->addAction(actStopAll);
        mainToolBar->addAction(actChooseMethod);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actReports);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actMethod_Editor);
        mainToolBar->addAction(actConfigure);
        mainToolBar->addAction(actStyle);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actExit);

        retranslateUi(MainWindow);
        QObject::connect(actExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        actMethod_Editor->setText(QCoreApplication::translate("MainWindow", "MEditor", nullptr));
#if QT_CONFIG(tooltip)
        actMethod_Editor->setToolTip(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\274\320\265\321\202\320\276\320\264\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actConfigure->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
#if QT_CONFIG(tooltip)
        actConfigure->setToolTip(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        actExit->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(tooltip)
        actExit->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203(Alt+X)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actZrmView->setText(QCoreApplication::translate("MainWindow", "zrmview", nullptr));
#if QT_CONFIG(tooltip)
        actZrmView->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        actStyle->setText(QCoreApplication::translate("MainWindow", "Style", nullptr));
#if QT_CONFIG(tooltip)
        actStyle->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\273\320\265\320\275\320\270\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        actReadyView->setText(QCoreApplication::translate("MainWindow", "ReadyList", nullptr));
#if QT_CONFIG(tooltip)
        actReadyView->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\262\321\201\320\265\321\205", nullptr));
#endif // QT_CONFIG(tooltip)
        actChooseMethod->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\274\320\265\321\202\320\276\320\264\320\260", nullptr));
#if QT_CONFIG(tooltip)
        actChooseMethod->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \320\274\320\265\321\202\320\276\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        actStartAll->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\262\321\201\320\265\321\205", nullptr));
#if QT_CONFIG(tooltip)
        actStartAll->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\262\321\201\320\265\321\205", nullptr));
#endif // QT_CONFIG(tooltip)
        actStopAll->setText(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
#if QT_CONFIG(tooltip)
        actStopAll->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        actReports->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\202\321\213", nullptr));
#if QT_CONFIG(tooltip)
        actReports->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\202\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\321\202\320\270\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\250\321\200\320\270\321\204\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200", nullptr));
        font_bold->setText(QCoreApplication::translate("MainWindow", "\320\226\320\270\321\200\320\275\321\213\320\271", nullptr));
        font_italic->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\272\320\273\320\276\320\275\320\275\321\213\320\271", nullptr));
        gb_ctrls->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Root", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "Child1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("MainWindow", "Child2", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", " Line Edit", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Item1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Item2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Item3", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
