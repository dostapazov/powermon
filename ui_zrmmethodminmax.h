/********************************************************************************
** Form generated from reading UI file 'zrmmethodminmax.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMETHODMINMAX_H
#define UI_ZRMMETHODMINMAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmMethodMinmax
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *stUmax;
    QDoubleSpinBox *Umax;
    QDoubleSpinBox *UmaxI;
    QLabel *label_2;
    QSpinBox *stUmin;
    QDoubleSpinBox *Umin;
    QDoubleSpinBox *UminI;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *stImax;
    QDoubleSpinBox *Imax;
    QDoubleSpinBox *ImaxU;
    QLabel *label_4;
    QSpinBox *stImin;
    QDoubleSpinBox *Imin;
    QDoubleSpinBox *IminU;

    void setupUi(QWidget *ZrmMethodMinmax)
    {
        if (ZrmMethodMinmax->objectName().isEmpty())
            ZrmMethodMinmax->setObjectName(QString::fromUtf8("ZrmMethodMinmax"));
        ZrmMethodMinmax->resize(564, 95);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmMethodMinmax->sizePolicy().hasHeightForWidth());
        ZrmMethodMinmax->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(ZrmMethodMinmax);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(ZrmMethodMinmax);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        stUmax = new QSpinBox(groupBox);
        stUmax->setObjectName(QString::fromUtf8("stUmax"));
        sizePolicy1.setHeightForWidth(stUmax->sizePolicy().hasHeightForWidth());
        stUmax->setSizePolicy(sizePolicy1);
        stUmax->setAlignment(Qt::AlignCenter);
        stUmax->setReadOnly(true);
        stUmax->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(stUmax, 0, 1, 1, 1);

        Umax = new QDoubleSpinBox(groupBox);
        Umax->setObjectName(QString::fromUtf8("Umax"));
        sizePolicy1.setHeightForWidth(Umax->sizePolicy().hasHeightForWidth());
        Umax->setSizePolicy(sizePolicy1);
        Umax->setAlignment(Qt::AlignCenter);
        Umax->setReadOnly(true);
        Umax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Umax->setKeyboardTracking(false);
        Umax->setProperty("showGroupSeparator", QVariant(false));
        Umax->setMaximum(9999.989999999999782);

        gridLayout->addWidget(Umax, 0, 2, 1, 1);

        UmaxI = new QDoubleSpinBox(groupBox);
        UmaxI->setObjectName(QString::fromUtf8("UmaxI"));
        sizePolicy1.setHeightForWidth(UmaxI->sizePolicy().hasHeightForWidth());
        UmaxI->setSizePolicy(sizePolicy1);
        UmaxI->setAlignment(Qt::AlignCenter);
        UmaxI->setReadOnly(true);
        UmaxI->setButtonSymbols(QAbstractSpinBox::NoButtons);
        UmaxI->setKeyboardTracking(false);
        UmaxI->setProperty("showGroupSeparator", QVariant(false));
        UmaxI->setSuffix(QString::fromUtf8("A"));
        UmaxI->setMaximum(9999.989999999999782);

        gridLayout->addWidget(UmaxI, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        stUmin = new QSpinBox(groupBox);
        stUmin->setObjectName(QString::fromUtf8("stUmin"));
        sizePolicy1.setHeightForWidth(stUmin->sizePolicy().hasHeightForWidth());
        stUmin->setSizePolicy(sizePolicy1);
        stUmin->setAlignment(Qt::AlignCenter);
        stUmin->setReadOnly(true);
        stUmin->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(stUmin, 1, 1, 1, 1);

        Umin = new QDoubleSpinBox(groupBox);
        Umin->setObjectName(QString::fromUtf8("Umin"));
        sizePolicy1.setHeightForWidth(Umin->sizePolicy().hasHeightForWidth());
        Umin->setSizePolicy(sizePolicy1);
        Umin->setAlignment(Qt::AlignCenter);
        Umin->setReadOnly(true);
        Umin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Umin->setKeyboardTracking(false);
        Umin->setProperty("showGroupSeparator", QVariant(false));
        Umin->setMaximum(9999.989999999999782);

        gridLayout->addWidget(Umin, 1, 2, 1, 1);

        UminI = new QDoubleSpinBox(groupBox);
        UminI->setObjectName(QString::fromUtf8("UminI"));
        sizePolicy1.setHeightForWidth(UminI->sizePolicy().hasHeightForWidth());
        UminI->setSizePolicy(sizePolicy1);
        UminI->setAlignment(Qt::AlignCenter);
        UminI->setReadOnly(true);
        UminI->setButtonSymbols(QAbstractSpinBox::NoButtons);
        UminI->setKeyboardTracking(false);
        UminI->setProperty("showGroupSeparator", QVariant(false));
        UminI->setSuffix(QString::fromUtf8("A"));
        UminI->setMaximum(9999.989999999999782);

        gridLayout->addWidget(UminI, 1, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ZrmMethodMinmax);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        stImax = new QSpinBox(groupBox_2);
        stImax->setObjectName(QString::fromUtf8("stImax"));
        sizePolicy1.setHeightForWidth(stImax->sizePolicy().hasHeightForWidth());
        stImax->setSizePolicy(sizePolicy1);
        stImax->setAlignment(Qt::AlignCenter);
        stImax->setReadOnly(true);
        stImax->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(stImax, 0, 1, 1, 1);

        Imax = new QDoubleSpinBox(groupBox_2);
        Imax->setObjectName(QString::fromUtf8("Imax"));
        sizePolicy1.setHeightForWidth(Imax->sizePolicy().hasHeightForWidth());
        Imax->setSizePolicy(sizePolicy1);
        Imax->setAlignment(Qt::AlignCenter);
        Imax->setReadOnly(true);
        Imax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Imax->setKeyboardTracking(false);
        Imax->setProperty("showGroupSeparator", QVariant(false));
        Imax->setPrefix(QString::fromUtf8("Max I "));
        Imax->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(Imax, 0, 2, 1, 1);

        ImaxU = new QDoubleSpinBox(groupBox_2);
        ImaxU->setObjectName(QString::fromUtf8("ImaxU"));
        sizePolicy1.setHeightForWidth(ImaxU->sizePolicy().hasHeightForWidth());
        ImaxU->setSizePolicy(sizePolicy1);
        ImaxU->setAlignment(Qt::AlignCenter);
        ImaxU->setReadOnly(true);
        ImaxU->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ImaxU->setKeyboardTracking(false);
        ImaxU->setProperty("showGroupSeparator", QVariant(false));
        ImaxU->setSuffix(QString::fromUtf8("A"));
        ImaxU->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(ImaxU, 0, 3, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        stImin = new QSpinBox(groupBox_2);
        stImin->setObjectName(QString::fromUtf8("stImin"));
        sizePolicy1.setHeightForWidth(stImin->sizePolicy().hasHeightForWidth());
        stImin->setSizePolicy(sizePolicy1);
        stImin->setAlignment(Qt::AlignCenter);
        stImin->setReadOnly(true);
        stImin->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(stImin, 1, 1, 1, 1);

        Imin = new QDoubleSpinBox(groupBox_2);
        Imin->setObjectName(QString::fromUtf8("Imin"));
        sizePolicy1.setHeightForWidth(Imin->sizePolicy().hasHeightForWidth());
        Imin->setSizePolicy(sizePolicy1);
        Imin->setAlignment(Qt::AlignCenter);
        Imin->setReadOnly(true);
        Imin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Imin->setKeyboardTracking(false);
        Imin->setProperty("showGroupSeparator", QVariant(false));
        Imin->setPrefix(QString::fromUtf8("Min I "));
        Imin->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(Imin, 1, 2, 1, 1);

        IminU = new QDoubleSpinBox(groupBox_2);
        IminU->setObjectName(QString::fromUtf8("IminU"));
        sizePolicy1.setHeightForWidth(IminU->sizePolicy().hasHeightForWidth());
        IminU->setSizePolicy(sizePolicy1);
        IminU->setAlignment(Qt::AlignCenter);
        IminU->setReadOnly(true);
        IminU->setButtonSymbols(QAbstractSpinBox::NoButtons);
        IminU->setKeyboardTracking(false);
        IminU->setProperty("showGroupSeparator", QVariant(false));
        IminU->setSuffix(QString::fromUtf8("A"));
        IminU->setMaximum(9999.989999999999782);

        gridLayout_2->addWidget(IminU, 1, 3, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        QWidget::setTabOrder(stUmax, Umax);
        QWidget::setTabOrder(Umax, UmaxI);
        QWidget::setTabOrder(UmaxI, stUmin);
        QWidget::setTabOrder(stUmin, Umin);
        QWidget::setTabOrder(Umin, UminI);
        QWidget::setTabOrder(UminI, stImax);
        QWidget::setTabOrder(stImax, Imax);
        QWidget::setTabOrder(Imax, ImaxU);
        QWidget::setTabOrder(ImaxU, stImin);
        QWidget::setTabOrder(stImin, Imin);
        QWidget::setTabOrder(Imin, IminU);

        retranslateUi(ZrmMethodMinmax);

        QMetaObject::connectSlotsByName(ZrmMethodMinmax);
    } // setupUi

    void retranslateUi(QWidget *ZrmMethodMinmax)
    {
        ZrmMethodMinmax->setWindowTitle(QCoreApplication::translate("ZrmMethodMinmax", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ZrmMethodMinmax", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("ZrmMethodMinmax", "\320\255\321\202\320\260\320\277", nullptr));
        stUmax->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        stUmax->setPrefix(QString());
        Umax->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        Umax->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "Max U  ", nullptr));
        Umax->setSuffix(QCoreApplication::translate("ZrmMethodMinmax", " \320\222", nullptr));
        UmaxI->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        UmaxI->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "\320\277\321\200\320\270 I =  ", nullptr));
        label_2->setText(QCoreApplication::translate("ZrmMethodMinmax", "\320\255\321\202\320\260\320\277", nullptr));
        stUmin->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        stUmin->setPrefix(QString());
        Umin->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        Umin->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "Min U  ", nullptr));
        Umin->setSuffix(QCoreApplication::translate("ZrmMethodMinmax", " \320\222", nullptr));
        UminI->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        UminI->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "\320\277\321\200\320\270 I =  ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ZrmMethodMinmax", "\320\242\320\276\320\272\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("ZrmMethodMinmax", "\320\255\321\202\320\260\320\277", nullptr));
        stImax->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        stImax->setPrefix(QString());
        Imax->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        Imax->setSuffix(QCoreApplication::translate("ZrmMethodMinmax", " A", nullptr));
        ImaxU->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        ImaxU->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "\320\277\321\200\320\270 U =  ", nullptr));
        label_4->setText(QCoreApplication::translate("ZrmMethodMinmax", "\320\255\321\202\320\260\320\277", nullptr));
        stImin->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        stImin->setPrefix(QString());
        Imin->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        Imin->setSuffix(QCoreApplication::translate("ZrmMethodMinmax", " A", nullptr));
        IminU->setSpecialValueText(QCoreApplication::translate("ZrmMethodMinmax", "--", nullptr));
        IminU->setPrefix(QCoreApplication::translate("ZrmMethodMinmax", "\320\277\321\200\320\270 U =  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmMethodMinmax: public Ui_ZrmMethodMinmax {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMETHODMINMAX_H
