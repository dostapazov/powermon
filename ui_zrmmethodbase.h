/********************************************************************************
** Form generated from reading UI file 'zrmmethodbase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMETHODBASE_H
#define UI_ZRMMETHODBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmMethodBase
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lb_method_name;
    QGroupBox *details_box;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lb_stage_num;
    QLabel *label_6;
    QLineEdit *lb_cycle_num;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lb_stage_total;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lb_cycle_total;
    QLineEdit *lb_time_limit;
    QLineEdit *lb_time_work;
    QTreeWidget *tw_stages;

    void setupUi(QWidget *ZrmMethodBase)
    {
        if (ZrmMethodBase->objectName().isEmpty())
            ZrmMethodBase->setObjectName(QString::fromUtf8("ZrmMethodBase"));
        ZrmMethodBase->resize(380, 323);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmMethodBase->sizePolicy().hasHeightForWidth());
        ZrmMethodBase->setSizePolicy(sizePolicy);
        ZrmMethodBase->setMinimumSize(QSize(300, 0));
        verticalLayout = new QVBoxLayout(ZrmMethodBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        lb_method_name = new QLineEdit(ZrmMethodBase);
        lb_method_name->setObjectName(QString::fromUtf8("lb_method_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lb_method_name->sizePolicy().hasHeightForWidth());
        lb_method_name->setSizePolicy(sizePolicy1);
        lb_method_name->setReadOnly(true);

        verticalLayout->addWidget(lb_method_name);

        details_box = new QGroupBox(ZrmMethodBase);
        details_box->setObjectName(QString::fromUtf8("details_box"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(details_box->sizePolicy().hasHeightForWidth());
        details_box->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(details_box);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lb_stage_num = new QLineEdit(details_box);
        lb_stage_num->setObjectName(QString::fromUtf8("lb_stage_num"));
        sizePolicy1.setHeightForWidth(lb_stage_num->sizePolicy().hasHeightForWidth());
        lb_stage_num->setSizePolicy(sizePolicy1);
        lb_stage_num->setMinimumSize(QSize(30, 0));
        lb_stage_num->setMaximumSize(QSize(0, 16777215));
        lb_stage_num->setMaxLength(2);
        lb_stage_num->setAlignment(Qt::AlignCenter);
        lb_stage_num->setReadOnly(true);
        lb_stage_num->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_stage_num, 0, 1, 1, 1);

        label_6 = new QLabel(details_box);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lb_cycle_num = new QLineEdit(details_box);
        lb_cycle_num->setObjectName(QString::fromUtf8("lb_cycle_num"));
        sizePolicy1.setHeightForWidth(lb_cycle_num->sizePolicy().hasHeightForWidth());
        lb_cycle_num->setSizePolicy(sizePolicy1);
        lb_cycle_num->setMinimumSize(QSize(30, 0));
        lb_cycle_num->setMaximumSize(QSize(0, 16777215));
        lb_cycle_num->setMaxLength(2);
        lb_cycle_num->setAlignment(Qt::AlignCenter);
        lb_cycle_num->setReadOnly(true);
        lb_cycle_num->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_cycle_num, 0, 5, 1, 1);

        label_5 = new QLabel(details_box);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 4, 1, 1);

        label = new QLabel(details_box);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(details_box);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        lb_stage_total = new QLineEdit(details_box);
        lb_stage_total->setObjectName(QString::fromUtf8("lb_stage_total"));
        sizePolicy1.setHeightForWidth(lb_stage_total->sizePolicy().hasHeightForWidth());
        lb_stage_total->setSizePolicy(sizePolicy1);
        lb_stage_total->setMinimumSize(QSize(30, 0));
        lb_stage_total->setMaximumSize(QSize(0, 16777215));
        lb_stage_total->setMaxLength(2);
        lb_stage_total->setAlignment(Qt::AlignCenter);
        lb_stage_total->setReadOnly(true);
        lb_stage_total->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_stage_total, 0, 3, 1, 1);

        label_2 = new QLabel(details_box);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(details_box);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 0, 6, 1, 1);

        lb_cycle_total = new QLineEdit(details_box);
        lb_cycle_total->setObjectName(QString::fromUtf8("lb_cycle_total"));
        sizePolicy1.setHeightForWidth(lb_cycle_total->sizePolicy().hasHeightForWidth());
        lb_cycle_total->setSizePolicy(sizePolicy1);
        lb_cycle_total->setMinimumSize(QSize(30, 0));
        lb_cycle_total->setMaximumSize(QSize(0, 16777215));
        lb_cycle_total->setMaxLength(2);
        lb_cycle_total->setAlignment(Qt::AlignCenter);
        lb_cycle_total->setReadOnly(true);
        lb_cycle_total->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_cycle_total, 0, 7, 1, 1);

        lb_time_limit = new QLineEdit(details_box);
        lb_time_limit->setObjectName(QString::fromUtf8("lb_time_limit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lb_time_limit->sizePolicy().hasHeightForWidth());
        lb_time_limit->setSizePolicy(sizePolicy4);
        lb_time_limit->setMinimumSize(QSize(92, 0));
        lb_time_limit->setMaximumSize(QSize(145, 16777215));
        lb_time_limit->setMaxLength(16);
        lb_time_limit->setAlignment(Qt::AlignCenter);
        lb_time_limit->setReadOnly(true);
        lb_time_limit->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_time_limit, 2, 5, 1, 3);

        lb_time_work = new QLineEdit(details_box);
        lb_time_work->setObjectName(QString::fromUtf8("lb_time_work"));
        sizePolicy1.setHeightForWidth(lb_time_work->sizePolicy().hasHeightForWidth());
        lb_time_work->setSizePolicy(sizePolicy1);
        lb_time_work->setMinimumSize(QSize(92, 0));
        lb_time_work->setMaximumSize(QSize(145, 16777215));
        lb_time_work->setMaxLength(10);
        lb_time_work->setAlignment(Qt::AlignCenter);
        lb_time_work->setReadOnly(true);
        lb_time_work->setClearButtonEnabled(false);

        gridLayout->addWidget(lb_time_work, 2, 1, 1, 3);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout->addWidget(details_box);

        tw_stages = new QTreeWidget(ZrmMethodBase);
        tw_stages->setObjectName(QString::fromUtf8("tw_stages"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(tw_stages->sizePolicy().hasHeightForWidth());
        tw_stages->setSizePolicy(sizePolicy5);
        tw_stages->setHeaderHidden(false);
        tw_stages->header()->setHighlightSections(true);
        tw_stages->header()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(tw_stages);

        QWidget::setTabOrder(lb_method_name, lb_stage_num);
        QWidget::setTabOrder(lb_stage_num, lb_stage_total);
        QWidget::setTabOrder(lb_stage_total, lb_cycle_num);
        QWidget::setTabOrder(lb_cycle_num, lb_cycle_total);
        QWidget::setTabOrder(lb_cycle_total, lb_time_work);
        QWidget::setTabOrder(lb_time_work, lb_time_limit);
        QWidget::setTabOrder(lb_time_limit, tw_stages);

        retranslateUi(ZrmMethodBase);

        QMetaObject::connectSlotsByName(ZrmMethodBase);
    } // setupUi

    void retranslateUi(QWidget *ZrmMethodBase)
    {
        ZrmMethodBase->setWindowTitle(QCoreApplication::translate("ZrmMethodBase", "Form", nullptr));
        details_box->setTitle(QCoreApplication::translate("ZrmMethodBase", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", nullptr));
        lb_stage_num->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        label_6->setText(QCoreApplication::translate("ZrmMethodBase", "\320\222\321\200\320\265\320\274\321\217 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        lb_cycle_num->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        label_5->setText(QCoreApplication::translate("ZrmMethodBase", "\320\236\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("ZrmMethodBase", "\320\255\321\202\320\260\320\277", nullptr));
        label_4->setText(QCoreApplication::translate("ZrmMethodBase", "\320\246\320\270\320\272\320\273", nullptr));
        lb_stage_total->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        label_2->setText(QCoreApplication::translate("ZrmMethodBase", "\320\230\320\267", nullptr));
        label_3->setText(QCoreApplication::translate("ZrmMethodBase", "\320\230\320\267", nullptr));
        lb_cycle_total->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        lb_time_limit->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        lb_time_work->setText(QCoreApplication::translate("ZrmMethodBase", "--", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tw_stages->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ZrmMethodBase", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ZrmMethodBase", "\320\242\320\270\320\277", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmMethodBase", "\320\255\321\202\320\260\320\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmMethodBase: public Ui_ZrmMethodBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMETHODBASE_H
