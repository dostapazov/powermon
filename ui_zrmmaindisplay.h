/********************************************************************************
** Form generated from reading UI file 'zrmmaindisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMAINDISPLAY_H
#define UI_ZRMMAINDISPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmMainDisplay
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *edMode;
    QLabel *label;
    QLineEdit *edMethodName;
    QPushButton *bMethod;
    QLabel *label_7;
    QLineEdit *error_state;
    QPushButton *bStartStop;
    QPushButton *bPause;
    QPushButton *bResetError;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lb_work_time;
    QLabel *label_14;
    QLineEdit *edTimeLimit;
    QLabel *label_8;
    QSpinBox *lbStageNum;
    QLabel *label_16;
    QSpinBox *lbStageTotal;
    QLabel *label_9;
    QSpinBox *lbCycleNum;
    QLabel *label_17;
    QSpinBox *sbCycleTotal;
    QPushButton *bCycleDec;
    QPushButton *bCycleInc;
    QLabel *label_3;
    QDoubleSpinBox *lbVolt;
    QLabel *label_10;
    QDoubleSpinBox *sbVoltLimit;
    QPushButton *bVoltDec;
    QPushButton *bVoltInc;
    QLabel *label_4;
    QDoubleSpinBox *lbCurr;
    QLabel *label_11;
    QDoubleSpinBox *sbCurrLimit;
    QPushButton *bCurrDec;
    QPushButton *bCurrInc;
    QLabel *lb_cap_name;
    QDoubleSpinBox *edCapacity;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ZrmMainDisplay)
    {
        if (ZrmMainDisplay->objectName().isEmpty())
            ZrmMainDisplay->setObjectName(QString::fromUtf8("ZrmMainDisplay"));
        ZrmMainDisplay->resize(487, 375);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmMainDisplay->sizePolicy().hasHeightForWidth());
        ZrmMainDisplay->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ZrmMainDisplay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ZrmMainDisplay);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        edMode = new QLineEdit(frame);
        edMode->setObjectName(QString::fromUtf8("edMode"));
        edMode->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edMode->sizePolicy().hasHeightForWidth());
        edMode->setSizePolicy(sizePolicy2);
        edMode->setMaxLength(128);
        edMode->setAlignment(Qt::AlignCenter);
        edMode->setReadOnly(true);

        gridLayout_2->addWidget(edMode, 1, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        edMethodName = new QLineEdit(frame);
        edMethodName->setObjectName(QString::fromUtf8("edMethodName"));
        edMethodName->setEnabled(true);
        sizePolicy2.setHeightForWidth(edMethodName->sizePolicy().hasHeightForWidth());
        edMethodName->setSizePolicy(sizePolicy2);
        edMethodName->setMaxLength(128);
        edMethodName->setAlignment(Qt::AlignCenter);
        edMethodName->setReadOnly(true);

        gridLayout_2->addWidget(edMethodName, 0, 2, 1, 1);

        bMethod = new QPushButton(frame);
        bMethod->setObjectName(QString::fromUtf8("bMethod"));
        bMethod->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bMethod->sizePolicy().hasHeightForWidth());
        bMethod->setSizePolicy(sizePolicy3);
        bMethod->setMinimumSize(QSize(0, 0));
        bMethod->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/method.png"), QSize(), QIcon::Normal, QIcon::Off);
        bMethod->setIcon(icon);
        bMethod->setIconSize(QSize(32, 32));
        bMethod->setFlat(false);

        gridLayout_2->addWidget(bMethod, 0, 1, 1, 1);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 1, 1, 1, 1);

        error_state = new QLineEdit(frame);
        error_state->setObjectName(QString::fromUtf8("error_state"));
        sizePolicy2.setHeightForWidth(error_state->sizePolicy().hasHeightForWidth());
        error_state->setSizePolicy(sizePolicy2);
        error_state->setMaxLength(128);
        error_state->setAlignment(Qt::AlignCenter);
        error_state->setReadOnly(true);

        gridLayout_2->addWidget(error_state, 2, 2, 1, 1);

        bStartStop = new QPushButton(frame);
        bStartStop->setObjectName(QString::fromUtf8("bStartStop"));
        bStartStop->setEnabled(false);
        sizePolicy3.setHeightForWidth(bStartStop->sizePolicy().hasHeightForWidth());
        bStartStop->setSizePolicy(sizePolicy3);
        bStartStop->setMinimumSize(QSize(0, 0));
        bStartStop->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        bStartStop->setIcon(icon1);
        bStartStop->setIconSize(QSize(32, 32));
        bStartStop->setCheckable(false);
        bStartStop->setFlat(false);

        gridLayout_2->addWidget(bStartStop, 0, 0, 1, 1);

        bPause = new QPushButton(frame);
        bPause->setObjectName(QString::fromUtf8("bPause"));
        bPause->setEnabled(false);
        sizePolicy3.setHeightForWidth(bPause->sizePolicy().hasHeightForWidth());
        bPause->setSizePolicy(sizePolicy3);
        bPause->setMinimumSize(QSize(0, 0));
        bPause->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/control_pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPause->setIcon(icon2);
        bPause->setIconSize(QSize(32, 32));
        bPause->setCheckable(false);
        bPause->setFlat(false);

        gridLayout_2->addWidget(bPause, 1, 0, 1, 1);

        bResetError = new QPushButton(frame);
        bResetError->setObjectName(QString::fromUtf8("bResetError"));
        sizePolicy3.setHeightForWidth(bResetError->sizePolicy().hasHeightForWidth());
        bResetError->setSizePolicy(sizePolicy3);
        bResetError->setMinimumSize(QSize(0, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zrm/icons/mon-clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        bResetError->setIcon(icon3);
        bResetError->setIconSize(QSize(32, 32));

        gridLayout_2->addWidget(bResetError, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addWidget(frame);

        groupBox_2 = new QGroupBox(ZrmMainDisplay);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy5);
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy6);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lb_work_time = new QLineEdit(groupBox_2);
        lb_work_time->setObjectName(QString::fromUtf8("lb_work_time"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lb_work_time->sizePolicy().hasHeightForWidth());
        lb_work_time->setSizePolicy(sizePolicy7);
        lb_work_time->setMaxLength(10);
        lb_work_time->setAlignment(Qt::AlignCenter);
        lb_work_time->setReadOnly(true);

        gridLayout->addWidget(lb_work_time, 0, 1, 1, 3);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy7.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy7);
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 0, 4, 1, 1);

        edTimeLimit = new QLineEdit(groupBox_2);
        edTimeLimit->setObjectName(QString::fromUtf8("edTimeLimit"));
        edTimeLimit->setEnabled(false);
        sizePolicy7.setHeightForWidth(edTimeLimit->sizePolicy().hasHeightForWidth());
        edTimeLimit->setSizePolicy(sizePolicy7);
        edTimeLimit->setAlignment(Qt::AlignCenter);
        edTimeLimit->setReadOnly(true);

        gridLayout->addWidget(edTimeLimit, 0, 5, 1, 3);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        lbStageNum = new QSpinBox(groupBox_2);
        lbStageNum->setObjectName(QString::fromUtf8("lbStageNum"));
        sizePolicy7.setHeightForWidth(lbStageNum->sizePolicy().hasHeightForWidth());
        lbStageNum->setSizePolicy(sizePolicy7);
        lbStageNum->setAlignment(Qt::AlignCenter);
        lbStageNum->setReadOnly(true);
        lbStageNum->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lbStageNum, 1, 1, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy8);
        label_16->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_16, 1, 2, 1, 1);

        lbStageTotal = new QSpinBox(groupBox_2);
        lbStageTotal->setObjectName(QString::fromUtf8("lbStageTotal"));
        sizePolicy7.setHeightForWidth(lbStageTotal->sizePolicy().hasHeightForWidth());
        lbStageTotal->setSizePolicy(sizePolicy7);
        lbStageTotal->setAlignment(Qt::AlignCenter);
        lbStageTotal->setReadOnly(true);
        lbStageTotal->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lbStageTotal, 1, 3, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy7.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy7);
        label_9->setMinimumSize(QSize(0, 0));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 1, 4, 1, 1);

        lbCycleNum = new QSpinBox(groupBox_2);
        lbCycleNum->setObjectName(QString::fromUtf8("lbCycleNum"));
        sizePolicy7.setHeightForWidth(lbCycleNum->sizePolicy().hasHeightForWidth());
        lbCycleNum->setSizePolicy(sizePolicy7);
        lbCycleNum->setAlignment(Qt::AlignCenter);
        lbCycleNum->setReadOnly(true);
        lbCycleNum->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lbCycleNum, 1, 5, 1, 1);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy8.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy8);
        label_17->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_17, 1, 6, 1, 1);

        sbCycleTotal = new QSpinBox(groupBox_2);
        sbCycleTotal->setObjectName(QString::fromUtf8("sbCycleTotal"));
        sbCycleTotal->setEnabled(false);
        sizePolicy7.setHeightForWidth(sbCycleTotal->sizePolicy().hasHeightForWidth());
        sbCycleTotal->setSizePolicy(sizePolicy7);
        sbCycleTotal->setAlignment(Qt::AlignCenter);
        sbCycleTotal->setReadOnly(true);
        sbCycleTotal->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(sbCycleTotal, 1, 7, 1, 1);

        bCycleDec = new QPushButton(groupBox_2);
        bCycleDec->setObjectName(QString::fromUtf8("bCycleDec"));
        sizePolicy3.setHeightForWidth(bCycleDec->sizePolicy().hasHeightForWidth());
        bCycleDec->setSizePolicy(sizePolicy3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/zrm/icons/navigate-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCycleDec->setIcon(icon4);
        bCycleDec->setAutoRepeat(true);
        bCycleDec->setFlat(true);

        gridLayout->addWidget(bCycleDec, 1, 8, 1, 1);

        bCycleInc = new QPushButton(groupBox_2);
        bCycleInc->setObjectName(QString::fromUtf8("bCycleInc"));
        sizePolicy3.setHeightForWidth(bCycleInc->sizePolicy().hasHeightForWidth());
        bCycleInc->setSizePolicy(sizePolicy3);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/zrm/icons/navigate-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        bCycleInc->setIcon(icon5);
        bCycleInc->setAutoRepeat(true);
        bCycleInc->setFlat(true);

        gridLayout->addWidget(bCycleInc, 1, 9, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lbVolt = new QDoubleSpinBox(groupBox_2);
        lbVolt->setObjectName(QString::fromUtf8("lbVolt"));
        sizePolicy7.setHeightForWidth(lbVolt->sizePolicy().hasHeightForWidth());
        lbVolt->setSizePolicy(sizePolicy7);
        lbVolt->setAlignment(Qt::AlignCenter);
        lbVolt->setReadOnly(true);
        lbVolt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        lbVolt->setDecimals(1);
        lbVolt->setMinimum(-100000.000000000000000);
        lbVolt->setMaximum(100000.000000000000000);

        gridLayout->addWidget(lbVolt, 2, 1, 1, 3);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy7.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy7);
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 2, 4, 1, 1);

        sbVoltLimit = new QDoubleSpinBox(groupBox_2);
        sbVoltLimit->setObjectName(QString::fromUtf8("sbVoltLimit"));
        sbVoltLimit->setEnabled(false);
        sizePolicy7.setHeightForWidth(sbVoltLimit->sizePolicy().hasHeightForWidth());
        sbVoltLimit->setSizePolicy(sizePolicy7);
        sbVoltLimit->setAlignment(Qt::AlignCenter);
        sbVoltLimit->setReadOnly(true);
        sbVoltLimit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sbVoltLimit->setDecimals(1);
        sbVoltLimit->setMaximum(10000.000000000000000);
        sbVoltLimit->setSingleStep(0.100000000000000);

        gridLayout->addWidget(sbVoltLimit, 2, 5, 1, 3);

        bVoltDec = new QPushButton(groupBox_2);
        bVoltDec->setObjectName(QString::fromUtf8("bVoltDec"));
        sizePolicy3.setHeightForWidth(bVoltDec->sizePolicy().hasHeightForWidth());
        bVoltDec->setSizePolicy(sizePolicy3);
        bVoltDec->setIcon(icon4);
        bVoltDec->setAutoRepeat(true);
        bVoltDec->setFlat(true);

        gridLayout->addWidget(bVoltDec, 2, 8, 1, 1);

        bVoltInc = new QPushButton(groupBox_2);
        bVoltInc->setObjectName(QString::fromUtf8("bVoltInc"));
        sizePolicy3.setHeightForWidth(bVoltInc->sizePolicy().hasHeightForWidth());
        bVoltInc->setSizePolicy(sizePolicy3);
        bVoltInc->setIcon(icon5);
        bVoltInc->setAutoRepeat(true);
        bVoltInc->setFlat(true);

        gridLayout->addWidget(bVoltInc, 2, 9, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lbCurr = new QDoubleSpinBox(groupBox_2);
        lbCurr->setObjectName(QString::fromUtf8("lbCurr"));
        sizePolicy7.setHeightForWidth(lbCurr->sizePolicy().hasHeightForWidth());
        lbCurr->setSizePolicy(sizePolicy7);
        lbCurr->setAlignment(Qt::AlignCenter);
        lbCurr->setReadOnly(true);
        lbCurr->setButtonSymbols(QAbstractSpinBox::NoButtons);
        lbCurr->setDecimals(1);
        lbCurr->setMinimum(-100000.000000000000000);
        lbCurr->setMaximum(100000.000000000000000);

        gridLayout->addWidget(lbCurr, 3, 1, 1, 3);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy7.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy7);
        label_11->setMinimumSize(QSize(0, 0));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 3, 4, 1, 1);

        sbCurrLimit = new QDoubleSpinBox(groupBox_2);
        sbCurrLimit->setObjectName(QString::fromUtf8("sbCurrLimit"));
        sbCurrLimit->setEnabled(false);
        sizePolicy7.setHeightForWidth(sbCurrLimit->sizePolicy().hasHeightForWidth());
        sbCurrLimit->setSizePolicy(sizePolicy7);
        sbCurrLimit->setAlignment(Qt::AlignCenter);
        sbCurrLimit->setReadOnly(true);
        sbCurrLimit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        sbCurrLimit->setKeyboardTracking(true);
        sbCurrLimit->setDecimals(1);
        sbCurrLimit->setMaximum(10000.000000000000000);
        sbCurrLimit->setSingleStep(0.100000000000000);

        gridLayout->addWidget(sbCurrLimit, 3, 5, 1, 3);

        bCurrDec = new QPushButton(groupBox_2);
        bCurrDec->setObjectName(QString::fromUtf8("bCurrDec"));
        sizePolicy3.setHeightForWidth(bCurrDec->sizePolicy().hasHeightForWidth());
        bCurrDec->setSizePolicy(sizePolicy3);
        bCurrDec->setIcon(icon4);
        bCurrDec->setAutoRepeat(true);
        bCurrDec->setFlat(true);

        gridLayout->addWidget(bCurrDec, 3, 8, 1, 1);

        bCurrInc = new QPushButton(groupBox_2);
        bCurrInc->setObjectName(QString::fromUtf8("bCurrInc"));
        sizePolicy3.setHeightForWidth(bCurrInc->sizePolicy().hasHeightForWidth());
        bCurrInc->setSizePolicy(sizePolicy3);
        bCurrInc->setIcon(icon5);
        bCurrInc->setAutoRepeat(true);
        bCurrInc->setFlat(true);

        gridLayout->addWidget(bCurrInc, 3, 9, 1, 1);

        lb_cap_name = new QLabel(groupBox_2);
        lb_cap_name->setObjectName(QString::fromUtf8("lb_cap_name"));
        sizePolicy2.setHeightForWidth(lb_cap_name->sizePolicy().hasHeightForWidth());
        lb_cap_name->setSizePolicy(sizePolicy2);
        lb_cap_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_cap_name, 4, 0, 1, 1);

        edCapacity = new QDoubleSpinBox(groupBox_2);
        edCapacity->setObjectName(QString::fromUtf8("edCapacity"));
        sizePolicy7.setHeightForWidth(edCapacity->sizePolicy().hasHeightForWidth());
        edCapacity->setSizePolicy(sizePolicy7);
        edCapacity->setFrame(true);
        edCapacity->setAlignment(Qt::AlignCenter);
        edCapacity->setReadOnly(true);
        edCapacity->setButtonSymbols(QAbstractSpinBox::NoButtons);
        edCapacity->setMaximum(100000.000000000000000);

        gridLayout->addWidget(edCapacity, 4, 1, 1, 7);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(bStartStop, bMethod);
        QWidget::setTabOrder(bMethod, bPause);
        QWidget::setTabOrder(bPause, bResetError);
        QWidget::setTabOrder(bResetError, edMethodName);
        QWidget::setTabOrder(edMethodName, edMode);
        QWidget::setTabOrder(edMode, error_state);
        QWidget::setTabOrder(error_state, lb_work_time);
        QWidget::setTabOrder(lb_work_time, edTimeLimit);
        QWidget::setTabOrder(edTimeLimit, sbCycleTotal);
        QWidget::setTabOrder(sbCycleTotal, bCycleDec);
        QWidget::setTabOrder(bCycleDec, bCycleInc);
        QWidget::setTabOrder(bCycleInc, sbVoltLimit);
        QWidget::setTabOrder(sbVoltLimit, bVoltDec);
        QWidget::setTabOrder(bVoltDec, bVoltInc);
        QWidget::setTabOrder(bVoltInc, sbCurrLimit);
        QWidget::setTabOrder(sbCurrLimit, bCurrDec);
        QWidget::setTabOrder(bCurrDec, bCurrInc);
        QWidget::setTabOrder(bCurrInc, edCapacity);

        retranslateUi(ZrmMainDisplay);
        QObject::connect(bVoltDec, SIGNAL(clicked()), sbVoltLimit, SLOT(stepDown()));
        QObject::connect(bVoltInc, SIGNAL(clicked()), sbVoltLimit, SLOT(stepUp()));
        QObject::connect(bCurrDec, SIGNAL(clicked()), sbCurrLimit, SLOT(stepDown()));
        QObject::connect(bCurrInc, SIGNAL(clicked()), sbCurrLimit, SLOT(stepUp()));
        QObject::connect(bCycleDec, SIGNAL(clicked()), sbCycleTotal, SLOT(stepDown()));
        QObject::connect(bCycleInc, SIGNAL(clicked()), sbCycleTotal, SLOT(stepUp()));

        QMetaObject::connectSlotsByName(ZrmMainDisplay);
    } // setupUi

    void retranslateUi(QWidget *ZrmMainDisplay)
    {
        ZrmMainDisplay->setWindowTitle(QCoreApplication::translate("ZrmMainDisplay", "Form", nullptr));
        edMode->setText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        label->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\236\321\210\320\270\320\261\320\272\320\260", nullptr));
        edMethodName->setText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        bMethod->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\234\320\265\321\202\320\276\320\264:", nullptr));
        label_7->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        bStartStop->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        bPause->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266", nullptr));
        bResetError->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ZrmMainDisplay", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        label_14->setText(QCoreApplication::translate("ZrmMainDisplay", "/", nullptr));
        edTimeLimit->setInputMask(QCoreApplication::translate("ZrmMainDisplay", "009:09:09 ", nullptr));
        edTimeLimit->setText(QCoreApplication::translate("ZrmMainDisplay", ":: ", nullptr));
        label_8->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\255\321\202\320\260\320\277", nullptr));
        lbStageNum->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        label_16->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\270\320\267", nullptr));
        lbStageTotal->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        label_9->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\246\320\270\320\272\320\273", nullptr));
        lbCycleNum->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "0", nullptr));
        label_17->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\270\320\267", nullptr));
        sbCycleTotal->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "\342\210\236", nullptr));
        bCycleDec->setText(QString());
        bCycleInc->setText(QString());
        label_3->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", nullptr));
        lbVolt->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        label_10->setText(QCoreApplication::translate("ZrmMainDisplay", "/", nullptr));
        sbVoltLimit->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        sbVoltLimit->setSuffix(QCoreApplication::translate("ZrmMainDisplay", " \320\222", nullptr));
        bVoltDec->setText(QString());
        bVoltInc->setText(QString());
        label_4->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\242\320\276\320\272", nullptr));
        lbCurr->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        label_11->setText(QCoreApplication::translate("ZrmMainDisplay", "/", nullptr));
        sbCurrLimit->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        sbCurrLimit->setSuffix(QCoreApplication::translate("ZrmMainDisplay", " \320\220", nullptr));
        bCurrDec->setText(QString());
        bCurrInc->setText(QString());
        lb_cap_name->setText(QCoreApplication::translate("ZrmMainDisplay", "\320\201\320\274\320\272\320\276\321\201\321\202\321\214", nullptr));
        edCapacity->setSpecialValueText(QCoreApplication::translate("ZrmMainDisplay", "--", nullptr));
        edCapacity->setSuffix(QCoreApplication::translate("ZrmMainDisplay", " \320\222\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmMainDisplay: public Ui_ZrmMainDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMAINDISPLAY_H
