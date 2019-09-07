/********************************************************************************
** Form generated from reading UI file 'zrmreport.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZRMREPORT_H
#define UI_ZRMREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZrmReport
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *tbSavePdf;
    QPushButton *tbSaveHtml;
    QPushButton *tbSaveSql;
    QCheckBox *cb_report_details;
    QLabel *label_20;
    QComboBox *ed_report_maker;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_21;
    QComboBox *ed_akb_type;
    QLabel *label_22;
    QComboBox *ed_akb_number;
    QTextEdit *result_text;

    void setupUi(QWidget *ZrmReport)
    {
        if (ZrmReport->objectName().isEmpty())
            ZrmReport->setObjectName(QString::fromUtf8("ZrmReport"));
        ZrmReport->setEnabled(false);
        ZrmReport->resize(396, 304);
        verticalLayout = new QVBoxLayout(ZrmReport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        frame_2 = new QFrame(ZrmReport);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        tbSavePdf = new QPushButton(frame_2);
        tbSavePdf->setObjectName(QString::fromUtf8("tbSavePdf"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/zrm/icons/save_pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSavePdf->setIcon(icon);
        tbSavePdf->setIconSize(QSize(32, 32));

        horizontalLayout_7->addWidget(tbSavePdf);

        tbSaveHtml = new QPushButton(frame_2);
        tbSaveHtml->setObjectName(QString::fromUtf8("tbSaveHtml"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zrm/icons/html.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSaveHtml->setIcon(icon1);
        tbSaveHtml->setIconSize(QSize(32, 32));
        tbSaveHtml->setFlat(true);

        horizontalLayout_7->addWidget(tbSaveHtml);

        tbSaveSql = new QPushButton(frame_2);
        tbSaveSql->setObjectName(QString::fromUtf8("tbSaveSql"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zrm/icons/report_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSaveSql->setIcon(icon2);
        tbSaveSql->setIconSize(QSize(32, 32));

        horizontalLayout_7->addWidget(tbSaveSql);

        cb_report_details = new QCheckBox(frame_2);
        cb_report_details->setObjectName(QString::fromUtf8("cb_report_details"));

        horizontalLayout_7->addWidget(cb_report_details);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_20);

        ed_report_maker = new QComboBox(frame_2);
        ed_report_maker->setObjectName(QString::fromUtf8("ed_report_maker"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ed_report_maker->sizePolicy().hasHeightForWidth());
        ed_report_maker->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(ed_report_maker);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_21 = new QLabel(frame_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_6->addWidget(label_21);

        ed_akb_type = new QComboBox(frame_2);
        ed_akb_type->setObjectName(QString::fromUtf8("ed_akb_type"));
        sizePolicy2.setHeightForWidth(ed_akb_type->sizePolicy().hasHeightForWidth());
        ed_akb_type->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(ed_akb_type);

        label_22 = new QLabel(frame_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_6->addWidget(label_22);

        ed_akb_number = new QComboBox(frame_2);
        ed_akb_number->setObjectName(QString::fromUtf8("ed_akb_number"));
        sizePolicy2.setHeightForWidth(ed_akb_number->sizePolicy().hasHeightForWidth());
        ed_akb_number->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(ed_akb_number);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(frame_2);

        result_text = new QTextEdit(ZrmReport);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setReadOnly(true);

        verticalLayout->addWidget(result_text);

        QWidget::setTabOrder(tbSaveHtml, cb_report_details);
        QWidget::setTabOrder(cb_report_details, result_text);

        retranslateUi(ZrmReport);

        QMetaObject::connectSlotsByName(ZrmReport);
    } // setupUi

    void retranslateUi(QWidget *ZrmReport)
    {
        ZrmReport->setWindowTitle(QCoreApplication::translate("ZrmReport", "Form", nullptr));
#if QT_CONFIG(tooltip)
        tbSavePdf->setToolTip(QCoreApplication::translate("ZrmReport", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 PDF", nullptr));
#endif // QT_CONFIG(tooltip)
        tbSavePdf->setText(QString());
#if QT_CONFIG(tooltip)
        tbSaveHtml->setToolTip(QCoreApplication::translate("ZrmReport", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 HTML", nullptr));
#endif // QT_CONFIG(tooltip)
        tbSaveHtml->setText(QString());
#if QT_CONFIG(tooltip)
        tbSaveSql->setToolTip(QCoreApplication::translate("ZrmReport", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \320\221\320\224", nullptr));
#endif // QT_CONFIG(tooltip)
        tbSaveSql->setText(QString());
        cb_report_details->setText(QCoreApplication::translate("ZrmReport", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\276", nullptr));
        label_20->setText(QCoreApplication::translate("ZrmReport", "\320\244.\320\230.\320\236", nullptr));
        label_21->setText(QCoreApplication::translate("ZrmReport", "\320\242\320\270\320\277 \320\220\320\232\320\221", nullptr));
        label_22->setText(QCoreApplication::translate("ZrmReport", "\320\235\320\276\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZrmReport: public Ui_ZrmReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZRMREPORT_H
