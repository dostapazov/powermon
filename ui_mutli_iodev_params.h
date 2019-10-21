/********************************************************************************
** Form generated from reading UI file 'mutli_iodev_params.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUTLI_IODEV_PARAMS_H
#define UI_MUTLI_IODEV_PARAMS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mutli_iodev_params
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *type_frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *tbTcp;
    QPushButton *tbUdp;
    QPushButton *tbSerial;
    QPushButton *tbFtdi;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *tbApply;
    QPushButton *tbUndo;
    QGroupBox *gb_net_params;
    QGridLayout *gridLayout;
    QLabel *host_addr_label;
    QLineEdit *host_addr;
    QLabel *host_port_label;
    QSpinBox *host_port;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gb_serial_device;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *dev_name;
    QLabel *label_5;
    QComboBox *cbBaud;
    QComboBox *cbDataSize;
    QSpinBox *sbStopBits;
    QHBoxLayout *horizontalLayout;
    QGroupBox *gb_serial_parity;
    QGridLayout *gridLayout_2;
    QRadioButton *rb_parity_none;
    QRadioButton *rb_parity_even;
    QRadioButton *rb_parity_odd;
    QVBoxLayout *verticalLayout;
    QGroupBox *gb_flow_serial;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *rb_flow_serial_none;
    QRadioButton *rb_flow_serial_hardware;
    QRadioButton *rb_flow_serial_software;
    QGroupBox *gb_flow_ftdi;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rb_flow_none;
    QRadioButton *rb_flow_rts_cts;
    QRadioButton *rb_flow_dtr_dsr;
    QRadioButton *rb_flow_xon_xof;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QButtonGroup *type_connection;

    void setupUi(QWidget *mutli_iodev_params)
    {
        if (mutli_iodev_params->objectName().isEmpty())
            mutli_iodev_params->setObjectName(QString::fromUtf8("mutli_iodev_params"));
        mutli_iodev_params->resize(416, 360);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mutli_iodev_params->sizePolicy().hasHeightForWidth());
        mutli_iodev_params->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(mutli_iodev_params);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        type_frame = new QFrame(mutli_iodev_params);
        type_frame->setObjectName(QString::fromUtf8("type_frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(type_frame->sizePolicy().hasHeightForWidth());
        type_frame->setSizePolicy(sizePolicy1);
        type_frame->setFrameShape(QFrame::StyledPanel);
        type_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(type_frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tbTcp = new QPushButton(type_frame);
        type_connection = new QButtonGroup(mutli_iodev_params);
        type_connection->setObjectName(QString::fromUtf8("type_connection"));
        type_connection->addButton(tbTcp);
        tbTcp->setObjectName(QString::fromUtf8("tbTcp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/multi_iodev_params/tcp"), QSize(), QIcon::Normal, QIcon::Off);
        tbTcp->setIcon(icon);
        tbTcp->setIconSize(QSize(32, 32));
        tbTcp->setCheckable(true);
        tbTcp->setAutoExclusive(true);
        tbTcp->setFlat(true);

        horizontalLayout_2->addWidget(tbTcp);

        tbUdp = new QPushButton(type_frame);
        type_connection->addButton(tbUdp);
        tbUdp->setObjectName(QString::fromUtf8("tbUdp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/multi_iodev_params/udp"), QSize(), QIcon::Normal, QIcon::Off);
        tbUdp->setIcon(icon1);
        tbUdp->setIconSize(QSize(32, 32));
        tbUdp->setCheckable(true);
        tbUdp->setAutoExclusive(true);
        tbUdp->setFlat(true);

        horizontalLayout_2->addWidget(tbUdp);

        tbSerial = new QPushButton(type_frame);
        type_connection->addButton(tbSerial);
        tbSerial->setObjectName(QString::fromUtf8("tbSerial"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/multi_iodev_params/serial"), QSize(), QIcon::Normal, QIcon::Off);
        tbSerial->setIcon(icon2);
        tbSerial->setIconSize(QSize(32, 32));
        tbSerial->setCheckable(true);
        tbSerial->setAutoExclusive(true);
        tbSerial->setFlat(true);

        horizontalLayout_2->addWidget(tbSerial);

        tbFtdi = new QPushButton(type_frame);
        type_connection->addButton(tbFtdi);
        tbFtdi->setObjectName(QString::fromUtf8("tbFtdi"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/multi_iodev_params/usb"), QSize(), QIcon::Normal, QIcon::Off);
        tbFtdi->setIcon(icon3);
        tbFtdi->setIconSize(QSize(32, 32));
        tbFtdi->setCheckable(true);
        tbFtdi->setAutoExclusive(true);
        tbFtdi->setFlat(true);

        horizontalLayout_2->addWidget(tbFtdi);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tbApply = new QPushButton(type_frame);
        tbApply->setObjectName(QString::fromUtf8("tbApply"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/multi_iodev_params/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbApply->setIcon(icon4);
        tbApply->setIconSize(QSize(32, 32));
        tbApply->setFlat(true);

        horizontalLayout_2->addWidget(tbApply);

        tbUndo = new QPushButton(type_frame);
        tbUndo->setObjectName(QString::fromUtf8("tbUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/multi_iodev_params/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbUndo->setIcon(icon5);
        tbUndo->setIconSize(QSize(32, 32));
        tbUndo->setFlat(true);

        horizontalLayout_2->addWidget(tbUndo);


        verticalLayout_5->addWidget(type_frame);

        gb_net_params = new QGroupBox(mutli_iodev_params);
        gb_net_params->setObjectName(QString::fromUtf8("gb_net_params"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gb_net_params->sizePolicy().hasHeightForWidth());
        gb_net_params->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(gb_net_params);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        host_addr_label = new QLabel(gb_net_params);
        host_addr_label->setObjectName(QString::fromUtf8("host_addr_label"));

        gridLayout->addWidget(host_addr_label, 0, 0, 1, 1);

        host_addr = new QLineEdit(gb_net_params);
        host_addr->setObjectName(QString::fromUtf8("host_addr"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(host_addr->sizePolicy().hasHeightForWidth());
        host_addr->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(host_addr, 0, 1, 1, 2);

        host_port_label = new QLabel(gb_net_params);
        host_port_label->setObjectName(QString::fromUtf8("host_port_label"));

        gridLayout->addWidget(host_port_label, 1, 0, 1, 1);

        host_port = new QSpinBox(gb_net_params);
        host_port->setObjectName(QString::fromUtf8("host_port"));
        host_port->setMaximum(65535);

        gridLayout->addWidget(host_port, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout_5->addWidget(gb_net_params);

        gb_serial_device = new QGroupBox(mutli_iodev_params);
        gb_serial_device->setObjectName(QString::fromUtf8("gb_serial_device"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(gb_serial_device->sizePolicy().hasHeightForWidth());
        gb_serial_device->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(gb_serial_device);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(4, 4, 4, 4);
        dev_name = new QComboBox(gb_serial_device);
        dev_name->setObjectName(QString::fromUtf8("dev_name"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dev_name->sizePolicy().hasHeightForWidth());
        dev_name->setSizePolicy(sizePolicy5);
        dev_name->setEditable(true);
        dev_name->setMaxVisibleItems(8);

        horizontalLayout_9->addWidget(dev_name);

        label_5 = new QLabel(gb_serial_device);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);

        horizontalLayout_9->addWidget(label_5);

        cbBaud = new QComboBox(gb_serial_device);
        cbBaud->setObjectName(QString::fromUtf8("cbBaud"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cbBaud->sizePolicy().hasHeightForWidth());
        cbBaud->setSizePolicy(sizePolicy6);
        cbBaud->setEditable(true);

        horizontalLayout_9->addWidget(cbBaud);

        cbDataSize = new QComboBox(gb_serial_device);
        cbDataSize->addItem(QString());
        cbDataSize->addItem(QString());
        cbDataSize->setObjectName(QString::fromUtf8("cbDataSize"));

        horizontalLayout_9->addWidget(cbDataSize);

        sbStopBits = new QSpinBox(gb_serial_device);
        sbStopBits->setObjectName(QString::fromUtf8("sbStopBits"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(sbStopBits->sizePolicy().hasHeightForWidth());
        sbStopBits->setSizePolicy(sizePolicy7);
        sbStopBits->setFrame(true);
        sbStopBits->setMinimum(1);
        sbStopBits->setMaximum(2);

        horizontalLayout_9->addWidget(sbStopBits);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gb_serial_parity = new QGroupBox(gb_serial_device);
        gb_serial_parity->setObjectName(QString::fromUtf8("gb_serial_parity"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(gb_serial_parity->sizePolicy().hasHeightForWidth());
        gb_serial_parity->setSizePolicy(sizePolicy8);
        gridLayout_2 = new QGridLayout(gb_serial_parity);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rb_parity_none = new QRadioButton(gb_serial_parity);
        rb_parity_none->setObjectName(QString::fromUtf8("rb_parity_none"));
        rb_parity_none->setChecked(true);

        gridLayout_2->addWidget(rb_parity_none, 0, 0, 1, 1);

        rb_parity_even = new QRadioButton(gb_serial_parity);
        rb_parity_even->setObjectName(QString::fromUtf8("rb_parity_even"));

        gridLayout_2->addWidget(rb_parity_even, 1, 0, 1, 1);

        rb_parity_odd = new QRadioButton(gb_serial_parity);
        rb_parity_odd->setObjectName(QString::fromUtf8("rb_parity_odd"));
        rb_parity_odd->setChecked(false);

        gridLayout_2->addWidget(rb_parity_odd, 2, 0, 1, 1);


        horizontalLayout->addWidget(gb_serial_parity);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gb_flow_serial = new QGroupBox(gb_serial_device);
        gb_flow_serial->setObjectName(QString::fromUtf8("gb_flow_serial"));
        sizePolicy8.setHeightForWidth(gb_flow_serial->sizePolicy().hasHeightForWidth());
        gb_flow_serial->setSizePolicy(sizePolicy8);
        horizontalLayout_8 = new QHBoxLayout(gb_flow_serial);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(9, 9, 9, 9);
        rb_flow_serial_none = new QRadioButton(gb_flow_serial);
        rb_flow_serial_none->setObjectName(QString::fromUtf8("rb_flow_serial_none"));
        rb_flow_serial_none->setChecked(true);

        horizontalLayout_8->addWidget(rb_flow_serial_none);

        rb_flow_serial_hardware = new QRadioButton(gb_flow_serial);
        rb_flow_serial_hardware->setObjectName(QString::fromUtf8("rb_flow_serial_hardware"));

        horizontalLayout_8->addWidget(rb_flow_serial_hardware);

        rb_flow_serial_software = new QRadioButton(gb_flow_serial);
        rb_flow_serial_software->setObjectName(QString::fromUtf8("rb_flow_serial_software"));

        horizontalLayout_8->addWidget(rb_flow_serial_software);


        verticalLayout->addWidget(gb_flow_serial);

        gb_flow_ftdi = new QGroupBox(gb_serial_device);
        gb_flow_ftdi->setObjectName(QString::fromUtf8("gb_flow_ftdi"));
        sizePolicy8.setHeightForWidth(gb_flow_ftdi->sizePolicy().hasHeightForWidth());
        gb_flow_ftdi->setSizePolicy(sizePolicy8);
        horizontalLayout_6 = new QHBoxLayout(gb_flow_ftdi);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(9, 9, 9, 9);
        rb_flow_none = new QRadioButton(gb_flow_ftdi);
        rb_flow_none->setObjectName(QString::fromUtf8("rb_flow_none"));
        rb_flow_none->setChecked(true);

        horizontalLayout_6->addWidget(rb_flow_none);

        rb_flow_rts_cts = new QRadioButton(gb_flow_ftdi);
        rb_flow_rts_cts->setObjectName(QString::fromUtf8("rb_flow_rts_cts"));

        horizontalLayout_6->addWidget(rb_flow_rts_cts);

        rb_flow_dtr_dsr = new QRadioButton(gb_flow_ftdi);
        rb_flow_dtr_dsr->setObjectName(QString::fromUtf8("rb_flow_dtr_dsr"));

        horizontalLayout_6->addWidget(rb_flow_dtr_dsr);

        rb_flow_xon_xof = new QRadioButton(gb_flow_ftdi);
        rb_flow_xon_xof->setObjectName(QString::fromUtf8("rb_flow_xon_xof"));

        horizontalLayout_6->addWidget(rb_flow_xon_xof);


        verticalLayout->addWidget(gb_flow_ftdi);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(gb_serial_device);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        QWidget::setTabOrder(host_addr, host_port);
        QWidget::setTabOrder(host_port, cbBaud);
        QWidget::setTabOrder(cbBaud, cbDataSize);
        QWidget::setTabOrder(cbDataSize, sbStopBits);
        QWidget::setTabOrder(sbStopBits, rb_parity_none);
        QWidget::setTabOrder(rb_parity_none, rb_parity_even);
        QWidget::setTabOrder(rb_parity_even, rb_parity_odd);
        QWidget::setTabOrder(rb_parity_odd, rb_flow_serial_none);
        QWidget::setTabOrder(rb_flow_serial_none, rb_flow_serial_hardware);
        QWidget::setTabOrder(rb_flow_serial_hardware, rb_flow_serial_software);
        QWidget::setTabOrder(rb_flow_serial_software, rb_flow_none);
        QWidget::setTabOrder(rb_flow_none, rb_flow_rts_cts);
        QWidget::setTabOrder(rb_flow_rts_cts, rb_flow_dtr_dsr);
        QWidget::setTabOrder(rb_flow_dtr_dsr, rb_flow_xon_xof);

        retranslateUi(mutli_iodev_params);

        QMetaObject::connectSlotsByName(mutli_iodev_params);
    } // setupUi

    void retranslateUi(QWidget *mutli_iodev_params)
    {
        mutli_iodev_params->setWindowTitle(QCoreApplication::translate("mutli_iodev_params", "Form", nullptr));
        tbTcp->setText(QString());
        tbUdp->setText(QString());
        tbSerial->setText(QString());
        tbFtdi->setText(QString());
        tbApply->setText(QString());
        tbUndo->setText(QString());
        gb_net_params->setTitle(QCoreApplication::translate("mutli_iodev_params", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        host_addr_label->setText(QCoreApplication::translate("mutli_iodev_params", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        host_port_label->setText(QCoreApplication::translate("mutli_iodev_params", "\320\237\320\276\321\200\321\202", nullptr));
        gb_serial_device->setTitle(QCoreApplication::translate("mutli_iodev_params", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("mutli_iodev_params", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        cbDataSize->setItemText(0, QCoreApplication::translate("mutli_iodev_params", "8 bit", nullptr));
        cbDataSize->setItemText(1, QCoreApplication::translate("mutli_iodev_params", "7 bit", nullptr));

        sbStopBits->setSuffix(QCoreApplication::translate("mutli_iodev_params", " \321\201\321\202\320\276\320\277 \320\261\320\270\321\202", nullptr));
        gb_serial_parity->setTitle(QCoreApplication::translate("mutli_iodev_params", "\320\247\320\265\321\202\320\275\320\276\321\201\321\202\321\214", nullptr));
        rb_parity_none->setText(QCoreApplication::translate("mutli_iodev_params", "\320\235\320\265\321\202", nullptr));
        rb_parity_even->setText(QCoreApplication::translate("mutli_iodev_params", "\320\247\321\221\321\202", nullptr));
        rb_parity_odd->setText(QCoreApplication::translate("mutli_iodev_params", "\320\235\320\265\321\207\320\265\321\202", nullptr));
        gb_flow_serial->setTitle(QCoreApplication::translate("mutli_iodev_params", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214", nullptr));
        rb_flow_serial_none->setText(QCoreApplication::translate("mutli_iodev_params", "\320\275\320\265\321\202", nullptr));
        rb_flow_serial_hardware->setText(QCoreApplication::translate("mutli_iodev_params", "\320\220\320\277\320\277\320\260\321\200\320\260\321\202\320\275\321\213\320\271", nullptr));
        rb_flow_serial_software->setText(QCoreApplication::translate("mutli_iodev_params", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\321\213\320\271", nullptr));
        gb_flow_ftdi->setTitle(QCoreApplication::translate("mutli_iodev_params", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214", nullptr));
        rb_flow_none->setText(QCoreApplication::translate("mutli_iodev_params", "\320\275\320\265\321\202", nullptr));
        rb_flow_rts_cts->setText(QCoreApplication::translate("mutli_iodev_params", "RTS+CTS", nullptr));
        rb_flow_dtr_dsr->setText(QCoreApplication::translate("mutli_iodev_params", "DTR+DSR", nullptr));
        rb_flow_xon_xof->setText(QCoreApplication::translate("mutli_iodev_params", "XON XOF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mutli_iodev_params: public Ui_mutli_iodev_params {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUTLI_IODEV_PARAMS_H
