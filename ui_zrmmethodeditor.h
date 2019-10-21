/********************************************************************************
** Form generated from reading UI file 'zrmmethodeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMMETHODEDITOR_H
#define UI_ZRMMETHODEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "zrmmethodstree.h"
#include "zrmstageseditor.h"

QT_BEGIN_NAMESPACE

class Ui_zrmmethodeditor
{
public:
    QAction *actApply;
    QAction *actUndo;
    QAction *actDelete;
    QAction *actLink;
    QAction *actNew;
    QAction *actNewChild;
    QAction *actMethodEdit;
    QAction *actAllMethods;
    QAction *actCopyModel;
    QHBoxLayout *horizontalLayout;
    QFrame *fr_methods;
    QVBoxLayout *verticalLayout_7;
    ZrmMethodsTree *methods_tree;
    QStackedWidget *param_widget;
    ZrmStagesEditor *stages_page;
    QWidget *link_page;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_4;
    QToolButton *tbLinkMethod;
    QToolButton *tbUnlinkMethod;
    QSpacerItem *verticalSpacer_5;
    ZrmMethodsTree *methods_abstract;
    QWidget *empty_page;

    void setupUi(QWidget *zrmmethodeditor)
    {
        if (zrmmethodeditor->objectName().isEmpty())
            zrmmethodeditor->setObjectName(QString::fromUtf8("zrmmethodeditor"));
        zrmmethodeditor->resize(380, 231);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zrmmethodeditor->sizePolicy().hasHeightForWidth());
        zrmmethodeditor->setSizePolicy(sizePolicy);
        actApply = new QAction(zrmmethodeditor);
        actApply->setObjectName(QString::fromUtf8("actApply"));
        actApply->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        actApply->setIcon(icon);
        actUndo = new QAction(zrmmethodeditor);
        actUndo->setObjectName(QString::fromUtf8("actUndo"));
        actUndo->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/data/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUndo->setIcon(icon1);
        actDelete = new QAction(zrmmethodeditor);
        actDelete->setObjectName(QString::fromUtf8("actDelete"));
        actDelete->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/data/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon2);
        actLink = new QAction(zrmmethodeditor);
        actLink->setObjectName(QString::fromUtf8("actLink"));
        actLink->setCheckable(true);
        actLink->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/data/icons/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        actLink->setIcon(icon3);
        actNew = new QAction(zrmmethodeditor);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/data/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon4);
        actNewChild = new QAction(zrmmethodeditor);
        actNewChild->setObjectName(QString::fromUtf8("actNewChild"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/data/icons/new_child.png"), QSize(), QIcon::Normal, QIcon::Off);
        actNewChild->setIcon(icon5);
        actMethodEdit = new QAction(zrmmethodeditor);
        actMethodEdit->setObjectName(QString::fromUtf8("actMethodEdit"));
        actMethodEdit->setCheckable(true);
        actMethodEdit->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/data/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actMethodEdit->setIcon(icon6);
        actAllMethods = new QAction(zrmmethodeditor);
        actAllMethods->setObjectName(QString::fromUtf8("actAllMethods"));
        actAllMethods->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/data/icons/pinball.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAllMethods->setIcon(icon7);
        actCopyModel = new QAction(zrmmethodeditor);
        actCopyModel->setObjectName(QString::fromUtf8("actCopyModel"));
        actCopyModel->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/data/icons/copy_model.png"), QSize(), QIcon::Normal, QIcon::Off);
        actCopyModel->setIcon(icon8);
        horizontalLayout = new QHBoxLayout(zrmmethodeditor);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        fr_methods = new QFrame(zrmmethodeditor);
        fr_methods->setObjectName(QString::fromUtf8("fr_methods"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fr_methods->sizePolicy().hasHeightForWidth());
        fr_methods->setSizePolicy(sizePolicy1);
        fr_methods->setMinimumSize(QSize(0, 0));
        fr_methods->setFrameShape(QFrame::Box);
        fr_methods->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(fr_methods);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        methods_tree = new ZrmMethodsTree(fr_methods);
        methods_tree->setObjectName(QString::fromUtf8("methods_tree"));
        sizePolicy1.setHeightForWidth(methods_tree->sizePolicy().hasHeightForWidth());
        methods_tree->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(methods_tree);


        horizontalLayout->addWidget(fr_methods);

        param_widget = new QStackedWidget(zrmmethodeditor);
        param_widget->setObjectName(QString::fromUtf8("param_widget"));
        sizePolicy1.setHeightForWidth(param_widget->sizePolicy().hasHeightForWidth());
        param_widget->setSizePolicy(sizePolicy1);
        param_widget->setFrameShape(QFrame::Box);
        param_widget->setFrameShadow(QFrame::Raised);
        stages_page = new ZrmStagesEditor();
        stages_page->setObjectName(QString::fromUtf8("stages_page"));
        sizePolicy1.setHeightForWidth(stages_page->sizePolicy().hasHeightForWidth());
        stages_page->setSizePolicy(sizePolicy1);
        param_widget->addWidget(stages_page);
        link_page = new QWidget();
        link_page->setObjectName(QString::fromUtf8("link_page"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(link_page->sizePolicy().hasHeightForWidth());
        link_page->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(link_page);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        tbLinkMethod = new QToolButton(link_page);
        tbLinkMethod->setObjectName(QString::fromUtf8("tbLinkMethod"));
        tbLinkMethod->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tbLinkMethod->sizePolicy().hasHeightForWidth());
        tbLinkMethod->setSizePolicy(sizePolicy3);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/data/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbLinkMethod->setIcon(icon9);
        tbLinkMethod->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(tbLinkMethod);

        tbUnlinkMethod = new QToolButton(link_page);
        tbUnlinkMethod->setObjectName(QString::fromUtf8("tbUnlinkMethod"));
        tbUnlinkMethod->setEnabled(false);
        sizePolicy3.setHeightForWidth(tbUnlinkMethod->sizePolicy().hasHeightForWidth());
        tbUnlinkMethod->setSizePolicy(sizePolicy3);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/data/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbUnlinkMethod->setIcon(icon10);
        tbUnlinkMethod->setIconSize(QSize(24, 24));

        verticalLayout_8->addWidget(tbUnlinkMethod);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_8);

        methods_abstract = new ZrmMethodsTree(link_page);
        methods_abstract->setObjectName(QString::fromUtf8("methods_abstract"));
        sizePolicy1.setHeightForWidth(methods_abstract->sizePolicy().hasHeightForWidth());
        methods_abstract->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(methods_abstract);

        param_widget->addWidget(link_page);
        empty_page = new QWidget();
        empty_page->setObjectName(QString::fromUtf8("empty_page"));
        sizePolicy1.setHeightForWidth(empty_page->sizePolicy().hasHeightForWidth());
        empty_page->setSizePolicy(sizePolicy1);
        param_widget->addWidget(empty_page);

        horizontalLayout->addWidget(param_widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        QWidget::setTabOrder(tbLinkMethod, tbUnlinkMethod);

        retranslateUi(zrmmethodeditor);

        param_widget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(zrmmethodeditor);
    } // setupUi

    void retranslateUi(QWidget *zrmmethodeditor)
    {
        zrmmethodeditor->setWindowTitle(QString());
        actApply->setText(QCoreApplication::translate("zrmmethodeditor", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actApply->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214 (Ctrl+Return)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actApply->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actUndo->setText(QCoreApplication::translate("zrmmethodeditor", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
#if QT_CONFIG(tooltip)
        actUndo->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271 (Ctrl+Backspace)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actUndo->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        actDelete->setText(QCoreApplication::translate("zrmmethodeditor", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actDelete->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 (Ctrl+Del)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actDelete->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actLink->setText(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actLink->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214 (Ctrl+L)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actLink->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actNew->setText(QCoreApplication::translate("zrmmethodeditor", "\320\235\320\276\320\262\320\260\321\217 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        actNewChild->setText(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 ", nullptr));
#if QT_CONFIG(tooltip)
        actNewChild->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214(Ctrl+N)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actNewChild->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actMethodEdit->setText(QCoreApplication::translate("zrmmethodeditor", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\265\321\202\320\276\320\264", nullptr));
#if QT_CONFIG(tooltip)
        actMethodEdit->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\274\320\265\321\202\320\276\320\264 (Ctrl+E)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actMethodEdit->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actAllMethods->setText(QCoreApplication::translate("zrmmethodeditor", "\320\222\321\201\320\265 \320\274\320\265\321\202\320\276\320\264\321\213", nullptr));
#if QT_CONFIG(tooltip)
        actAllMethods->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\222\321\201\320\265 \320\274\320\265\321\202\320\276\320\264\321\213(Ctrl+A)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actAllMethods->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopyModel->setText(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\276\320\277\320\270\321\216", nullptr));
#if QT_CONFIG(tooltip)
        actCopyModel->setToolTip(QCoreApplication::translate("zrmmethodeditor", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\276\320\277\320\270\321\216 (Ctrl+C)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopyModel->setShortcut(QCoreApplication::translate("zrmmethodeditor", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        tbLinkMethod->setText(QString());
        tbUnlinkMethod->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zrmmethodeditor: public Ui_zrmmethodeditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMMETHODEDITOR_H
