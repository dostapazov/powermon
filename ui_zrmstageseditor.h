/********************************************************************************
** Form generated from reading UI file 'zrmstageseditor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMSTAGESEDITOR_H
#define UI_ZRMSTAGESEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QtCharts/qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmStagesEditor
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *method_box;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_8;
    QLineEdit *ed_method_name;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QDoubleSpinBox *edVoltage;
    QLabel *label_5;
    QDoubleSpinBox *edCapacity;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QLabel *label_4;
    QDoubleSpinBox *edCapPercent;
    QDoubleSpinBox *edMMaxCurrent;
    QGridLayout *gridLayout_6;
    QLabel *label_7;
    QSpinBox *sbMCycleCount;
    QLabel *label_3;
    QLineEdit *edMethodTime;
    QGroupBox *stages_box;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *tbStageAdd;
    QToolButton *tbStageRemove;
    QToolButton *tbStageMoveDown;
    QToolButton *tbStageMoveUp;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *stages_list;
    QGroupBox *stage_flags;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *cbCapMesure;
    QToolButton *cbCheckCondition;
    QVBoxLayout *verticalLayout_2;
    QFrame *stage_type_frame;
    QGridLayout *gridLayout;
    QToolButton *tbCharge;
    QToolButton *tbDischarge;
    QToolButton *tbImpulse;
    QToolButton *tbPause;
    QGridLayout *gridLayout_4;
    QGroupBox *gbCharge;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *edChargeCurrent;
    QLabel *label_10;
    QDoubleSpinBox *edChargeVoltage;
    QLabel *label_11;
    QGroupBox *gbDischarge;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *edDischargeVoltage;
    QLabel *label_13;
    QDoubleSpinBox *edDischargeCurrent;
    QGroupBox *gbPulse;
    QHBoxLayout *horizontalLayout;
    QSpinBox *sbChargeTime;
    QSpinBox *sbDischargeTime;
    QGroupBox *stage_finish;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *sbFinishCapacity;
    QDoubleSpinBox *sbFinishVoltage;
    QDoubleSpinBox *sbFinishDeltaVoltage;
    QDoubleSpinBox *sbFinishCellVoltage;
    QDoubleSpinBox *sbFinishCurrent;
    QDoubleSpinBox *sbFinishTemperature;
    QSpinBox *sbFinishHour;
    QSpinBox *sbFinishMinuts;
    QSpinBox *sbFinishSecunds;
    QToolButton *cbFinishTime;
    QToolButton *cbFinishVoltage;
    QToolButton *cbFinishTemperature;
    QToolButton *cbFinishCapacity;
    QToolButton *cbFinishCurrent;
    QToolButton *cbFinishDeltaVoltage;
    QToolButton *cbFinishCellVoltage;
    QtCharts::QChartView *chart_view;

    void setupUi(QWidget *ZrmStagesEditor)
    {
        if (ZrmStagesEditor->objectName().isEmpty())
            ZrmStagesEditor->setObjectName(QString::fromUtf8("ZrmStagesEditor"));
        ZrmStagesEditor->resize(653, 405);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmStagesEditor->sizePolicy().hasHeightForWidth());
        ZrmStagesEditor->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(ZrmStagesEditor);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        method_box = new QGroupBox(ZrmStagesEditor);
        method_box->setObjectName(QString::fromUtf8("method_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(method_box->sizePolicy().hasHeightForWidth());
        method_box->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(method_box);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        ed_method_name = new QLineEdit(method_box);
        ed_method_name->setObjectName(QString::fromUtf8("ed_method_name"));
        sizePolicy1.setHeightForWidth(ed_method_name->sizePolicy().hasHeightForWidth());
        ed_method_name->setSizePolicy(sizePolicy1);
        ed_method_name->setMaxLength(256);

        gridLayout_8->addWidget(ed_method_name, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_8 = new QLabel(method_box);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setTextFormat(Qt::PlainText);
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_8);

        edVoltage = new QDoubleSpinBox(method_box);
        edVoltage->setObjectName(QString::fromUtf8("edVoltage"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(edVoltage->sizePolicy().hasHeightForWidth());
        edVoltage->setSizePolicy(sizePolicy3);
        edVoltage->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(edVoltage);

        label_5 = new QLabel(method_box);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        edCapacity = new QDoubleSpinBox(method_box);
        edCapacity->setObjectName(QString::fromUtf8("edCapacity"));
        sizePolicy3.setHeightForWidth(edCapacity->sizePolicy().hasHeightForWidth());
        edCapacity->setSizePolicy(sizePolicy3);
        edCapacity->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(edCapacity);


        gridLayout_8->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_8);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_6 = new QLabel(method_box);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setTextFormat(Qt::PlainText);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        label_4 = new QLabel(method_box);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_4, 1, 0, 1, 1);

        edCapPercent = new QDoubleSpinBox(method_box);
        edCapPercent->setObjectName(QString::fromUtf8("edCapPercent"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(edCapPercent->sizePolicy().hasHeightForWidth());
        edCapPercent->setSizePolicy(sizePolicy5);
        edCapPercent->setAlignment(Qt::AlignCenter);
        edCapPercent->setDecimals(4);
        edCapPercent->setMaximum(9999.989999999999782);
        edCapPercent->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(edCapPercent, 1, 1, 1, 1);

        edMMaxCurrent = new QDoubleSpinBox(method_box);
        edMMaxCurrent->setObjectName(QString::fromUtf8("edMMaxCurrent"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(edMMaxCurrent->sizePolicy().hasHeightForWidth());
        edMMaxCurrent->setSizePolicy(sizePolicy6);
        edMMaxCurrent->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(edMMaxCurrent, 0, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_7);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_7 = new QLabel(method_box);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        sbMCycleCount = new QSpinBox(method_box);
        sbMCycleCount->setObjectName(QString::fromUtf8("sbMCycleCount"));
        sizePolicy6.setHeightForWidth(sbMCycleCount->sizePolicy().hasHeightForWidth());
        sbMCycleCount->setSizePolicy(sizePolicy6);
        sbMCycleCount->setAlignment(Qt::AlignCenter);
        sbMCycleCount->setMinimum(0);
        sbMCycleCount->setMaximum(99);

        gridLayout_6->addWidget(sbMCycleCount, 0, 1, 1, 1);

        label_3 = new QLabel(method_box);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 1, 0, 1, 1);

        edMethodTime = new QLineEdit(method_box);
        edMethodTime->setObjectName(QString::fromUtf8("edMethodTime"));
        sizePolicy6.setHeightForWidth(edMethodTime->sizePolicy().hasHeightForWidth());
        edMethodTime->setSizePolicy(sizePolicy6);
        edMethodTime->setInputMask(QString::fromUtf8("009:09:09"));
        edMethodTime->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(edMethodTime, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_6);


        verticalLayout_3->addWidget(method_box);

        stages_box = new QGroupBox(ZrmStagesEditor);
        stages_box->setObjectName(QString::fromUtf8("stages_box"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(stages_box->sizePolicy().hasHeightForWidth());
        stages_box->setSizePolicy(sizePolicy7);
        horizontalLayout_5 = new QHBoxLayout(stages_box);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_5->setContentsMargins(4, 4, 4, 4);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        tbStageAdd = new QToolButton(stages_box);
        tbStageAdd->setObjectName(QString::fromUtf8("tbStageAdd"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(tbStageAdd->sizePolicy().hasHeightForWidth());
        tbStageAdd->setSizePolicy(sizePolicy8);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbStageAdd->setIcon(icon);
        tbStageAdd->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(tbStageAdd);

        tbStageRemove = new QToolButton(stages_box);
        tbStageRemove->setObjectName(QString::fromUtf8("tbStageRemove"));
        sizePolicy8.setHeightForWidth(tbStageRemove->sizePolicy().hasHeightForWidth());
        tbStageRemove->setSizePolicy(sizePolicy8);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/data/icons/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbStageRemove->setIcon(icon1);
        tbStageRemove->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(tbStageRemove);

        tbStageMoveDown = new QToolButton(stages_box);
        tbStageMoveDown->setObjectName(QString::fromUtf8("tbStageMoveDown"));
        sizePolicy8.setHeightForWidth(tbStageMoveDown->sizePolicy().hasHeightForWidth());
        tbStageMoveDown->setSizePolicy(sizePolicy8);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/data/icons/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbStageMoveDown->setIcon(icon2);
        tbStageMoveDown->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(tbStageMoveDown);

        tbStageMoveUp = new QToolButton(stages_box);
        tbStageMoveUp->setObjectName(QString::fromUtf8("tbStageMoveUp"));
        sizePolicy8.setHeightForWidth(tbStageMoveUp->sizePolicy().hasHeightForWidth());
        tbStageMoveUp->setSizePolicy(sizePolicy8);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/data/icons/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbStageMoveUp->setIcon(icon3);
        tbStageMoveUp->setIconSize(QSize(48, 48));

        horizontalLayout_3->addWidget(tbStageMoveUp);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        stages_list = new QTreeWidget(stages_box);
        stages_list->setObjectName(QString::fromUtf8("stages_list"));
        sizePolicy7.setHeightForWidth(stages_list->sizePolicy().hasHeightForWidth());
        stages_list->setSizePolicy(sizePolicy7);
        stages_list->setMinimumSize(QSize(0, 0));
        stages_list->setMaximumSize(QSize(16777215, 16777215));
        stages_list->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        stages_list->setEditTriggers(QAbstractItemView::AllEditTriggers);
        stages_list->setTabKeyNavigation(false);
        stages_list->setProperty("showDropIndicator", QVariant(false));
        stages_list->setDragDropOverwriteMode(false);
        stages_list->setSelectionMode(QAbstractItemView::SingleSelection);

        verticalLayout->addWidget(stages_list);

        stage_flags = new QGroupBox(stages_box);
        stage_flags->setObjectName(QString::fromUtf8("stage_flags"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(stage_flags->sizePolicy().hasHeightForWidth());
        stage_flags->setSizePolicy(sizePolicy9);
        horizontalLayout_2 = new QHBoxLayout(stage_flags);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        cbCapMesure = new QToolButton(stage_flags);
        cbCapMesure->setObjectName(QString::fromUtf8("cbCapMesure"));
        sizePolicy6.setHeightForWidth(cbCapMesure->sizePolicy().hasHeightForWidth());
        cbCapMesure->setSizePolicy(sizePolicy6);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/checkbox_unchecked_disabled.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/icons/checkbox_checked.png"), QSize(), QIcon::Normal, QIcon::On);
        icon4.addFile(QString::fromUtf8(":/icons/icons/checkbox_unchecked_focus.png"), QSize(), QIcon::Active, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/icons/checkbox_checked_focus.png"), QSize(), QIcon::Active, QIcon::On);
        cbCapMesure->setIcon(icon4);
        cbCapMesure->setIconSize(QSize(24, 24));
        cbCapMesure->setCheckable(true);
        cbCapMesure->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(cbCapMesure);

        cbCheckCondition = new QToolButton(stage_flags);
        cbCheckCondition->setObjectName(QString::fromUtf8("cbCheckCondition"));
        sizePolicy6.setHeightForWidth(cbCheckCondition->sizePolicy().hasHeightForWidth());
        cbCheckCondition->setSizePolicy(sizePolicy6);
        cbCheckCondition->setIcon(icon4);
        cbCheckCondition->setIconSize(QSize(24, 24));
        cbCheckCondition->setCheckable(true);
        cbCheckCondition->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(cbCheckCondition);


        verticalLayout->addWidget(stage_flags);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stage_type_frame = new QFrame(stages_box);
        stage_type_frame->setObjectName(QString::fromUtf8("stage_type_frame"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(stage_type_frame->sizePolicy().hasHeightForWidth());
        stage_type_frame->setSizePolicy(sizePolicy10);
        stage_type_frame->setFrameShape(QFrame::StyledPanel);
        stage_type_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(stage_type_frame);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        tbCharge = new QToolButton(stage_type_frame);
        tbCharge->setObjectName(QString::fromUtf8("tbCharge"));
        sizePolicy8.setHeightForWidth(tbCharge->sizePolicy().hasHeightForWidth());
        tbCharge->setSizePolicy(sizePolicy8);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/data/icons/charge.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbCharge->setIcon(icon5);
        tbCharge->setIconSize(QSize(24, 24));
        tbCharge->setCheckable(true);
        tbCharge->setAutoExclusive(true);
        tbCharge->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbCharge, 0, 0, 1, 1);

        tbDischarge = new QToolButton(stage_type_frame);
        tbDischarge->setObjectName(QString::fromUtf8("tbDischarge"));
        sizePolicy8.setHeightForWidth(tbDischarge->sizePolicy().hasHeightForWidth());
        tbDischarge->setSizePolicy(sizePolicy8);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/data/icons/discharge.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDischarge->setIcon(icon6);
        tbDischarge->setIconSize(QSize(24, 24));
        tbDischarge->setCheckable(true);
        tbDischarge->setChecked(true);
        tbDischarge->setAutoExclusive(true);
        tbDischarge->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbDischarge, 0, 1, 1, 1);

        tbImpulse = new QToolButton(stage_type_frame);
        tbImpulse->setObjectName(QString::fromUtf8("tbImpulse"));
        sizePolicy8.setHeightForWidth(tbImpulse->sizePolicy().hasHeightForWidth());
        tbImpulse->setSizePolicy(sizePolicy8);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/data/icons/impulse.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbImpulse->setIcon(icon7);
        tbImpulse->setIconSize(QSize(24, 24));
        tbImpulse->setCheckable(true);
        tbImpulse->setChecked(false);
        tbImpulse->setAutoRepeat(false);
        tbImpulse->setAutoExclusive(true);
        tbImpulse->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbImpulse, 0, 2, 1, 1);

        tbPause = new QToolButton(stage_type_frame);
        tbPause->setObjectName(QString::fromUtf8("tbPause"));
        sizePolicy8.setHeightForWidth(tbPause->sizePolicy().hasHeightForWidth());
        tbPause->setSizePolicy(sizePolicy8);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/data/icons/pause-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbPause->setIcon(icon8);
        tbPause->setIconSize(QSize(24, 24));
        tbPause->setCheckable(true);
        tbPause->setAutoExclusive(true);
        tbPause->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tbPause, 0, 3, 1, 1);


        verticalLayout_2->addWidget(stage_type_frame);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gbCharge = new QGroupBox(stages_box);
        gbCharge->setObjectName(QString::fromUtf8("gbCharge"));
        sizePolicy3.setHeightForWidth(gbCharge->sizePolicy().hasHeightForWidth());
        gbCharge->setSizePolicy(sizePolicy3);
        gridLayout_3 = new QGridLayout(gbCharge);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        edChargeCurrent = new QDoubleSpinBox(gbCharge);
        edChargeCurrent->setObjectName(QString::fromUtf8("edChargeCurrent"));
        sizePolicy10.setHeightForWidth(edChargeCurrent->sizePolicy().hasHeightForWidth());
        edChargeCurrent->setSizePolicy(sizePolicy10);
        edChargeCurrent->setDecimals(2);
        edChargeCurrent->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(edChargeCurrent, 0, 4, 1, 1);

        label_10 = new QLabel(gbCharge);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(label_10, 0, 3, 1, 1);

        edChargeVoltage = new QDoubleSpinBox(gbCharge);
        edChargeVoltage->setObjectName(QString::fromUtf8("edChargeVoltage"));
        sizePolicy10.setHeightForWidth(edChargeVoltage->sizePolicy().hasHeightForWidth());
        edChargeVoltage->setSizePolicy(sizePolicy10);
        edChargeVoltage->setDecimals(2);
        edChargeVoltage->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(edChargeVoltage, 0, 2, 1, 1);

        label_11 = new QLabel(gbCharge);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);

        gridLayout_3->addWidget(label_11, 0, 1, 1, 1);


        gridLayout_4->addWidget(gbCharge, 0, 0, 1, 1);

        gbDischarge = new QGroupBox(stages_box);
        gbDischarge->setObjectName(QString::fromUtf8("gbDischarge"));
        sizePolicy3.setHeightForWidth(gbDischarge->sizePolicy().hasHeightForWidth());
        gbDischarge->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(gbDischarge);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        label_12 = new QLabel(gbDischarge);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy5.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(label_12, 0, 3, 1, 1);

        edDischargeVoltage = new QDoubleSpinBox(gbDischarge);
        edDischargeVoltage->setObjectName(QString::fromUtf8("edDischargeVoltage"));
        sizePolicy10.setHeightForWidth(edDischargeVoltage->sizePolicy().hasHeightForWidth());
        edDischargeVoltage->setSizePolicy(sizePolicy10);
        edDischargeVoltage->setDecimals(2);
        edDischargeVoltage->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(edDischargeVoltage, 0, 2, 1, 1);

        label_13 = new QLabel(gbDischarge);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(label_13, 0, 1, 1, 1);

        edDischargeCurrent = new QDoubleSpinBox(gbDischarge);
        edDischargeCurrent->setObjectName(QString::fromUtf8("edDischargeCurrent"));
        sizePolicy10.setHeightForWidth(edDischargeCurrent->sizePolicy().hasHeightForWidth());
        edDischargeCurrent->setSizePolicy(sizePolicy10);
        edDischargeCurrent->setDecimals(2);
        edDischargeCurrent->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(edDischargeCurrent, 0, 4, 1, 1);


        gridLayout_4->addWidget(gbDischarge, 0, 1, 1, 1);

        gbPulse = new QGroupBox(stages_box);
        gbPulse->setObjectName(QString::fromUtf8("gbPulse"));
        sizePolicy9.setHeightForWidth(gbPulse->sizePolicy().hasHeightForWidth());
        gbPulse->setSizePolicy(sizePolicy9);
        horizontalLayout = new QHBoxLayout(gbPulse);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        sbChargeTime = new QSpinBox(gbPulse);
        sbChargeTime->setObjectName(QString::fromUtf8("sbChargeTime"));
        sizePolicy3.setHeightForWidth(sbChargeTime->sizePolicy().hasHeightForWidth());
        sbChargeTime->setSizePolicy(sizePolicy3);
        sbChargeTime->setMaximum(250);

        horizontalLayout->addWidget(sbChargeTime);

        sbDischargeTime = new QSpinBox(gbPulse);
        sbDischargeTime->setObjectName(QString::fromUtf8("sbDischargeTime"));
        sizePolicy3.setHeightForWidth(sbDischargeTime->sizePolicy().hasHeightForWidth());
        sbDischargeTime->setSizePolicy(sizePolicy3);
        sbDischargeTime->setMaximum(250);

        horizontalLayout->addWidget(sbDischargeTime);


        gridLayout_4->addWidget(gbPulse, 1, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_4);

        stage_finish = new QGroupBox(stages_box);
        stage_finish->setObjectName(QString::fromUtf8("stage_finish"));
        sizePolicy9.setHeightForWidth(stage_finish->sizePolicy().hasHeightForWidth());
        stage_finish->setSizePolicy(sizePolicy9);
        gridLayout_5 = new QGridLayout(stage_finish);
        gridLayout_5->setSpacing(4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(4, 4, 4, 4);
        sbFinishCapacity = new QDoubleSpinBox(stage_finish);
        sbFinishCapacity->setObjectName(QString::fromUtf8("sbFinishCapacity"));
        sbFinishCapacity->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishCapacity->sizePolicy().hasHeightForWidth());
        sbFinishCapacity->setSizePolicy(sizePolicy9);
        sbFinishCapacity->setDecimals(2);
        sbFinishCapacity->setMaximum(999.000000000000000);
        sbFinishCapacity->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishCapacity, 3, 1, 1, 1);

        sbFinishVoltage = new QDoubleSpinBox(stage_finish);
        sbFinishVoltage->setObjectName(QString::fromUtf8("sbFinishVoltage"));
        sbFinishVoltage->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishVoltage->sizePolicy().hasHeightForWidth());
        sbFinishVoltage->setSizePolicy(sizePolicy9);
        sbFinishVoltage->setDecimals(2);
        sbFinishVoltage->setMaximum(999.000000000000000);
        sbFinishVoltage->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishVoltage, 1, 1, 1, 1);

        sbFinishDeltaVoltage = new QDoubleSpinBox(stage_finish);
        sbFinishDeltaVoltage->setObjectName(QString::fromUtf8("sbFinishDeltaVoltage"));
        sbFinishDeltaVoltage->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishDeltaVoltage->sizePolicy().hasHeightForWidth());
        sbFinishDeltaVoltage->setSizePolicy(sizePolicy9);
        sbFinishDeltaVoltage->setDecimals(2);
        sbFinishDeltaVoltage->setMaximum(999.000000000000000);
        sbFinishDeltaVoltage->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishDeltaVoltage, 2, 3, 1, 1);

        sbFinishCellVoltage = new QDoubleSpinBox(stage_finish);
        sbFinishCellVoltage->setObjectName(QString::fromUtf8("sbFinishCellVoltage"));
        sbFinishCellVoltage->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishCellVoltage->sizePolicy().hasHeightForWidth());
        sbFinishCellVoltage->setSizePolicy(sizePolicy9);
        sbFinishCellVoltage->setDecimals(2);
        sbFinishCellVoltage->setMaximum(999.000000000000000);
        sbFinishCellVoltage->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishCellVoltage, 3, 3, 1, 1);

        sbFinishCurrent = new QDoubleSpinBox(stage_finish);
        sbFinishCurrent->setObjectName(QString::fromUtf8("sbFinishCurrent"));
        sbFinishCurrent->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishCurrent->sizePolicy().hasHeightForWidth());
        sbFinishCurrent->setSizePolicy(sizePolicy9);
        sbFinishCurrent->setDecimals(2);
        sbFinishCurrent->setMaximum(999.000000000000000);
        sbFinishCurrent->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishCurrent, 1, 3, 1, 1);

        sbFinishTemperature = new QDoubleSpinBox(stage_finish);
        sbFinishTemperature->setObjectName(QString::fromUtf8("sbFinishTemperature"));
        sbFinishTemperature->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishTemperature->sizePolicy().hasHeightForWidth());
        sbFinishTemperature->setSizePolicy(sizePolicy9);
        sbFinishTemperature->setDecimals(2);
        sbFinishTemperature->setMaximum(999.000000000000000);
        sbFinishTemperature->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(sbFinishTemperature, 2, 1, 1, 1);

        sbFinishHour = new QSpinBox(stage_finish);
        sbFinishHour->setObjectName(QString::fromUtf8("sbFinishHour"));
        sbFinishHour->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishHour->sizePolicy().hasHeightForWidth());
        sbFinishHour->setSizePolicy(sizePolicy9);
        sbFinishHour->setDisplayIntegerBase(10);

        gridLayout_5->addWidget(sbFinishHour, 0, 1, 1, 1);

        sbFinishMinuts = new QSpinBox(stage_finish);
        sbFinishMinuts->setObjectName(QString::fromUtf8("sbFinishMinuts"));
        sbFinishMinuts->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishMinuts->sizePolicy().hasHeightForWidth());
        sbFinishMinuts->setSizePolicy(sizePolicy9);
        sbFinishMinuts->setMaximum(60);

        gridLayout_5->addWidget(sbFinishMinuts, 0, 2, 1, 1);

        sbFinishSecunds = new QSpinBox(stage_finish);
        sbFinishSecunds->setObjectName(QString::fromUtf8("sbFinishSecunds"));
        sbFinishSecunds->setEnabled(false);
        sizePolicy9.setHeightForWidth(sbFinishSecunds->sizePolicy().hasHeightForWidth());
        sbFinishSecunds->setSizePolicy(sizePolicy9);
        sbFinishSecunds->setMaximum(60);

        gridLayout_5->addWidget(sbFinishSecunds, 0, 3, 1, 1);

        cbFinishTime = new QToolButton(stage_finish);
        cbFinishTime->setObjectName(QString::fromUtf8("cbFinishTime"));
        sizePolicy6.setHeightForWidth(cbFinishTime->sizePolicy().hasHeightForWidth());
        cbFinishTime->setSizePolicy(sizePolicy6);
        cbFinishTime->setIcon(icon4);
        cbFinishTime->setIconSize(QSize(24, 24));
        cbFinishTime->setCheckable(true);
        cbFinishTime->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishTime, 0, 0, 1, 1);

        cbFinishVoltage = new QToolButton(stage_finish);
        cbFinishVoltage->setObjectName(QString::fromUtf8("cbFinishVoltage"));
        sizePolicy6.setHeightForWidth(cbFinishVoltage->sizePolicy().hasHeightForWidth());
        cbFinishVoltage->setSizePolicy(sizePolicy6);
        cbFinishVoltage->setIcon(icon4);
        cbFinishVoltage->setIconSize(QSize(24, 24));
        cbFinishVoltage->setCheckable(true);
        cbFinishVoltage->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishVoltage, 1, 0, 1, 1);

        cbFinishTemperature = new QToolButton(stage_finish);
        cbFinishTemperature->setObjectName(QString::fromUtf8("cbFinishTemperature"));
        sizePolicy6.setHeightForWidth(cbFinishTemperature->sizePolicy().hasHeightForWidth());
        cbFinishTemperature->setSizePolicy(sizePolicy6);
        cbFinishTemperature->setIcon(icon4);
        cbFinishTemperature->setIconSize(QSize(24, 24));
        cbFinishTemperature->setCheckable(true);
        cbFinishTemperature->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishTemperature, 2, 0, 1, 1);

        cbFinishCapacity = new QToolButton(stage_finish);
        cbFinishCapacity->setObjectName(QString::fromUtf8("cbFinishCapacity"));
        sizePolicy6.setHeightForWidth(cbFinishCapacity->sizePolicy().hasHeightForWidth());
        cbFinishCapacity->setSizePolicy(sizePolicy6);
        cbFinishCapacity->setIcon(icon4);
        cbFinishCapacity->setIconSize(QSize(24, 24));
        cbFinishCapacity->setCheckable(true);
        cbFinishCapacity->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishCapacity, 3, 0, 1, 1);

        cbFinishCurrent = new QToolButton(stage_finish);
        cbFinishCurrent->setObjectName(QString::fromUtf8("cbFinishCurrent"));
        sizePolicy6.setHeightForWidth(cbFinishCurrent->sizePolicy().hasHeightForWidth());
        cbFinishCurrent->setSizePolicy(sizePolicy6);
        cbFinishCurrent->setIcon(icon4);
        cbFinishCurrent->setIconSize(QSize(24, 24));
        cbFinishCurrent->setCheckable(true);
        cbFinishCurrent->setChecked(false);
        cbFinishCurrent->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishCurrent, 1, 2, 1, 1);

        cbFinishDeltaVoltage = new QToolButton(stage_finish);
        cbFinishDeltaVoltage->setObjectName(QString::fromUtf8("cbFinishDeltaVoltage"));
        sizePolicy6.setHeightForWidth(cbFinishDeltaVoltage->sizePolicy().hasHeightForWidth());
        cbFinishDeltaVoltage->setSizePolicy(sizePolicy6);
        cbFinishDeltaVoltage->setIcon(icon4);
        cbFinishDeltaVoltage->setIconSize(QSize(24, 24));
        cbFinishDeltaVoltage->setCheckable(true);
        cbFinishDeltaVoltage->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishDeltaVoltage, 2, 2, 1, 1);

        cbFinishCellVoltage = new QToolButton(stage_finish);
        cbFinishCellVoltage->setObjectName(QString::fromUtf8("cbFinishCellVoltage"));
        sizePolicy6.setHeightForWidth(cbFinishCellVoltage->sizePolicy().hasHeightForWidth());
        cbFinishCellVoltage->setSizePolicy(sizePolicy6);
        cbFinishCellVoltage->setIcon(icon4);
        cbFinishCellVoltage->setIconSize(QSize(24, 24));
        cbFinishCellVoltage->setCheckable(true);
        cbFinishCellVoltage->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_5->addWidget(cbFinishCellVoltage, 3, 2, 1, 1);


        verticalLayout_2->addWidget(stage_finish);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_3->addWidget(stages_box);

        chart_view = new QtCharts::QChartView(ZrmStagesEditor);
        chart_view->setObjectName(QString::fromUtf8("chart_view"));
        sizePolicy7.setHeightForWidth(chart_view->sizePolicy().hasHeightForWidth());
        chart_view->setSizePolicy(sizePolicy7);

        verticalLayout_3->addWidget(chart_view);

        QWidget::setTabOrder(ed_method_name, edMMaxCurrent);
        QWidget::setTabOrder(edMMaxCurrent, edCapPercent);
        QWidget::setTabOrder(edCapPercent, sbMCycleCount);
        QWidget::setTabOrder(sbMCycleCount, edMethodTime);
        QWidget::setTabOrder(edMethodTime, tbStageMoveUp);
        QWidget::setTabOrder(tbStageMoveUp, stages_list);
        QWidget::setTabOrder(stages_list, tbCharge);
        QWidget::setTabOrder(tbCharge, tbDischarge);
        QWidget::setTabOrder(tbDischarge, tbImpulse);
        QWidget::setTabOrder(tbImpulse, tbPause);
        QWidget::setTabOrder(tbPause, edChargeVoltage);
        QWidget::setTabOrder(edChargeVoltage, edChargeCurrent);
        QWidget::setTabOrder(edChargeCurrent, edDischargeVoltage);
        QWidget::setTabOrder(edDischargeVoltage, edDischargeCurrent);
        QWidget::setTabOrder(edDischargeCurrent, sbChargeTime);
        QWidget::setTabOrder(sbChargeTime, sbDischargeTime);
        QWidget::setTabOrder(sbDischargeTime, cbFinishTime);
        QWidget::setTabOrder(cbFinishTime, sbFinishHour);
        QWidget::setTabOrder(sbFinishHour, sbFinishMinuts);
        QWidget::setTabOrder(sbFinishMinuts, sbFinishSecunds);
        QWidget::setTabOrder(sbFinishSecunds, cbFinishVoltage);
        QWidget::setTabOrder(cbFinishVoltage, sbFinishVoltage);
        QWidget::setTabOrder(sbFinishVoltage, cbFinishCurrent);
        QWidget::setTabOrder(cbFinishCurrent, sbFinishCurrent);
        QWidget::setTabOrder(sbFinishCurrent, cbFinishTemperature);
        QWidget::setTabOrder(cbFinishTemperature, sbFinishTemperature);
        QWidget::setTabOrder(sbFinishTemperature, cbFinishDeltaVoltage);
        QWidget::setTabOrder(cbFinishDeltaVoltage, sbFinishDeltaVoltage);
        QWidget::setTabOrder(sbFinishDeltaVoltage, cbFinishCapacity);
        QWidget::setTabOrder(cbFinishCapacity, sbFinishCapacity);
        QWidget::setTabOrder(sbFinishCapacity, cbFinishCellVoltage);
        QWidget::setTabOrder(cbFinishCellVoltage, sbFinishCellVoltage);
        QWidget::setTabOrder(sbFinishCellVoltage, cbCapMesure);
        QWidget::setTabOrder(cbCapMesure, cbCheckCondition);

        retranslateUi(ZrmStagesEditor);
        QObject::connect(tbCharge, SIGNAL(toggled(bool)), gbCharge, SLOT(setEnabled(bool)));
        QObject::connect(tbDischarge, SIGNAL(toggled(bool)), gbDischarge, SLOT(setEnabled(bool)));
        QObject::connect(tbImpulse, SIGNAL(toggled(bool)), gbPulse, SLOT(setEnabled(bool)));
        QObject::connect(tbImpulse, SIGNAL(toggled(bool)), gbCharge, SLOT(setEnabled(bool)));
        QObject::connect(tbImpulse, SIGNAL(toggled(bool)), gbDischarge, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishTime, SIGNAL(toggled(bool)), sbFinishHour, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishTime, SIGNAL(toggled(bool)), sbFinishMinuts, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishTime, SIGNAL(toggled(bool)), sbFinishSecunds, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishVoltage, SIGNAL(toggled(bool)), sbFinishVoltage, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishCurrent, SIGNAL(toggled(bool)), sbFinishCurrent, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishTemperature, SIGNAL(toggled(bool)), sbFinishTemperature, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishDeltaVoltage, SIGNAL(toggled(bool)), sbFinishDeltaVoltage, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishCapacity, SIGNAL(toggled(bool)), sbFinishCapacity, SLOT(setEnabled(bool)));
        QObject::connect(cbFinishCellVoltage, SIGNAL(toggled(bool)), sbFinishCellVoltage, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ZrmStagesEditor);
    } // setupUi

    void retranslateUi(QWidget *ZrmStagesEditor)
    {
        ZrmStagesEditor->setWindowTitle(QCoreApplication::translate("ZrmStagesEditor", "Form", nullptr));
        method_box->setTitle(QString());
        ed_method_name->setText(QCoreApplication::translate("ZrmStagesEditor", "123", nullptr));
        label_8->setText(QCoreApplication::translate("ZrmStagesEditor", "U", nullptr));
        edVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        label_5->setText(QCoreApplication::translate("ZrmStagesEditor", "I", nullptr));
        edCapacity->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        label_6->setText(QCoreApplication::translate("ZrmStagesEditor", "I(max)", nullptr));
        label_4->setText(QCoreApplication::translate("ZrmStagesEditor", "% \320\276\321\202 \321\221\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        edCapPercent->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        edCapPercent->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " %", nullptr));
        edMMaxCurrent->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        label_7->setText(QCoreApplication::translate("ZrmStagesEditor", " \321\206\320\270\320\272\320\273\320\276\320\262", nullptr));
        sbMCycleCount->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "\342\210\236", nullptr));
        label_3->setText(QCoreApplication::translate("ZrmStagesEditor", "Lim(time)", nullptr));
        stages_box->setTitle(QString());
#if QT_CONFIG(tooltip)
        tbStageAdd->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbStageAdd->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbStageAdd->setText(QString());
#if QT_CONFIG(tooltip)
        tbStageRemove->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
        tbStageRemove->setText(QString());
#if QT_CONFIG(tooltip)
        tbStageMoveDown->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262\320\275\320\270\320\267", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbStageMoveDown->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbStageMoveDown->setText(QString());
#if QT_CONFIG(tooltip)
        tbStageMoveUp->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262\320\262\320\265\321\200\321\205", nullptr));
#endif // QT_CONFIG(tooltip)
        tbStageMoveUp->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = stages_list->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ZrmStagesEditor", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\321\200\320\270\320\271", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ZrmStagesEditor", "\320\242\320\270\320\277", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmStagesEditor", "\342\204\226", nullptr));
        stage_flags->setTitle(QString());
        cbCapMesure->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\227\320\260\320\274\320\265\321\200 \321\221\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        cbCheckCondition->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        tbCharge->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbCharge->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbCharge->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\227\320\260\321\200\321\217\320\264", nullptr));
#if QT_CONFIG(tooltip)
        tbDischarge->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbDischarge->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbDischarge->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\240\320\260\320\267\321\200\321\217\320\264", nullptr));
#if QT_CONFIG(tooltip)
        tbImpulse->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbImpulse->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbImpulse->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\230\320\274\320\277\321\203\320\273\321\214\321\201", nullptr));
#if QT_CONFIG(tooltip)
        tbPause->setToolTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbPause->setStatusTip(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\321\202\320\260\320\277", nullptr));
#endif // QT_CONFIG(statustip)
        tbPause->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        gbCharge->setTitle(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\267\320\260\321\200\321\217\320\264\320\260", nullptr));
        edChargeCurrent->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        edChargeCurrent->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\220", nullptr));
        label_10->setText(QCoreApplication::translate("ZrmStagesEditor", "I", nullptr));
        edChargeVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        edChargeVoltage->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        label_11->setText(QCoreApplication::translate("ZrmStagesEditor", "U", nullptr));
        gbDischarge->setTitle(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\200\320\260\320\267\321\200\321\217\320\264\320\260", nullptr));
        label_12->setText(QCoreApplication::translate("ZrmStagesEditor", "I", nullptr));
        edDischargeVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        edDischargeVoltage->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        label_13->setText(QCoreApplication::translate("ZrmStagesEditor", "U", nullptr));
        edDischargeCurrent->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        edDischargeCurrent->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\220", nullptr));
        gbPulse->setTitle(QCoreApplication::translate("ZrmStagesEditor", "\320\224\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        sbChargeTime->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \321\201\320\265\320\272.", nullptr));
        sbChargeTime->setPrefix(QCoreApplication::translate("ZrmStagesEditor", "\320\227\320\260\321\200\321\217\320\264 - ", nullptr));
        sbDischargeTime->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \321\201\320\265\320\272.", nullptr));
        sbDischargeTime->setPrefix(QCoreApplication::translate("ZrmStagesEditor", "\320\240\320\260\320\267\321\200\321\217\320\264   ", nullptr));
        stage_finish->setTitle(QCoreApplication::translate("ZrmStagesEditor", "\320\243\321\201\320\273\320\276\320\262\320\270\321\217 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\217", nullptr));
        sbFinishCapacity->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishCapacity->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        sbFinishVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishVoltage->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        sbFinishDeltaVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishDeltaVoltage->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        sbFinishCellVoltage->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishCellVoltage->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\222", nullptr));
        sbFinishCurrent->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishCurrent->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " A", nullptr));
        sbFinishTemperature->setSpecialValueText(QCoreApplication::translate("ZrmStagesEditor", "--", nullptr));
        sbFinishTemperature->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " C", nullptr));
        sbFinishHour->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \321\207\320\260\321\201.", nullptr));
        sbFinishMinuts->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \320\274\320\270\320\275.", nullptr));
        sbFinishSecunds->setSuffix(QCoreApplication::translate("ZrmStagesEditor", " \321\201\320\265\320\272.", nullptr));
        cbFinishTime->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        cbFinishVoltage->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 U", nullptr));
        cbFinishTemperature->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 t", nullptr));
        cbFinishCapacity->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 \320\225\320\274\320\272\320\276\321\201\321\202\320\270", nullptr));
        cbFinishCurrent->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 I", nullptr));
        cbFinishDeltaVoltage->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 \316\224U", nullptr));
        cbFinishCellVoltage->setText(QCoreApplication::translate("ZrmStagesEditor", "\320\237\320\276 U \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmStagesEditor: public Ui_ZrmStagesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMSTAGESEDITOR_H
