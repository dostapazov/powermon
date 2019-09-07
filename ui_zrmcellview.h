/********************************************************************************
** Form generated from reading UI file 'zrmcellview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMCELLVIEW_H
#define UI_ZRMCELLVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmCellView
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *cell_dU;
    QLabel *label_2;
    QDoubleSpinBox *cell_dT;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *table_page;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *cell_table;

    void setupUi(QWidget *ZrmCellView)
    {
        if (ZrmCellView->objectName().isEmpty())
            ZrmCellView->setObjectName(QString::fromUtf8("ZrmCellView"));
        ZrmCellView->resize(542, 425);
        verticalLayout = new QVBoxLayout(ZrmCellView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        groupBox = new QGroupBox(ZrmCellView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cell_dU = new QDoubleSpinBox(groupBox);
        cell_dU->setObjectName(QString::fromUtf8("cell_dU"));

        horizontalLayout->addWidget(cell_dU);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        cell_dT = new QDoubleSpinBox(groupBox);
        cell_dT->setObjectName(QString::fromUtf8("cell_dT"));

        horizontalLayout->addWidget(cell_dT);

        horizontalSpacer = new QSpacerItem(346, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox);

        stackedWidget = new QStackedWidget(ZrmCellView);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        table_page = new QWidget();
        table_page->setObjectName(QString::fromUtf8("table_page"));
        verticalLayout_2 = new QVBoxLayout(table_page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cell_table = new QTableWidget(table_page);
        if (cell_table->rowCount() < 2)
            cell_table->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cell_table->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cell_table->setVerticalHeaderItem(1, __qtablewidgetitem1);
        cell_table->setObjectName(QString::fromUtf8("cell_table"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cell_table->sizePolicy().hasHeightForWidth());
        cell_table->setSizePolicy(sizePolicy1);
        cell_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cell_table->setDragDropOverwriteMode(false);
        cell_table->setWordWrap(false);
        cell_table->setRowCount(2);
        cell_table->setColumnCount(0);
        cell_table->horizontalHeader()->setVisible(true);
        cell_table->horizontalHeader()->setCascadingSectionResizes(false);
        cell_table->horizontalHeader()->setMinimumSectionSize(60);
        cell_table->horizontalHeader()->setDefaultSectionSize(60);
        cell_table->horizontalHeader()->setHighlightSections(true);
        cell_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        cell_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_2->addWidget(cell_table);

        stackedWidget->addWidget(table_page);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(ZrmCellView);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ZrmCellView);
    } // setupUi

    void retranslateUi(QWidget *ZrmCellView)
    {
        ZrmCellView->setWindowTitle(QCoreApplication::translate("ZrmCellView", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("ZrmCellView", "dU", nullptr));
        label_2->setText(QCoreApplication::translate("ZrmCellView", "dT", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cell_table->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ZrmCellView", "U", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cell_table->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ZrmCellView", "T", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmCellView: public Ui_ZrmCellView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMCELLVIEW_H
