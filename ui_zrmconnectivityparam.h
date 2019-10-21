/********************************************************************************
** Form generated from reading UI file 'zrmconnectivityparam.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMCONNECTIVITYPARAM_H
#define UI_ZRMCONNECTIVITYPARAM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mutli_iodev_params.h>

QT_BEGIN_NAMESPACE

class Ui_ZrmConnectivityParam
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *tool_frame;
    QVBoxLayout *verticalLayout_5;
    QToolButton *tbNewConn;
    QToolButton *tbAddChannel;
    QToolButton *tbRemove;
    QSpacerItem *verticalSpacer_3;
    QTreeWidget *tw_connectivity;
    QStackedWidget *conn_stacked;
    QWidget *conn_page;
    QVBoxLayout *verticalLayout;
    mutli_iodev_params *conn_params;
    QSpacerItem *verticalSpacer;
    QWidget *channel_page;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *channel_type;
    QGroupBox *gb_masakb;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *cell_dU;
    QLabel *label_3;
    QDoubleSpinBox *cell_dT;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ZrmConnectivityParam)
    {
        if (ZrmConnectivityParam->objectName().isEmpty())
            ZrmConnectivityParam->setObjectName(QString::fromUtf8("ZrmConnectivityParam"));
        ZrmConnectivityParam->resize(580, 334);
        verticalLayout_2 = new QVBoxLayout(ZrmConnectivityParam);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(ZrmConnectivityParam);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tool_frame = new QFrame(layoutWidget);
        tool_frame->setObjectName(QString::fromUtf8("tool_frame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tool_frame->sizePolicy().hasHeightForWidth());
        tool_frame->setSizePolicy(sizePolicy);
        tool_frame->setFrameShape(QFrame::StyledPanel);
        tool_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(tool_frame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        tbNewConn = new QToolButton(tool_frame);
        tbNewConn->setObjectName(QString::fromUtf8("tbNewConn"));
        tbNewConn->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tbNewConn->sizePolicy().hasHeightForWidth());
        tbNewConn->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/conn_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbNewConn->setIcon(icon);
        tbNewConn->setIconSize(QSize(48, 48));

        verticalLayout_5->addWidget(tbNewConn);

        tbAddChannel = new QToolButton(tool_frame);
        tbAddChannel->setObjectName(QString::fromUtf8("tbAddChannel"));
        tbAddChannel->setEnabled(false);
        sizePolicy1.setHeightForWidth(tbAddChannel->sizePolicy().hasHeightForWidth());
        tbAddChannel->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/chan_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAddChannel->setIcon(icon1);
        tbAddChannel->setIconSize(QSize(48, 48));

        verticalLayout_5->addWidget(tbAddChannel);

        tbRemove = new QToolButton(tool_frame);
        tbRemove->setObjectName(QString::fromUtf8("tbRemove"));
        tbRemove->setEnabled(false);
        sizePolicy1.setHeightForWidth(tbRemove->sizePolicy().hasHeightForWidth());
        tbRemove->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/conn_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbRemove->setIcon(icon2);
        tbRemove->setIconSize(QSize(48, 48));

        verticalLayout_5->addWidget(tbRemove);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(tool_frame);

        tw_connectivity = new QTreeWidget(layoutWidget);
        tw_connectivity->setObjectName(QString::fromUtf8("tw_connectivity"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tw_connectivity->sizePolicy().hasHeightForWidth());
        tw_connectivity->setSizePolicy(sizePolicy2);
        tw_connectivity->setFrameShape(QFrame::Panel);
        tw_connectivity->setFrameShadow(QFrame::Raised);
        tw_connectivity->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tw_connectivity->setProperty("showDropIndicator", QVariant(true));
        tw_connectivity->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tw_connectivity->setTextElideMode(Qt::ElideMiddle);
        tw_connectivity->setAllColumnsShowFocus(true);

        horizontalLayout->addWidget(tw_connectivity);

        splitter->addWidget(layoutWidget);
        conn_stacked = new QStackedWidget(splitter);
        conn_stacked->setObjectName(QString::fromUtf8("conn_stacked"));
        sizePolicy2.setHeightForWidth(conn_stacked->sizePolicy().hasHeightForWidth());
        conn_stacked->setSizePolicy(sizePolicy2);
        conn_stacked->setFrameShape(QFrame::Panel);
        conn_stacked->setFrameShadow(QFrame::Raised);
        conn_page = new QWidget();
        conn_page->setObjectName(QString::fromUtf8("conn_page"));
        verticalLayout = new QVBoxLayout(conn_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        conn_params = new mutli_iodev_params(conn_page);
        conn_params->setObjectName(QString::fromUtf8("conn_params"));
        conn_params->setEnabled(false);

        verticalLayout->addWidget(conn_params);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        conn_stacked->addWidget(conn_page);
        channel_page = new QWidget();
        channel_page->setObjectName(QString::fromUtf8("channel_page"));
        horizontalLayout_3 = new QHBoxLayout(channel_page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(channel_page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        channel_type = new QComboBox(channel_page);
        channel_type->setObjectName(QString::fromUtf8("channel_type"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(channel_type->sizePolicy().hasHeightForWidth());
        channel_type->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(channel_type);


        verticalLayout_3->addLayout(horizontalLayout_2);

        gb_masakb = new QGroupBox(channel_page);
        gb_masakb->setObjectName(QString::fromUtf8("gb_masakb"));
        verticalLayout_4 = new QVBoxLayout(gb_masakb);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(gb_masakb);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        cell_dU = new QDoubleSpinBox(gb_masakb);
        cell_dU->setObjectName(QString::fromUtf8("cell_dU"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cell_dU);

        label_3 = new QLabel(gb_masakb);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        cell_dT = new QDoubleSpinBox(gb_masakb);
        cell_dT->setObjectName(QString::fromUtf8("cell_dT"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cell_dT);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout_3->addWidget(gb_masakb);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(41, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        conn_stacked->addWidget(channel_page);
        splitter->addWidget(conn_stacked);

        verticalLayout_2->addWidget(splitter);

        QWidget::setTabOrder(tw_connectivity, channel_type);
        QWidget::setTabOrder(channel_type, cell_dU);
        QWidget::setTabOrder(cell_dU, cell_dT);

        retranslateUi(ZrmConnectivityParam);

        conn_stacked->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ZrmConnectivityParam);
    } // setupUi

    void retranslateUi(QWidget *ZrmConnectivityParam)
    {
        ZrmConnectivityParam->setWindowTitle(QCoreApplication::translate("ZrmConnectivityParam", "Form", nullptr));
#if QT_CONFIG(tooltip)
        tbNewConn->setToolTip(QCoreApplication::translate("ZrmConnectivityParam", "<html><head/><body><p>\320\224\320\276\320\261\320\260\320\262\320\260\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbNewConn->setText(QCoreApplication::translate("ZrmConnectivityParam", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(tooltip)
        tbAddChannel->setToolTip(QCoreApplication::translate("ZrmConnectivityParam", "<html><head/><body><p>\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbAddChannel->setText(QCoreApplication::translate("ZrmConnectivityParam", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
#if QT_CONFIG(tooltip)
        tbRemove->setToolTip(QCoreApplication::translate("ZrmConnectivityParam", "<html><head/><body><p>\320\243\320\264\320\260\320\273\320\270\321\202\321\214</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        tbRemove->setText(QCoreApplication::translate("ZrmConnectivityParam", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\276", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tw_connectivity->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("ZrmConnectivityParam", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ZrmConnectivityParam", "\320\230\320\274\321\217", nullptr));
        label->setText(QCoreApplication::translate("ZrmConnectivityParam", "\320\242\320\270\320\277", nullptr));
        gb_masakb->setTitle(QCoreApplication::translate("ZrmConnectivityParam", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\234\320\220\320\241\320\220\320\232\320\221", nullptr));
        label_2->setText(QCoreApplication::translate("ZrmConnectivityParam", "dU", nullptr));
        label_3->setText(QCoreApplication::translate("ZrmConnectivityParam", "dU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmConnectivityParam: public Ui_ZrmConnectivityParam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMCONNECTIVITYPARAM_H
