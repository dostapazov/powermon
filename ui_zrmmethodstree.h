/********************************************************************************
** Form generated from reading UI file 'zrmmethodstree.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMETHODSTREE_H
#define UI_ZRMMETHODSTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmMethodsTree
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *tw_methods;

    void setupUi(QWidget *ZrmMethodsTree)
    {
        if (ZrmMethodsTree->objectName().isEmpty())
            ZrmMethodsTree->setObjectName(QString::fromUtf8("ZrmMethodsTree"));
        ZrmMethodsTree->resize(446, 358);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmMethodsTree->sizePolicy().hasHeightForWidth());
        ZrmMethodsTree->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ZrmMethodsTree);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tw_methods = new QTreeWidget(ZrmMethodsTree);
        tw_methods->setObjectName(QString::fromUtf8("tw_methods"));
        sizePolicy.setHeightForWidth(tw_methods->sizePolicy().hasHeightForWidth());
        tw_methods->setSizePolicy(sizePolicy);
        tw_methods->setEditTriggers(QAbstractItemView::AllEditTriggers);
        tw_methods->setTabKeyNavigation(false);
        tw_methods->setAlternatingRowColors(true);
        tw_methods->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_methods->setSelectionBehavior(QAbstractItemView::SelectItems);
        tw_methods->setAllColumnsShowFocus(true);
        tw_methods->setExpandsOnDoubleClick(false);
        tw_methods->header()->setProperty("showSortIndicator", QVariant(true));
        tw_methods->header()->setStretchLastSection(false);

        verticalLayout->addWidget(tw_methods);


        retranslateUi(ZrmMethodsTree);

        QMetaObject::connectSlotsByName(ZrmMethodsTree);
    } // setupUi

    void retranslateUi(QWidget *ZrmMethodsTree)
    {
        ZrmMethodsTree->setWindowTitle(QCoreApplication::translate("ZrmMethodsTree", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tw_methods->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("ZrmMethodsTree", "\320\201\320\274\320\272\320\276\321\201\321\202\321\214", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ZrmMethodsTree", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmMethodsTree", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmMethodsTree: public Ui_ZrmMethodsTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMETHODSTREE_H
