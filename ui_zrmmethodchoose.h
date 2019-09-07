/********************************************************************************
** Form generated from reading UI file 'zrmmethodchoose.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMETHODCHOOSE_H
#define UI_ZRMMETHODCHOOSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "zrmmethodminmax.h"
#include "zrmmethodstree.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmMethodChoose
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bAutoMethod;
    QPushButton *bAnyMethod;
    QPushButton *bManual;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gb_methods;
    QVBoxLayout *verticalLayout_2;
    ZrmMethodsTree *methods;
    QGroupBox *gb_manual;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *tbCharge;
    QPushButton *tbDischarge;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QDoubleSpinBox *manLimU;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QDoubleSpinBox *manLimI;
    QGroupBox *gb_add_flags;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *cbCapMeasure;
    QCheckBox *cbCheckCondition;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *manLimHour;
    QSpinBox *manLimMinutes;
    QSpinBox *manLimSecunds;
    QPushButton *bUnlimitTime;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    ZrmMethodMinmax *method_minmax;
    QHBoxLayout *horizontalLayout;
    QPushButton *bOk;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bCancel;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ZrmMethodChoose)
    {
        if (ZrmMethodChoose->objectName().isEmpty())
            ZrmMethodChoose->setObjectName(QString::fromUtf8("ZrmMethodChoose"));
        ZrmMethodChoose->resize(535, 414);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmMethodChoose->sizePolicy().hasHeightForWidth());
        ZrmMethodChoose->setSizePolicy(sizePolicy);
        ZrmMethodChoose->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(ZrmMethodChoose);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        groupBox = new QGroupBox(ZrmMethodChoose);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bAutoMethod = new QPushButton(groupBox);
        buttonGroup = new QButtonGroup(ZrmMethodChoose);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(bAutoMethod);
        bAutoMethod->setObjectName(QString::fromUtf8("bAutoMethod"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bAutoMethod->sizePolicy().hasHeightForWidth());
        bAutoMethod->setSizePolicy(sizePolicy1);
        bAutoMethod->setCheckable(true);
        bAutoMethod->setChecked(true);

        horizontalLayout_2->addWidget(bAutoMethod);

        bAnyMethod = new QPushButton(groupBox);
        buttonGroup->addButton(bAnyMethod);
        bAnyMethod->setObjectName(QString::fromUtf8("bAnyMethod"));
        sizePolicy1.setHeightForWidth(bAnyMethod->sizePolicy().hasHeightForWidth());
        bAnyMethod->setSizePolicy(sizePolicy1);
        bAnyMethod->setCheckable(true);
        bAnyMethod->setChecked(false);

        horizontalLayout_2->addWidget(bAnyMethod);

        bManual = new QPushButton(groupBox);
        buttonGroup->addButton(bManual);
        bManual->setObjectName(QString::fromUtf8("bManual"));
        sizePolicy1.setHeightForWidth(bManual->sizePolicy().hasHeightForWidth());
        bManual->setSizePolicy(sizePolicy1);
        bManual->setCheckable(true);

        horizontalLayout_2->addWidget(bManual);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        gb_methods = new QGroupBox(ZrmMethodChoose);
        gb_methods->setObjectName(QString::fromUtf8("gb_methods"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_methods->sizePolicy().hasHeightForWidth());
        gb_methods->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(gb_methods);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        methods = new ZrmMethodsTree(gb_methods);
        methods->setObjectName(QString::fromUtf8("methods"));
        sizePolicy.setHeightForWidth(methods->sizePolicy().hasHeightForWidth());
        methods->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(methods);


        verticalLayout->addWidget(gb_methods);

        gb_manual = new QGroupBox(ZrmMethodChoose);
        gb_manual->setObjectName(QString::fromUtf8("gb_manual"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(gb_manual->sizePolicy().hasHeightForWidth());
        gb_manual->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(gb_manual);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        tbCharge = new QPushButton(gb_manual);
        tbCharge->setObjectName(QString::fromUtf8("tbCharge"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tbCharge->sizePolicy().hasHeightForWidth());
        tbCharge->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/icons/charge.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbCharge->setIcon(icon);
        tbCharge->setIconSize(QSize(48, 48));
        tbCharge->setCheckable(true);
        tbCharge->setChecked(true);
        tbCharge->setAutoExclusive(true);

        horizontalLayout_9->addWidget(tbCharge);

        tbDischarge = new QPushButton(gb_manual);
        tbDischarge->setObjectName(QString::fromUtf8("tbDischarge"));
        sizePolicy4.setHeightForWidth(tbDischarge->sizePolicy().hasHeightForWidth());
        tbDischarge->setSizePolicy(sizePolicy4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/data/icons/discharge.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDischarge->setIcon(icon1);
        tbDischarge->setIconSize(QSize(48, 48));
        tbDischarge->setCheckable(true);
        tbDischarge->setChecked(false);
        tbDischarge->setAutoExclusive(true);

        horizontalLayout_9->addWidget(tbDischarge);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(gb_manual);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        manLimU = new QDoubleSpinBox(groupBox_2);
        manLimU->setObjectName(QString::fromUtf8("manLimU"));
        sizePolicy1.setHeightForWidth(manLimU->sizePolicy().hasHeightForWidth());
        manLimU->setSizePolicy(sizePolicy1);
        manLimU->setMaximum(999.990000000000009);

        verticalLayout_6->addWidget(manLimU);


        horizontalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(gb_manual);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        manLimI = new QDoubleSpinBox(groupBox_3);
        manLimI->setObjectName(QString::fromUtf8("manLimI"));
        sizePolicy1.setHeightForWidth(manLimI->sizePolicy().hasHeightForWidth());
        manLimI->setSizePolicy(sizePolicy1);
        manLimI->setMaximum(999.990000000000009);

        verticalLayout_8->addWidget(manLimI);


        horizontalLayout_7->addWidget(groupBox_3);

        gb_add_flags = new QGroupBox(gb_manual);
        gb_add_flags->setObjectName(QString::fromUtf8("gb_add_flags"));
        verticalLayout_5 = new QVBoxLayout(gb_add_flags);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        cbCapMeasure = new QCheckBox(gb_add_flags);
        cbCapMeasure->setObjectName(QString::fromUtf8("cbCapMeasure"));

        verticalLayout_5->addWidget(cbCapMeasure);

        cbCheckCondition = new QCheckBox(gb_add_flags);
        cbCheckCondition->setObjectName(QString::fromUtf8("cbCheckCondition"));

        verticalLayout_5->addWidget(cbCheckCondition);


        horizontalLayout_7->addWidget(gb_add_flags);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_7);

        groupBox_4 = new QGroupBox(gb_manual);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_9 = new QVBoxLayout(groupBox_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        manLimHour = new QSpinBox(groupBox_4);
        manLimHour->setObjectName(QString::fromUtf8("manLimHour"));
        sizePolicy1.setHeightForWidth(manLimHour->sizePolicy().hasHeightForWidth());
        manLimHour->setSizePolicy(sizePolicy1);
        manLimHour->setWrapping(false);
        manLimHour->setAlignment(Qt::AlignCenter);
        manLimHour->setSpecialValueText(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(manLimHour);

        manLimMinutes = new QSpinBox(groupBox_4);
        manLimMinutes->setObjectName(QString::fromUtf8("manLimMinutes"));
        sizePolicy1.setHeightForWidth(manLimMinutes->sizePolicy().hasHeightForWidth());
        manLimMinutes->setSizePolicy(sizePolicy1);
        manLimMinutes->setAlignment(Qt::AlignCenter);
        manLimMinutes->setSpecialValueText(QString::fromUtf8(""));
        manLimMinutes->setProperty("showGroupSeparator", QVariant(false));
        manLimMinutes->setMaximum(60);

        horizontalLayout_8->addWidget(manLimMinutes);

        manLimSecunds = new QSpinBox(groupBox_4);
        manLimSecunds->setObjectName(QString::fromUtf8("manLimSecunds"));
        sizePolicy1.setHeightForWidth(manLimSecunds->sizePolicy().hasHeightForWidth());
        manLimSecunds->setSizePolicy(sizePolicy1);
        manLimSecunds->setAlignment(Qt::AlignCenter);
        manLimSecunds->setSpecialValueText(QString::fromUtf8(""));
        manLimSecunds->setProperty("showGroupSeparator", QVariant(false));
        manLimSecunds->setMaximum(60);

        horizontalLayout_8->addWidget(manLimSecunds);

        bUnlimitTime = new QPushButton(groupBox_4);
        bUnlimitTime->setObjectName(QString::fromUtf8("bUnlimitTime"));
        bUnlimitTime->setCheckable(true);
        bUnlimitTime->setAutoDefault(false);
        bUnlimitTime->setFlat(false);

        horizontalLayout_8->addWidget(bUnlimitTime);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_3->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout->addWidget(gb_manual);

        groupBox_5 = new QGroupBox(ZrmMethodChoose);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        method_minmax = new ZrmMethodMinmax(groupBox_5);
        method_minmax->setObjectName(QString::fromUtf8("method_minmax"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(method_minmax->sizePolicy().hasHeightForWidth());
        method_minmax->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(method_minmax);


        verticalLayout->addWidget(groupBox_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bOk = new QPushButton(ZrmMethodChoose);
        bOk->setObjectName(QString::fromUtf8("bOk"));
        bOk->setEnabled(false);
        sizePolicy1.setHeightForWidth(bOk->sizePolicy().hasHeightForWidth());
        bOk->setSizePolicy(sizePolicy1);
        bOk->setIconSize(QSize(48, 48));
        bOk->setAutoDefault(true);

        horizontalLayout->addWidget(bOk);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bCancel = new QPushButton(ZrmMethodChoose);
        bCancel->setObjectName(QString::fromUtf8("bCancel"));
        sizePolicy1.setHeightForWidth(bCancel->sizePolicy().hasHeightForWidth());
        bCancel->setSizePolicy(sizePolicy1);
        bCancel->setIconSize(QSize(48, 48));
        bCancel->setAutoDefault(true);

        horizontalLayout->addWidget(bCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ZrmMethodChoose);
        QObject::connect(bCancel, SIGNAL(clicked()), ZrmMethodChoose, SLOT(reject()));
        QObject::connect(bUnlimitTime, SIGNAL(toggled(bool)), manLimHour, SLOT(setDisabled(bool)));
        QObject::connect(bUnlimitTime, SIGNAL(toggled(bool)), manLimMinutes, SLOT(setDisabled(bool)));
        QObject::connect(bUnlimitTime, SIGNAL(toggled(bool)), manLimSecunds, SLOT(setDisabled(bool)));

        bOk->setDefault(true);
        bCancel->setDefault(false);


        QMetaObject::connectSlotsByName(ZrmMethodChoose);
    } // setupUi

    void retranslateUi(QDialog *ZrmMethodChoose)
    {
        ZrmMethodChoose->setWindowTitle(QCoreApplication::translate("ZrmMethodChoose", "\320\222\321\213\320\261\320\276\321\200 \320\274\320\265\321\202\320\276\320\264\320\260", nullptr));
        groupBox->setTitle(QString());
        bAutoMethod->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202", nullptr));
        bAnyMethod->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\235\320\265 \320\260\320\262\321\202\320\276\320\274\320\260\321\202", nullptr));
        bManual->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\240\321\203\321\207\320\275\320\276\320\271", nullptr));
        gb_methods->setTitle(QString());
        gb_manual->setTitle(QString());
        tbCharge->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\230\320\241\320\242\320\236\320\247\320\235\320\230\320\232", nullptr));
        tbDischarge->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\235\320\220\320\223\320\240\320\243\320\227\320\232\320\220", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ZrmMethodChoose", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265 U", nullptr));
        manLimU->setSuffix(QCoreApplication::translate("ZrmMethodChoose", " \320\222", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ZrmMethodChoose", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265 I", nullptr));
        manLimI->setSuffix(QCoreApplication::translate("ZrmMethodChoose", " \320\220", nullptr));
        gb_add_flags->setTitle(QString());
        cbCapMeasure->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\227\320\260\320\274\320\265\321\200 \321\221\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        cbCheckCondition->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ZrmMethodChoose", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        manLimHour->setSuffix(QCoreApplication::translate("ZrmMethodChoose", " \320\247", nullptr));
        manLimMinutes->setSuffix(QCoreApplication::translate("ZrmMethodChoose", " \320\234", nullptr));
        manLimSecunds->setSuffix(QCoreApplication::translate("ZrmMethodChoose", " C", nullptr));
        bUnlimitTime->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\235\320\265\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\275\320\276", nullptr));
        groupBox_5->setTitle(QString());
        bOk->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        bCancel->setText(QCoreApplication::translate("ZrmMethodChoose", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmMethodChoose: public Ui_ZrmMethodChoose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMETHODCHOOSE_H
