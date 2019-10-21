/********************************************************************************
** Form generated from reading UI file 'zrmreadywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMREADYWIDGET_H
#define UI_ZRMREADYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmReadyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *ready_area;
    QWidget *ready_widget;

    void setupUi(QWidget *ZrmReadyWidget)
    {
        if (ZrmReadyWidget->objectName().isEmpty())
            ZrmReadyWidget->setObjectName(QString::fromUtf8("ZrmReadyWidget"));
        ZrmReadyWidget->resize(442, 329);
        verticalLayout = new QVBoxLayout(ZrmReadyWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        ready_area = new QScrollArea(ZrmReadyWidget);
        ready_area->setObjectName(QString::fromUtf8("ready_area"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ready_area->sizePolicy().hasHeightForWidth());
        ready_area->setSizePolicy(sizePolicy);
        ready_area->setFrameShape(QFrame::NoFrame);
        ready_area->setFrameShadow(QFrame::Plain);
        ready_area->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ready_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ready_area->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ready_area->setWidgetResizable(false);
        ready_area->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        ready_widget = new QWidget();
        ready_widget->setObjectName(QString::fromUtf8("ready_widget"));
        ready_widget->setGeometry(QRect(0, 0, 200, 317));
        sizePolicy.setHeightForWidth(ready_widget->sizePolicy().hasHeightForWidth());
        ready_widget->setSizePolicy(sizePolicy);
        ready_area->setWidget(ready_widget);

        verticalLayout->addWidget(ready_area);


        retranslateUi(ZrmReadyWidget);

        QMetaObject::connectSlotsByName(ZrmReadyWidget);
    } // setupUi

    void retranslateUi(QWidget *ZrmReadyWidget)
    {
        ZrmReadyWidget->setWindowTitle(QCoreApplication::translate("ZrmReadyWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmReadyWidget: public Ui_ZrmReadyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMREADYWIDGET_H
