/********************************************************************************
** Form generated from reading UI file 'zrmrelaybase.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMRELAYBASE_H
#define UI_ZRMRELAYBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmRelayBase
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *lb_txrx;
    QLabel *lb_error_led;
    QLabel *lb_mode;
    QLabel *lb_curr_dir;
    QLabel *lb_relay_state;

    void setupUi(QWidget *ZrmRelayBase)
    {
        if (ZrmRelayBase->objectName().isEmpty())
            ZrmRelayBase->setObjectName(QString::fromUtf8("ZrmRelayBase"));
        ZrmRelayBase->resize(421, 85);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZrmRelayBase->sizePolicy().hasHeightForWidth());
        ZrmRelayBase->setSizePolicy(sizePolicy);
        ZrmRelayBase->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(ZrmRelayBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_txrx = new QLabel(ZrmRelayBase);
        lb_txrx->setObjectName(QString::fromUtf8("lb_txrx"));
        sizePolicy.setHeightForWidth(lb_txrx->sizePolicy().hasHeightForWidth());
        lb_txrx->setSizePolicy(sizePolicy);
        lb_txrx->setMinimumSize(QSize(24, 24));
        lb_txrx->setMaximumSize(QSize(1000, 1000));
        lb_txrx->setTextFormat(Qt::PlainText);
        lb_txrx->setPixmap(QPixmap(QString::fromUtf8(":/zrm/icons/network-offline.png")));
        lb_txrx->setScaledContents(false);
        lb_txrx->setAlignment(Qt::AlignCenter);
        lb_txrx->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(lb_txrx);

        lb_error_led = new QLabel(ZrmRelayBase);
        lb_error_led->setObjectName(QString::fromUtf8("lb_error_led"));
        lb_error_led->setMinimumSize(QSize(24, 24));
        lb_error_led->setMaximumSize(QSize(1000, 1000));
        lb_error_led->setFrameShape(QFrame::NoFrame);
        lb_error_led->setFrameShadow(QFrame::Plain);
        lb_error_led->setTextFormat(Qt::PlainText);
        lb_error_led->setPixmap(QPixmap(QString::fromUtf8(":/zrm/icons/ledred.png")));
        lb_error_led->setScaledContents(false);
        lb_error_led->setAlignment(Qt::AlignCenter);
        lb_error_led->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(lb_error_led);

        lb_mode = new QLabel(ZrmRelayBase);
        lb_mode->setObjectName(QString::fromUtf8("lb_mode"));
        sizePolicy.setHeightForWidth(lb_mode->sizePolicy().hasHeightForWidth());
        lb_mode->setSizePolicy(sizePolicy);
        lb_mode->setMinimumSize(QSize(24, 24));
        lb_mode->setMaximumSize(QSize(1000, 1000));
        lb_mode->setFrameShape(QFrame::NoFrame);
        lb_mode->setTextFormat(Qt::PlainText);
        lb_mode->setPixmap(QPixmap(QString::fromUtf8(":/zrm/icons/modeU.png")));
        lb_mode->setScaledContents(true);
        lb_mode->setAlignment(Qt::AlignCenter);
        lb_mode->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(lb_mode);

        lb_curr_dir = new QLabel(ZrmRelayBase);
        lb_curr_dir->setObjectName(QString::fromUtf8("lb_curr_dir"));
        sizePolicy.setHeightForWidth(lb_curr_dir->sizePolicy().hasHeightForWidth());
        lb_curr_dir->setSizePolicy(sizePolicy);
        lb_curr_dir->setMinimumSize(QSize(24, 24));
        lb_curr_dir->setMaximumSize(QSize(1000, 1000));
        lb_curr_dir->setFrameShape(QFrame::NoFrame);
        lb_curr_dir->setTextFormat(Qt::PlainText);
        lb_curr_dir->setPixmap(QPixmap(QString::fromUtf8(":/zrm/icons/current_out.png")));
        lb_curr_dir->setScaledContents(true);
        lb_curr_dir->setAlignment(Qt::AlignCenter);
        lb_curr_dir->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(lb_curr_dir);

        lb_relay_state = new QLabel(ZrmRelayBase);
        lb_relay_state->setObjectName(QString::fromUtf8("lb_relay_state"));
        sizePolicy.setHeightForWidth(lb_relay_state->sizePolicy().hasHeightForWidth());
        lb_relay_state->setSizePolicy(sizePolicy);
        lb_relay_state->setMinimumSize(QSize(24, 24));
        lb_relay_state->setMaximumSize(QSize(1000, 1000));
        lb_relay_state->setTextFormat(Qt::PlainText);
        lb_relay_state->setPixmap(QPixmap(QString::fromUtf8(":/zrm/icons/relay_off.png")));
        lb_relay_state->setScaledContents(false);
        lb_relay_state->setAlignment(Qt::AlignCenter);
        lb_relay_state->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(lb_relay_state);


        retranslateUi(ZrmRelayBase);

        QMetaObject::connectSlotsByName(ZrmRelayBase);
    } // setupUi

    void retranslateUi(QWidget *ZrmRelayBase)
    {
        ZrmRelayBase->setWindowTitle(QString());
        lb_txrx->setText(QString());
        lb_error_led->setText(QString());
        lb_mode->setText(QString());
        lb_curr_dir->setText(QString());
        lb_relay_state->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZrmRelayBase: public Ui_ZrmRelayBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMRELAYBASE_H
