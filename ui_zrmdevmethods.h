/********************************************************************************
** Form generated from reading UI file 'zrmdevmethods.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMDEVMETHODS_H
#define UI_ZRMDEVMETHODS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zrmmethodstree.h"

QT_BEGIN_NAMESPACE

class Ui_ZrmDevMethods
{
public:
    QHBoxLayout *horizontalLayout;
    ZrmMethodsTree *spr_methods;
    QVBoxLayout *verticalLayout;
    QPushButton *bDownload;
    QPushButton *bAdd;
    QPushButton *bRemove;
    QPushButton *bUpload;
    QSpacerItem *verticalSpacer;
    QTreeWidget *dev_methods;

    void setupUi(QWidget *ZrmDevMethods)
    {
        if (ZrmDevMethods->objectName().isEmpty())
            ZrmDevMethods->setObjectName(QString::fromUtf8("ZrmDevMethods"));
        ZrmDevMethods->resize(688, 384);
        horizontalLayout = new QHBoxLayout(ZrmDevMethods);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        spr_methods = new ZrmMethodsTree(ZrmDevMethods);
        spr_methods->setObjectName(QString::fromUtf8("spr_methods"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spr_methods->sizePolicy().hasHeightForWidth());
        spr_methods->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(spr_methods);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bDownload = new QPushButton(ZrmDevMethods);
        bDownload->setObjectName(QString::fromUtf8("bDownload"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        bDownload->setIcon(icon);
        bDownload->setIconSize(QSize(32, 32));
        bDownload->setCheckable(false);

        verticalLayout->addWidget(bDownload);

        bAdd = new QPushButton(ZrmDevMethods);
        bAdd->setObjectName(QString::fromUtf8("bAdd"));
        bAdd->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        bAdd->setIcon(icon1);
        bAdd->setIconSize(QSize(32, 32));
        bAdd->setCheckable(false);

        verticalLayout->addWidget(bAdd);

        bRemove = new QPushButton(ZrmDevMethods);
        bRemove->setObjectName(QString::fromUtf8("bRemove"));
        bRemove->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRemove->setIcon(icon2);
        bRemove->setIconSize(QSize(32, 32));
        bRemove->setCheckable(false);

        verticalLayout->addWidget(bRemove);

        bUpload = new QPushButton(ZrmDevMethods);
        bUpload->setObjectName(QString::fromUtf8("bUpload"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/zrm/icons/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        bUpload->setIcon(icon3);
        bUpload->setIconSize(QSize(32, 32));
        bUpload->setCheckable(false);

        verticalLayout->addWidget(bUpload);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        dev_methods = new QTreeWidget(ZrmDevMethods);
        dev_methods->setObjectName(QString::fromUtf8("dev_methods"));
        dev_methods->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dev_methods->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout->addWidget(dev_methods);

        QWidget::setTabOrder(bDownload, bAdd);
        QWidget::setTabOrder(bAdd, bRemove);
        QWidget::setTabOrder(bRemove, bUpload);
        QWidget::setTabOrder(bUpload, dev_methods);

        retranslateUi(ZrmDevMethods);

        QMetaObject::connectSlotsByName(ZrmDevMethods);
    } // setupUi

    void retranslateUi(QWidget *ZrmDevMethods)
    {
        ZrmDevMethods->setWindowTitle(QCoreApplication::translate("ZrmDevMethods", "Form", nullptr));
#if QT_CONFIG(tooltip)
        bDownload->setToolTip(QCoreApplication::translate("ZrmDevMethods", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \320\270\320\267 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        bDownload->setText(QString());
#if QT_CONFIG(tooltip)
        bAdd->setToolTip(QCoreApplication::translate("ZrmDevMethods", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        bAdd->setText(QString());
#if QT_CONFIG(tooltip)
        bRemove->setToolTip(QCoreApplication::translate("ZrmDevMethods", "\320\243\320\261\321\200\320\260\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        bRemove->setText(QString());
#if QT_CONFIG(tooltip)
        bUpload->setToolTip(QCoreApplication::translate("ZrmDevMethods", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
#endif // QT_CONFIG(tooltip)
        bUpload->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = dev_methods->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmDevMethods", "\320\234\320\265\321\202\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmDevMethods: public Ui_ZrmDevMethods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMDEVMETHODS_H
