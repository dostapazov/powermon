/********************************************************************************
** Form generated from reading UI file 'zrmcalibrate.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMCALIBRATE_H
#define UI_ZRMCALIBRATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmCalibrate
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *bSetVoltage;
    QDoubleSpinBox *vVoltage;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *vCurrent;
    QPushButton *bSetCurrent;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ZrmCalibrate)
    {
        if (ZrmCalibrate->objectName().isEmpty())
            ZrmCalibrate->setObjectName(QString::fromUtf8("ZrmCalibrate"));
        ZrmCalibrate->resize(430, 124);
        verticalLayout = new QVBoxLayout(ZrmCalibrate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(ZrmCalibrate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bSetVoltage = new QPushButton(groupBox);
        bSetVoltage->setObjectName(QString::fromUtf8("bSetVoltage"));

        gridLayout->addWidget(bSetVoltage, 0, 1, 1, 1);

        vVoltage = new QDoubleSpinBox(groupBox);
        vVoltage->setObjectName(QString::fromUtf8("vVoltage"));
        vVoltage->setDecimals(1);
        vVoltage->setMaximum(10000.000000000000000);

        gridLayout->addWidget(vVoltage, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ZrmCalibrate);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        vCurrent = new QDoubleSpinBox(groupBox_2);
        vCurrent->setObjectName(QString::fromUtf8("vCurrent"));
        vCurrent->setDecimals(1);
        vCurrent->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(vCurrent, 0, 0, 1, 1);

        bSetCurrent = new QPushButton(groupBox_2);
        bSetCurrent->setObjectName(QString::fromUtf8("bSetCurrent"));

        gridLayout_2->addWidget(bSetCurrent, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ZrmCalibrate);

        QMetaObject::connectSlotsByName(ZrmCalibrate);
    } // setupUi

    void retranslateUi(QWidget *ZrmCalibrate)
    {
        ZrmCalibrate->setWindowTitle(QCoreApplication::translate("ZrmCalibrate", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ZrmCalibrate", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", nullptr));
        bSetVoltage->setText(QCoreApplication::translate("ZrmCalibrate", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ZrmCalibrate", "\320\242\320\276\320\272", nullptr));
        bSetCurrent->setText(QCoreApplication::translate("ZrmCalibrate", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmCalibrate: public Ui_ZrmCalibrate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMCALIBRATE_H
