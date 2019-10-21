/********************************************************************************
** Form generated from reading UI file 'zrmchannelmimimal.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMCHANNELMIMIMAL_H
#define UI_ZRMCHANNELMIMIMAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zrmrelaybase.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmChannelMimimal
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    ZrmRelayBase *zrm_relay;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lb_mode;
    QPushButton *bStop;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *volt;
    QDoubleSpinBox *curr;
    QLineEdit *ed_time;

    void setupUi(QWidget *ZrmChannelMimimal)
    {
        if (ZrmChannelMimimal->objectName().isEmpty())
            ZrmChannelMimimal->setObjectName(QString::fromUtf8("ZrmChannelMimimal"));
        ZrmChannelMimimal->resize(241, 66);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmChannelMimimal->sizePolicy().hasHeightForWidth());
        ZrmChannelMimimal->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(ZrmChannelMimimal);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(ZrmChannelMimimal);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout->setContentsMargins(6, -1, -1, -1);
        zrm_relay = new ZrmRelayBase(frame);
        zrm_relay->setObjectName(QString::fromUtf8("zrm_relay"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(zrm_relay->sizePolicy().hasHeightForWidth());
        zrm_relay->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(zrm_relay);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lb_mode = new QLabel(frame);
        lb_mode->setObjectName(QString::fromUtf8("lb_mode"));
        sizePolicy1.setHeightForWidth(lb_mode->sizePolicy().hasHeightForWidth());
        lb_mode->setSizePolicy(sizePolicy1);
        lb_mode->setFrameShape(QFrame::NoFrame);
        lb_mode->setFrameShadow(QFrame::Plain);
        lb_mode->setTextFormat(Qt::PlainText);
        lb_mode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lb_mode);

        bStop = new QPushButton(frame);
        bStop->setObjectName(QString::fromUtf8("bStop"));
        bStop->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bStop->sizePolicy().hasHeightForWidth());
        bStop->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        bStop->setIcon(icon);
        bStop->setFlat(true);

        horizontalLayout->addWidget(bStop);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        volt = new QDoubleSpinBox(frame);
        volt->setObjectName(QString::fromUtf8("volt"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(volt->sizePolicy().hasHeightForWidth());
        volt->setSizePolicy(sizePolicy3);
        volt->setAlignment(Qt::AlignCenter);
        volt->setReadOnly(true);
        volt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        volt->setDecimals(1);
        volt->setMinimum(-100000.000000000000000);
        volt->setMaximum(100000.000000000000000);

        horizontalLayout_2->addWidget(volt);

        curr = new QDoubleSpinBox(frame);
        curr->setObjectName(QString::fromUtf8("curr"));
        sizePolicy3.setHeightForWidth(curr->sizePolicy().hasHeightForWidth());
        curr->setSizePolicy(sizePolicy3);
        curr->setAlignment(Qt::AlignCenter);
        curr->setReadOnly(true);
        curr->setButtonSymbols(QAbstractSpinBox::NoButtons);
        curr->setDecimals(1);
        curr->setMinimum(-100000.000000000000000);
        curr->setMaximum(100000.000000000000000);

        horizontalLayout_2->addWidget(curr);

        ed_time = new QLineEdit(frame);
        ed_time->setObjectName(QString::fromUtf8("ed_time"));
        sizePolicy2.setHeightForWidth(ed_time->sizePolicy().hasHeightForWidth());
        ed_time->setSizePolicy(sizePolicy2);
        ed_time->setMaxLength(10);
        ed_time->setAlignment(Qt::AlignCenter);
        ed_time->setReadOnly(true);

        horizontalLayout_2->addWidget(ed_time);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(ZrmChannelMimimal);

        QMetaObject::connectSlotsByName(ZrmChannelMimimal);
    } // setupUi

    void retranslateUi(QWidget *ZrmChannelMimimal)
    {
        ZrmChannelMimimal->setWindowTitle(QCoreApplication::translate("ZrmChannelMimimal", "Form", nullptr));
        lb_mode->setText(QCoreApplication::translate("ZrmChannelMimimal", "\320\227\320\260\321\200\321\217\320\264\320\275\320\276\320\265", nullptr));
        bStop->setText(QCoreApplication::translate("ZrmChannelMimimal", "Stop", nullptr));
        volt->setSpecialValueText(QCoreApplication::translate("ZrmChannelMimimal", "--", nullptr));
        volt->setSuffix(QCoreApplication::translate("ZrmChannelMimimal", " \320\222", nullptr));
        curr->setSpecialValueText(QCoreApplication::translate("ZrmChannelMimimal", "--", nullptr));
        curr->setSuffix(QCoreApplication::translate("ZrmChannelMimimal", " \320\220", nullptr));
        ed_time->setText(QCoreApplication::translate("ZrmChannelMimimal", "--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmChannelMimimal: public Ui_ZrmChannelMimimal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMCHANNELMIMIMAL_H
