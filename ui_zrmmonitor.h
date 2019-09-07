/********************************************************************************
** Form generated from reading UI file 'zrmmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMONITOR_H
#define UI_ZRMMONITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qtextviewer.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmMonitor
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *btn_frame;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *tbMonPause;
    QPushButton *tbMonClear;
    QPushButton *tbMonRx;
    QPushButton *tbMonTx;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QTextViewer *monitor;
    QScrollBar *mon_vsbar;
    QScrollBar *mon_hsbar;

    void setupUi(QWidget *ZrmMonitor)
    {
        if (ZrmMonitor->objectName().isEmpty())
            ZrmMonitor->setObjectName(QString::fromUtf8("ZrmMonitor"));
        ZrmMonitor->resize(343, 304);
        verticalLayout = new QVBoxLayout(ZrmMonitor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        btn_frame = new QFrame(ZrmMonitor);
        btn_frame->setObjectName(QString::fromUtf8("btn_frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_frame->sizePolicy().hasHeightForWidth());
        btn_frame->setSizePolicy(sizePolicy);
        btn_frame->setFrameShape(QFrame::StyledPanel);
        btn_frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout_9 = new QHBoxLayout(btn_frame);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        tbMonPause = new QPushButton(btn_frame);
        tbMonPause->setObjectName(QString::fromUtf8("tbMonPause"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMonPause->setIcon(icon);
        tbMonPause->setIconSize(QSize(24, 24));
        tbMonPause->setCheckable(true);

        horizontalLayout_9->addWidget(tbMonPause);

        tbMonClear = new QPushButton(btn_frame);
        tbMonClear->setObjectName(QString::fromUtf8("tbMonClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/mon-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMonClear->setIcon(icon1);
        tbMonClear->setIconSize(QSize(24, 24));

        horizontalLayout_9->addWidget(tbMonClear);

        tbMonRx = new QPushButton(btn_frame);
        tbMonRx->setObjectName(QString::fromUtf8("tbMonRx"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/network-receive.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMonRx->setIcon(icon2);
        tbMonRx->setIconSize(QSize(24, 24));
        tbMonRx->setCheckable(true);
        tbMonRx->setChecked(true);

        horizontalLayout_9->addWidget(tbMonRx);

        tbMonTx = new QPushButton(btn_frame);
        tbMonTx->setObjectName(QString::fromUtf8("tbMonTx"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zrm/icons/network-transmit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbMonTx->setIcon(icon3);
        tbMonTx->setIconSize(QSize(24, 24));
        tbMonTx->setCheckable(true);
        tbMonTx->setChecked(true);

        horizontalLayout_9->addWidget(tbMonTx);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(btn_frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        monitor = new QTextViewer(ZrmMonitor);
        monitor->setObjectName(QString::fromUtf8("monitor"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(monitor->sizePolicy().hasHeightForWidth());
        monitor->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(monitor);

        mon_vsbar = new QScrollBar(ZrmMonitor);
        mon_vsbar->setObjectName(QString::fromUtf8("mon_vsbar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mon_vsbar->sizePolicy().hasHeightForWidth());
        mon_vsbar->setSizePolicy(sizePolicy2);
        mon_vsbar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(mon_vsbar);


        verticalLayout->addLayout(horizontalLayout);

        mon_hsbar = new QScrollBar(ZrmMonitor);
        mon_hsbar->setObjectName(QString::fromUtf8("mon_hsbar"));
        mon_hsbar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(mon_hsbar);


        retranslateUi(ZrmMonitor);

        QMetaObject::connectSlotsByName(ZrmMonitor);
    } // setupUi

    void retranslateUi(QWidget *ZrmMonitor)
    {
        ZrmMonitor->setWindowTitle(QCoreApplication::translate("ZrmMonitor", "Form", nullptr));
        tbMonPause->setText(QString());
        tbMonClear->setText(QString());
        tbMonRx->setText(QString());
        tbMonTx->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZrmMonitor: public Ui_ZrmMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMONITOR_H
