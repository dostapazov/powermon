/********************************************************************************
** Form generated from reading UI file 'zrmparamsview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMPARAMSVIEW_H
#define UI_ZRMPARAMSVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmParamsView
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *zrm_params;

    void setupUi(QWidget *ZrmParamsView)
    {
        if (ZrmParamsView->objectName().isEmpty())
            ZrmParamsView->setObjectName(QString::fromUtf8("ZrmParamsView"));
        ZrmParamsView->resize(688, 292);
        verticalLayout = new QVBoxLayout(ZrmParamsView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        zrm_params = new QTreeWidget(ZrmParamsView);
        zrm_params->setObjectName(QString::fromUtf8("zrm_params"));
        zrm_params->setEditTriggers(QAbstractItemView::NoEditTriggers);
        zrm_params->setProperty("showDropIndicator", QVariant(false));
        zrm_params->setAlternatingRowColors(true);
        zrm_params->setSelectionMode(QAbstractItemView::SingleSelection);
        zrm_params->setRootIsDecorated(true);
        zrm_params->setUniformRowHeights(true);
        zrm_params->setItemsExpandable(false);
        zrm_params->setSortingEnabled(true);
        zrm_params->setHeaderHidden(false);
        zrm_params->setExpandsOnDoubleClick(false);
        zrm_params->setColumnCount(2);
        zrm_params->header()->setVisible(true);
        zrm_params->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(zrm_params);


        retranslateUi(ZrmParamsView);

        QMetaObject::connectSlotsByName(ZrmParamsView);
    } // setupUi

    void retranslateUi(QWidget *ZrmParamsView)
    {
        ZrmParamsView->setWindowTitle(QCoreApplication::translate("ZrmParamsView", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = zrm_params->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ZrmParamsView", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmParamsView", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmParamsView: public Ui_ZrmParamsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMPARAMSVIEW_H
