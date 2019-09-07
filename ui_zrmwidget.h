/********************************************************************************
** Form generated from reading UI file 'zrmwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMWIDGET_H
#define UI_ZRMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zrmcalibrate.h"
#include "zrmcellview.h"
#include "zrmdevmethods.h"
#include "zrmmaindisplay.h"
#include "zrmmethodbase.h"
#include "zrmmonitor.h"
#include "zrmparamsview.h"
#include "zrmrelaybase.h"
#include "zrmreport.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    ZrmRelayBase *zrm_relay;
    QLabel *dev_name;
    QPushButton *bPrevChannel;
    QPushButton *bNextChannel;
    QPushButton *bAddition;
    QPushButton *bShowMethod;
    QHBoxLayout *horizontalLayout_2;
    ZrmMainDisplay *zrm_display;
    ZrmMethodBase *zrm_method;
    QGroupBox *gb_additional;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *bDevMeth;
    QPushButton *bCalibrate;
    QPushButton *bReport;
    QPushButton *bMasakb;
    QSpacerItem *verticalSpacer;
    QPushButton *bParams;
    QPushButton *bMonitor;
    QStackedWidget *additional_widgets;
    ZrmReport *zrm_report;
    ZrmMonitor *zrm_mon;
    ZrmCellView *zrm_cells;
    ZrmDevMethods *zrm_devmeth;
    ZrmParamsView *zrm_params;
    ZrmCalibrate *zrm_calibrate;

    void setupUi(QWidget *ZrmWidget)
    {
        if (ZrmWidget->objectName().isEmpty())
            ZrmWidget->setObjectName(QString::fromUtf8("ZrmWidget"));
        ZrmWidget->resize(563, 441);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmWidget->sizePolicy().hasHeightForWidth());
        ZrmWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ZrmWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(ZrmWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        zrm_relay = new ZrmRelayBase(groupBox);
        zrm_relay->setObjectName(QString::fromUtf8("zrm_relay"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(zrm_relay->sizePolicy().hasHeightForWidth());
        zrm_relay->setSizePolicy(sizePolicy2);
        zrm_relay->setMinimumSize(QSize(24, 24));

        horizontalLayout->addWidget(zrm_relay);

        dev_name = new QLabel(groupBox);
        dev_name->setObjectName(QString::fromUtf8("dev_name"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dev_name->sizePolicy().hasHeightForWidth());
        dev_name->setSizePolicy(sizePolicy3);
        dev_name->setTextFormat(Qt::PlainText);
        dev_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(dev_name);

        bPrevChannel = new QPushButton(groupBox);
        bPrevChannel->setObjectName(QString::fromUtf8("bPrevChannel"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPrevChannel->setIcon(icon);
        bPrevChannel->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(bPrevChannel);

        bNextChannel = new QPushButton(groupBox);
        bNextChannel->setObjectName(QString::fromUtf8("bNextChannel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        bNextChannel->setIcon(icon1);
        bNextChannel->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(bNextChannel);

        bAddition = new QPushButton(groupBox);
        bAddition->setObjectName(QString::fromUtf8("bAddition"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/additional.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAddition->setIcon(icon2);
        bAddition->setIconSize(QSize(32, 32));
        bAddition->setCheckable(true);

        horizontalLayout->addWidget(bAddition);

        bShowMethod = new QPushButton(groupBox);
        bShowMethod->setObjectName(QString::fromUtf8("bShowMethod"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zrm/icons/method.png"), QSize(), QIcon::Normal, QIcon::Off);
        bShowMethod->setIcon(icon3);
        bShowMethod->setIconSize(QSize(32, 32));
        bShowMethod->setCheckable(true);

        horizontalLayout->addWidget(bShowMethod);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zrm_display = new ZrmMainDisplay(ZrmWidget);
        zrm_display->setObjectName(QString::fromUtf8("zrm_display"));
        sizePolicy.setHeightForWidth(zrm_display->sizePolicy().hasHeightForWidth());
        zrm_display->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(zrm_display);

        zrm_method = new ZrmMethodBase(ZrmWidget);
        zrm_method->setObjectName(QString::fromUtf8("zrm_method"));
        sizePolicy.setHeightForWidth(zrm_method->sizePolicy().hasHeightForWidth());
        zrm_method->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(zrm_method);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gb_additional = new QGroupBox(ZrmWidget);
        gb_additional->setObjectName(QString::fromUtf8("gb_additional"));
        sizePolicy.setHeightForWidth(gb_additional->sizePolicy().hasHeightForWidth());
        gb_additional->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(gb_additional);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        bDevMeth = new QPushButton(gb_additional);
        bDevMeth->setObjectName(QString::fromUtf8("bDevMeth"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bDevMeth->sizePolicy().hasHeightForWidth());
        bDevMeth->setSizePolicy(sizePolicy4);
        bDevMeth->setIcon(icon3);
        bDevMeth->setIconSize(QSize(32, 32));
        bDevMeth->setCheckable(true);
        bDevMeth->setChecked(false);
        bDevMeth->setAutoExclusive(true);
        bDevMeth->setFlat(false);

        verticalLayout->addWidget(bDevMeth);

        bCalibrate = new QPushButton(gb_additional);
        bCalibrate->setObjectName(QString::fromUtf8("bCalibrate"));
        sizePolicy4.setHeightForWidth(bCalibrate->sizePolicy().hasHeightForWidth());
        bCalibrate->setSizePolicy(sizePolicy4);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/zrm/icons/equalizer.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCalibrate->setIcon(icon4);
        bCalibrate->setIconSize(QSize(32, 32));
        bCalibrate->setAutoExclusive(true);

        verticalLayout->addWidget(bCalibrate);

        bReport = new QPushButton(gb_additional);
        bReport->setObjectName(QString::fromUtf8("bReport"));
        sizePolicy4.setHeightForWidth(bReport->sizePolicy().hasHeightForWidth());
        bReport->setSizePolicy(sizePolicy4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/zrm/icons/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        bReport->setIcon(icon5);
        bReport->setIconSize(QSize(32, 32));
        bReport->setCheckable(true);
        bReport->setChecked(false);
        bReport->setAutoExclusive(true);
        bReport->setFlat(false);

        verticalLayout->addWidget(bReport);

        bMasakb = new QPushButton(gb_additional);
        bMasakb->setObjectName(QString::fromUtf8("bMasakb"));
        sizePolicy4.setHeightForWidth(bMasakb->sizePolicy().hasHeightForWidth());
        bMasakb->setSizePolicy(sizePolicy4);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/zrm/icons/battery.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMasakb->setIcon(icon6);
        bMasakb->setIconSize(QSize(32, 32));
        bMasakb->setCheckable(true);
        bMasakb->setChecked(true);
        bMasakb->setAutoExclusive(true);
        bMasakb->setFlat(false);

        verticalLayout->addWidget(bMasakb);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        bParams = new QPushButton(gb_additional);
        bParams->setObjectName(QString::fromUtf8("bParams"));
        sizePolicy4.setHeightForWidth(bParams->sizePolicy().hasHeightForWidth());
        bParams->setSizePolicy(sizePolicy4);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/zrm/icons/meter-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        bParams->setIcon(icon7);
        bParams->setIconSize(QSize(32, 32));
        bParams->setCheckable(true);
        bParams->setChecked(false);
        bParams->setAutoExclusive(true);
        bParams->setFlat(false);

        verticalLayout->addWidget(bParams);

        bMonitor = new QPushButton(gb_additional);
        bMonitor->setObjectName(QString::fromUtf8("bMonitor"));
        sizePolicy4.setHeightForWidth(bMonitor->sizePolicy().hasHeightForWidth());
        bMonitor->setSizePolicy(sizePolicy4);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/zrm/icons/monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMonitor->setIcon(icon8);
        bMonitor->setIconSize(QSize(32, 32));
        bMonitor->setCheckable(true);
        bMonitor->setChecked(false);
        bMonitor->setAutoExclusive(true);
        bMonitor->setFlat(false);

        verticalLayout->addWidget(bMonitor);


        horizontalLayout_3->addLayout(verticalLayout);

        additional_widgets = new QStackedWidget(gb_additional);
        additional_widgets->setObjectName(QString::fromUtf8("additional_widgets"));
        sizePolicy.setHeightForWidth(additional_widgets->sizePolicy().hasHeightForWidth());
        additional_widgets->setSizePolicy(sizePolicy);
        additional_widgets->setFrameShape(QFrame::Box);
        additional_widgets->setFrameShadow(QFrame::Sunken);
        zrm_report = new ZrmReport();
        zrm_report->setObjectName(QString::fromUtf8("zrm_report"));
        sizePolicy.setHeightForWidth(zrm_report->sizePolicy().hasHeightForWidth());
        zrm_report->setSizePolicy(sizePolicy);
        additional_widgets->addWidget(zrm_report);
        zrm_mon = new ZrmMonitor();
        zrm_mon->setObjectName(QString::fromUtf8("zrm_mon"));
        sizePolicy.setHeightForWidth(zrm_mon->sizePolicy().hasHeightForWidth());
        zrm_mon->setSizePolicy(sizePolicy);
        additional_widgets->addWidget(zrm_mon);
        zrm_cells = new ZrmCellView();
        zrm_cells->setObjectName(QString::fromUtf8("zrm_cells"));
        additional_widgets->addWidget(zrm_cells);
        zrm_devmeth = new ZrmDevMethods();
        zrm_devmeth->setObjectName(QString::fromUtf8("zrm_devmeth"));
        additional_widgets->addWidget(zrm_devmeth);
        zrm_params = new ZrmParamsView();
        zrm_params->setObjectName(QString::fromUtf8("zrm_params"));
        additional_widgets->addWidget(zrm_params);
        zrm_calibrate = new ZrmCalibrate();
        zrm_calibrate->setObjectName(QString::fromUtf8("zrm_calibrate"));
        additional_widgets->addWidget(zrm_calibrate);

        horizontalLayout_3->addWidget(additional_widgets);


        verticalLayout_2->addWidget(gb_additional);

        QWidget::setTabOrder(bAddition, bShowMethod);

        retranslateUi(ZrmWidget);
        QObject::connect(bShowMethod, SIGNAL(toggled(bool)), zrm_method, SLOT(setVisible(bool)));
        QObject::connect(bAddition, SIGNAL(toggled(bool)), gb_additional, SLOT(setVisible(bool)));

        additional_widgets->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(ZrmWidget);
    } // setupUi

    void retranslateUi(QWidget *ZrmWidget)
    {
        ZrmWidget->setWindowTitle(QCoreApplication::translate("ZrmWidget", "Form", nullptr));
        groupBox->setTitle(QString());
        dev_name->setText(QCoreApplication::translate("ZrmWidget", "Connection-1:2", nullptr));
#if QT_CONFIG(tooltip)
        bPrevChannel->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271 \320\272\320\260\320\275\320\260\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
        bPrevChannel->setText(QString());
#if QT_CONFIG(tooltip)
        bNextChannel->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\241\320\273\321\203\320\264\321\206\321\216\321\211\320\270\320\271 \320\272\320\260\320\275\320\260\320\273", nullptr));
#endif // QT_CONFIG(tooltip)
        bNextChannel->setText(QString());
#if QT_CONFIG(tooltip)
        bAddition->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276", nullptr));
#endif // QT_CONFIG(tooltip)
        bAddition->setText(QString());
#if QT_CONFIG(tooltip)
        bShowMethod->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\274\320\265\321\202\320\276\320\264", nullptr));
#endif // QT_CONFIG(tooltip)
        bShowMethod->setText(QString());
        gb_additional->setTitle(QString());
#if QT_CONFIG(tooltip)
        bDevMeth->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\234\320\265\321\202\320\276\320\264\321\213 \320\275\320\260 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        bDevMeth->setText(QString());
        bCalibrate->setText(QString());
#if QT_CONFIG(tooltip)
        bReport->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\236\321\202\321\207\320\265\321\202 \320\276 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        bReport->setText(QString());
#if QT_CONFIG(tooltip)
        bMasakb->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\234\320\220\320\241\320\220\320\232\320\221", nullptr));
#endif // QT_CONFIG(tooltip)
        bMasakb->setText(QString());
#if QT_CONFIG(tooltip)
        bParams->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\224\320\276\320\277. \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        bParams->setText(QString());
#if QT_CONFIG(tooltip)
        bMonitor->setToolTip(QCoreApplication::translate("ZrmWidget", "\320\234\320\276\320\275\320\270\321\202\320\276\321\200 \320\276\320\261\320\274\320\265\320\275\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        bMonitor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZrmWidget: public Ui_ZrmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMWIDGET_H
