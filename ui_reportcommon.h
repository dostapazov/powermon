/********************************************************************************
** Form generated from reading UI file 'reportcommon.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTCOMMON_H
#define UI_REPORTCOMMON_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportCommon
{
public:
    QAction *actUserNew;
    QAction *actUserRevert;
    QAction *actUserApply;
    QAction *actUserMarkDel;
    QAction *actTypeNew;
    QAction *actTypeRevert;
    QAction *actTypeApply;
    QAction *actTypeMarkDel;
    QAction *actNumberNew;
    QAction *actNumberRevert;
    QAction *actNumberApply;
    QAction *actNumberMarkDel;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *gb_akb_type;
    QHBoxLayout *horizontalLayout_2;
    QFrame *fr_types_btn;
    QVBoxLayout *verticalLayout_2;
    QToolButton *bTypesNew;
    QToolButton *bTypesMarkDel;
    QSpacerItem *verticalSpacer_2;
    QToolButton *tbUsersPage;
    QToolButton *tbAnalizePage;
    QTableView *TypesTable;
    QGroupBox *gb_akb_list;
    QHBoxLayout *horizontalLayout;
    QFrame *fr_numbers_btn;
    QVBoxLayout *verticalLayout;
    QToolButton *bNumbersNew;
    QToolButton *bNumbersMarkDel;
    QSpacerItem *verticalSpacer;
    QTableView *NumbersTable;
    QStackedWidget *stackedWidget;
    QWidget *users_page;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTableView *UsersTable;
    QFrame *fr_users_btn;
    QVBoxLayout *verticalLayout_4;
    QToolButton *bUserNew;
    QToolButton *bUserMarkDel;
    QSpacerItem *verticalSpacer_4;
    QWidget *page;
    QToolButton *bTypesApply;
    QToolButton *bTypesRevert;
    QToolButton *bNumbersApply;
    QToolButton *bNumbersRevert;
    QToolButton *bUserRevert;
    QToolButton *bUserApply;
    QWidget *analize_page;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bReadReports;
    QDateEdit *dtm_beg;
    QDateEdit *dtm_end;
    QSpacerItem *horizontalSpacer;
    QPushButton *bAllTimes;
    QSplitter *splitter_3;
    QTableView *ReportTable;
    QTableView *ReportDetailTable;

    void setupUi(QWidget *ReportCommon)
    {
        if (ReportCommon->objectName().isEmpty())
            ReportCommon->setObjectName(QString::fromUtf8("ReportCommon"));
        ReportCommon->resize(794, 437);
        actUserNew = new QAction(ReportCommon);
        actUserNew->setObjectName(QString::fromUtf8("actUserNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/icons/new_user.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUserNew->setIcon(icon);
        actUserRevert = new QAction(ReportCommon);
        actUserRevert->setObjectName(QString::fromUtf8("actUserRevert"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/data/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUserRevert->setIcon(icon1);
        actUserApply = new QAction(ReportCommon);
        actUserApply->setObjectName(QString::fromUtf8("actUserApply"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/data/icons/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUserApply->setIcon(icon2);
        actUserMarkDel = new QAction(ReportCommon);
        actUserMarkDel->setObjectName(QString::fromUtf8("actUserMarkDel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/data/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actUserMarkDel->setIcon(icon3);
        actTypeNew = new QAction(ReportCommon);
        actTypeNew->setObjectName(QString::fromUtf8("actTypeNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/data/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTypeNew->setIcon(icon4);
        actTypeRevert = new QAction(ReportCommon);
        actTypeRevert->setObjectName(QString::fromUtf8("actTypeRevert"));
        actTypeRevert->setIcon(icon1);
        actTypeApply = new QAction(ReportCommon);
        actTypeApply->setObjectName(QString::fromUtf8("actTypeApply"));
        actTypeApply->setIcon(icon2);
        actTypeMarkDel = new QAction(ReportCommon);
        actTypeMarkDel->setObjectName(QString::fromUtf8("actTypeMarkDel"));
        actTypeMarkDel->setIcon(icon3);
        actNumberNew = new QAction(ReportCommon);
        actNumberNew->setObjectName(QString::fromUtf8("actNumberNew"));
        actNumberNew->setIcon(icon4);
        actNumberRevert = new QAction(ReportCommon);
        actNumberRevert->setObjectName(QString::fromUtf8("actNumberRevert"));
        actNumberRevert->setIcon(icon1);
        actNumberApply = new QAction(ReportCommon);
        actNumberApply->setObjectName(QString::fromUtf8("actNumberApply"));
        actNumberApply->setIcon(icon2);
        actNumberMarkDel = new QAction(ReportCommon);
        actNumberMarkDel->setObjectName(QString::fromUtf8("actNumberMarkDel"));
        actNumberMarkDel->setIcon(icon3);
        verticalLayout_3 = new QVBoxLayout(ReportCommon);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinAndMaxSize);
        splitter_2 = new QSplitter(ReportCommon);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter_2->sizePolicy().hasHeightForWidth());
        splitter_2->setSizePolicy(sizePolicy);
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        gb_akb_type = new QGroupBox(splitter);
        gb_akb_type->setObjectName(QString::fromUtf8("gb_akb_type"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_akb_type->sizePolicy().hasHeightForWidth());
        gb_akb_type->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(gb_akb_type);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        fr_types_btn = new QFrame(gb_akb_type);
        fr_types_btn->setObjectName(QString::fromUtf8("fr_types_btn"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fr_types_btn->sizePolicy().hasHeightForWidth());
        fr_types_btn->setSizePolicy(sizePolicy2);
        fr_types_btn->setFrameShape(QFrame::StyledPanel);
        fr_types_btn->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(fr_types_btn);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        bTypesNew = new QToolButton(fr_types_btn);
        bTypesNew->setObjectName(QString::fromUtf8("bTypesNew"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bTypesNew->sizePolicy().hasHeightForWidth());
        bTypesNew->setSizePolicy(sizePolicy3);
        bTypesNew->setIconSize(QSize(48, 48));

        verticalLayout_2->addWidget(bTypesNew);

        bTypesMarkDel = new QToolButton(fr_types_btn);
        bTypesMarkDel->setObjectName(QString::fromUtf8("bTypesMarkDel"));
        sizePolicy3.setHeightForWidth(bTypesMarkDel->sizePolicy().hasHeightForWidth());
        bTypesMarkDel->setSizePolicy(sizePolicy3);
        bTypesMarkDel->setIconSize(QSize(48, 48));

        verticalLayout_2->addWidget(bTypesMarkDel);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tbUsersPage = new QToolButton(fr_types_btn);
        tbUsersPage->setObjectName(QString::fromUtf8("tbUsersPage"));
        sizePolicy3.setHeightForWidth(tbUsersPage->sizePolicy().hasHeightForWidth());
        tbUsersPage->setSizePolicy(sizePolicy3);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/zrm/icons/report.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbUsersPage->setIcon(icon5);
        tbUsersPage->setIconSize(QSize(48, 48));
        tbUsersPage->setCheckable(true);
        tbUsersPage->setChecked(true);
        tbUsersPage->setAutoExclusive(true);

        verticalLayout_2->addWidget(tbUsersPage);

        tbAnalizePage = new QToolButton(fr_types_btn);
        tbAnalizePage->setObjectName(QString::fromUtf8("tbAnalizePage"));
        sizePolicy3.setHeightForWidth(tbAnalizePage->sizePolicy().hasHeightForWidth());
        tbAnalizePage->setSizePolicy(sizePolicy3);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/data/icons/system-users.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbAnalizePage->setIcon(icon6);
        tbAnalizePage->setIconSize(QSize(48, 48));
        tbAnalizePage->setCheckable(true);
        tbAnalizePage->setAutoExclusive(true);

        verticalLayout_2->addWidget(tbAnalizePage);


        horizontalLayout_2->addWidget(fr_types_btn);

        TypesTable = new QTableView(gb_akb_type);
        TypesTable->setObjectName(QString::fromUtf8("TypesTable"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TypesTable->sizePolicy().hasHeightForWidth());
        TypesTable->setSizePolicy(sizePolicy4);
        TypesTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);

        horizontalLayout_2->addWidget(TypesTable);

        splitter->addWidget(gb_akb_type);
        gb_akb_list = new QGroupBox(splitter);
        gb_akb_list->setObjectName(QString::fromUtf8("gb_akb_list"));
        sizePolicy2.setHeightForWidth(gb_akb_list->sizePolicy().hasHeightForWidth());
        gb_akb_list->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(gb_akb_list);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        fr_numbers_btn = new QFrame(gb_akb_list);
        fr_numbers_btn->setObjectName(QString::fromUtf8("fr_numbers_btn"));
        sizePolicy2.setHeightForWidth(fr_numbers_btn->sizePolicy().hasHeightForWidth());
        fr_numbers_btn->setSizePolicy(sizePolicy2);
        fr_numbers_btn->setFrameShape(QFrame::StyledPanel);
        fr_numbers_btn->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(fr_numbers_btn);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        bNumbersNew = new QToolButton(fr_numbers_btn);
        bNumbersNew->setObjectName(QString::fromUtf8("bNumbersNew"));
        sizePolicy3.setHeightForWidth(bNumbersNew->sizePolicy().hasHeightForWidth());
        bNumbersNew->setSizePolicy(sizePolicy3);
        bNumbersNew->setIconSize(QSize(48, 48));

        verticalLayout->addWidget(bNumbersNew);

        bNumbersMarkDel = new QToolButton(fr_numbers_btn);
        bNumbersMarkDel->setObjectName(QString::fromUtf8("bNumbersMarkDel"));
        sizePolicy3.setHeightForWidth(bNumbersMarkDel->sizePolicy().hasHeightForWidth());
        bNumbersMarkDel->setSizePolicy(sizePolicy3);
        bNumbersMarkDel->setIconSize(QSize(48, 48));

        verticalLayout->addWidget(bNumbersMarkDel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(fr_numbers_btn);

        NumbersTable = new QTableView(gb_akb_list);
        NumbersTable->setObjectName(QString::fromUtf8("NumbersTable"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(NumbersTable->sizePolicy().hasHeightForWidth());
        NumbersTable->setSizePolicy(sizePolicy5);
        NumbersTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);

        horizontalLayout->addWidget(NumbersTable);

        splitter->addWidget(gb_akb_list);
        splitter_2->addWidget(splitter);
        stackedWidget = new QStackedWidget(splitter_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy6);
        users_page = new QWidget();
        users_page->setObjectName(QString::fromUtf8("users_page"));
        verticalLayout_5 = new QVBoxLayout(users_page);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(users_page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        UsersTable = new QTableView(groupBox);
        UsersTable->setObjectName(QString::fromUtf8("UsersTable"));
        UsersTable->setFrameShape(QFrame::StyledPanel);
        UsersTable->setFrameShadow(QFrame::Sunken);
        UsersTable->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        UsersTable->setSortingEnabled(true);

        horizontalLayout_3->addWidget(UsersTable);

        fr_users_btn = new QFrame(groupBox);
        fr_users_btn->setObjectName(QString::fromUtf8("fr_users_btn"));
        sizePolicy1.setHeightForWidth(fr_users_btn->sizePolicy().hasHeightForWidth());
        fr_users_btn->setSizePolicy(sizePolicy1);
        fr_users_btn->setFrameShape(QFrame::StyledPanel);
        fr_users_btn->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(fr_users_btn);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        bUserNew = new QToolButton(fr_users_btn);
        bUserNew->setObjectName(QString::fromUtf8("bUserNew"));
        sizePolicy3.setHeightForWidth(bUserNew->sizePolicy().hasHeightForWidth());
        bUserNew->setSizePolicy(sizePolicy3);
        bUserNew->setIconSize(QSize(48, 48));

        verticalLayout_4->addWidget(bUserNew);

        bUserMarkDel = new QToolButton(fr_users_btn);
        bUserMarkDel->setObjectName(QString::fromUtf8("bUserMarkDel"));
        sizePolicy3.setHeightForWidth(bUserMarkDel->sizePolicy().hasHeightForWidth());
        bUserMarkDel->setSizePolicy(sizePolicy3);
        bUserMarkDel->setIconSize(QSize(48, 48));

        verticalLayout_4->addWidget(bUserMarkDel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_3->addWidget(fr_users_btn);


        verticalLayout_5->addWidget(groupBox);

        stackedWidget->addWidget(users_page);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        bTypesApply = new QToolButton(page);
        bTypesApply->setObjectName(QString::fromUtf8("bTypesApply"));
        bTypesApply->setGeometry(QRect(20, 40, 55, 54));
        sizePolicy3.setHeightForWidth(bTypesApply->sizePolicy().hasHeightForWidth());
        bTypesApply->setSizePolicy(sizePolicy3);
        bTypesApply->setIconSize(QSize(48, 48));
        bTypesRevert = new QToolButton(page);
        bTypesRevert->setObjectName(QString::fromUtf8("bTypesRevert"));
        bTypesRevert->setGeometry(QRect(20, 100, 55, 54));
        sizePolicy3.setHeightForWidth(bTypesRevert->sizePolicy().hasHeightForWidth());
        bTypesRevert->setSizePolicy(sizePolicy3);
        bTypesRevert->setIconSize(QSize(48, 48));
        bNumbersApply = new QToolButton(page);
        bNumbersApply->setObjectName(QString::fromUtf8("bNumbersApply"));
        bNumbersApply->setGeometry(QRect(120, 40, 55, 54));
        sizePolicy3.setHeightForWidth(bNumbersApply->sizePolicy().hasHeightForWidth());
        bNumbersApply->setSizePolicy(sizePolicy3);
        bNumbersApply->setIconSize(QSize(48, 48));
        bNumbersRevert = new QToolButton(page);
        bNumbersRevert->setObjectName(QString::fromUtf8("bNumbersRevert"));
        bNumbersRevert->setGeometry(QRect(120, 100, 55, 54));
        sizePolicy3.setHeightForWidth(bNumbersRevert->sizePolicy().hasHeightForWidth());
        bNumbersRevert->setSizePolicy(sizePolicy3);
        bNumbersRevert->setIconSize(QSize(48, 48));
        bUserRevert = new QToolButton(page);
        bUserRevert->setObjectName(QString::fromUtf8("bUserRevert"));
        bUserRevert->setGeometry(QRect(220, 100, 55, 54));
        sizePolicy3.setHeightForWidth(bUserRevert->sizePolicy().hasHeightForWidth());
        bUserRevert->setSizePolicy(sizePolicy3);
        bUserRevert->setIconSize(QSize(48, 48));
        bUserApply = new QToolButton(page);
        bUserApply->setObjectName(QString::fromUtf8("bUserApply"));
        bUserApply->setGeometry(QRect(220, 40, 55, 54));
        sizePolicy3.setHeightForWidth(bUserApply->sizePolicy().hasHeightForWidth());
        bUserApply->setSizePolicy(sizePolicy3);
        bUserApply->setIconSize(QSize(48, 48));
        stackedWidget->addWidget(page);
        analize_page = new QWidget();
        analize_page->setObjectName(QString::fromUtf8("analize_page"));
        verticalLayout_7 = new QVBoxLayout(analize_page);
        verticalLayout_7->setSpacing(4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(4, 4, 4, 4);
        groupBox_2 = new QGroupBox(analize_page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bReadReports = new QPushButton(groupBox_3);
        bReadReports->setObjectName(QString::fromUtf8("bReadReports"));
        bReadReports->setIcon(icon1);
        bReadReports->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(bReadReports);

        dtm_beg = new QDateEdit(groupBox_3);
        dtm_beg->setObjectName(QString::fromUtf8("dtm_beg"));
        dtm_beg->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dtm_beg->setMaximumTime(QTime(23, 59, 59));
        dtm_beg->setMinimumTime(QTime(0, 0, 0));
        dtm_beg->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dtm_beg);

        dtm_end = new QDateEdit(groupBox_3);
        dtm_end->setObjectName(QString::fromUtf8("dtm_end"));
        dtm_end->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dtm_end->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dtm_end);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        bAllTimes = new QPushButton(groupBox_3);
        bAllTimes->setObjectName(QString::fromUtf8("bAllTimes"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/icons/checkbox_unchecked_focus.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/icons/icons/checkbox_checked_focus.png"), QSize(), QIcon::Normal, QIcon::On);
        bAllTimes->setIcon(icon7);
        bAllTimes->setIconSize(QSize(24, 24));
        bAllTimes->setCheckable(true);

        horizontalLayout_4->addWidget(bAllTimes);


        verticalLayout_6->addWidget(groupBox_3);

        splitter_3 = new QSplitter(groupBox_2);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        ReportTable = new QTableView(splitter_3);
        ReportTable->setObjectName(QString::fromUtf8("ReportTable"));
        ReportTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter_3->addWidget(ReportTable);
        ReportDetailTable = new QTableView(splitter_3);
        ReportDetailTable->setObjectName(QString::fromUtf8("ReportDetailTable"));
        ReportDetailTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter_3->addWidget(ReportDetailTable);

        verticalLayout_6->addWidget(splitter_3);


        verticalLayout_7->addWidget(groupBox_2);

        stackedWidget->addWidget(analize_page);
        splitter_2->addWidget(stackedWidget);

        verticalLayout_3->addWidget(splitter_2);

        QWidget::setTabOrder(bTypesNew, bTypesMarkDel);
        QWidget::setTabOrder(bTypesMarkDel, TypesTable);
        QWidget::setTabOrder(TypesTable, tbUsersPage);
        QWidget::setTabOrder(tbUsersPage, tbAnalizePage);
        QWidget::setTabOrder(tbAnalizePage, bNumbersNew);
        QWidget::setTabOrder(bNumbersNew, bNumbersMarkDel);
        QWidget::setTabOrder(bNumbersMarkDel, NumbersTable);
        QWidget::setTabOrder(NumbersTable, bReadReports);
        QWidget::setTabOrder(bReadReports, dtm_beg);
        QWidget::setTabOrder(dtm_beg, dtm_end);
        QWidget::setTabOrder(dtm_end, bAllTimes);
        QWidget::setTabOrder(bAllTimes, ReportTable);
        QWidget::setTabOrder(ReportTable, ReportDetailTable);
        QWidget::setTabOrder(ReportDetailTable, UsersTable);
        QWidget::setTabOrder(UsersTable, bUserNew);
        QWidget::setTabOrder(bUserNew, bUserMarkDel);
        QWidget::setTabOrder(bUserMarkDel, bTypesApply);
        QWidget::setTabOrder(bTypesApply, bUserRevert);
        QWidget::setTabOrder(bUserRevert, bUserApply);
        QWidget::setTabOrder(bUserApply, bNumbersRevert);
        QWidget::setTabOrder(bNumbersRevert, bTypesRevert);
        QWidget::setTabOrder(bTypesRevert, bNumbersApply);

        retranslateUi(ReportCommon);
        QObject::connect(bAllTimes, SIGNAL(toggled(bool)), dtm_end, SLOT(setDisabled(bool)));
        QObject::connect(bAllTimes, SIGNAL(toggled(bool)), dtm_beg, SLOT(setDisabled(bool)));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ReportCommon);
    } // setupUi

    void retranslateUi(QWidget *ReportCommon)
    {
        ReportCommon->setWindowTitle(QCoreApplication::translate("ReportCommon", "Form", nullptr));
        actUserNew->setText(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
#if QT_CONFIG(tooltip)
        actUserNew->setToolTip(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actUserRevert->setText(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#if QT_CONFIG(tooltip)
        actUserRevert->setToolTip(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actUserApply->setText(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        actUserApply->setToolTip(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actUserMarkDel->setText(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actUserMarkDel->setToolTip(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actTypeNew->setText(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\270\320\277", nullptr));
#if QT_CONFIG(tooltip)
        actTypeNew->setToolTip(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\202\320\270\320\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actTypeRevert->setText(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#if QT_CONFIG(tooltip)
        actTypeRevert->setToolTip(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actTypeApply->setText(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        actTypeApply->setToolTip(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actTypeMarkDel->setText(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actTypeMarkDel->setToolTip(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actNumberNew->setText(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271 \321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
#if QT_CONFIG(tooltip)
        actNumberNew->setToolTip(QCoreApplication::translate("ReportCommon", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214  \321\201\320\265\321\200\320\270\320\271\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
#endif // QT_CONFIG(tooltip)
        actNumberRevert->setText(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#if QT_CONFIG(tooltip)
        actNumberRevert->setToolTip(QCoreApplication::translate("ReportCommon", "\320\236\321\202\320\274\320\265\320\275\320\260 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actNumberApply->setText(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        actNumberApply->setToolTip(QCoreApplication::translate("ReportCommon", "\320\222\320\275\320\265\321\201\321\202\320\270 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actNumberMarkDel->setText(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        actNumberMarkDel->setToolTip(QCoreApplication::translate("ReportCommon", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        gb_akb_type->setTitle(QCoreApplication::translate("ReportCommon", "\320\242\320\270\320\277\321\213 \320\220\320\232\320\221", nullptr));
        bTypesNew->setText(QString());
        bTypesMarkDel->setText(QString());
#if QT_CONFIG(tooltip)
        tbUsersPage->setToolTip(QCoreApplication::translate("ReportCommon", "\320\236\321\202\321\207\320\265\321\202\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        tbUsersPage->setText(QString());
#if QT_CONFIG(tooltip)
        tbAnalizePage->setToolTip(QCoreApplication::translate("ReportCommon", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        tbAnalizePage->setText(QString());
        gb_akb_list->setTitle(QCoreApplication::translate("ReportCommon", "\320\220\320\232\320\221", nullptr));
        bNumbersNew->setText(QString());
        bNumbersMarkDel->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("ReportCommon", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        bUserNew->setText(QString());
        bUserMarkDel->setText(QString());
        bTypesApply->setText(QString());
        bTypesRevert->setText(QString());
        bNumbersApply->setText(QString());
        bNumbersRevert->setText(QString());
        bUserRevert->setText(QString());
        bUserApply->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("ReportCommon", "\320\236\321\202\321\207\320\265\321\202\321\213", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ReportCommon", "\320\237\320\265\321\200\320\270\320\276\320\264", nullptr));
        bReadReports->setText(QCoreApplication::translate("ReportCommon", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        dtm_beg->setDisplayFormat(QCoreApplication::translate("ReportCommon", "dd.MM.yyyy", nullptr));
        dtm_end->setDisplayFormat(QCoreApplication::translate("ReportCommon", "dd.MM.yyyy", nullptr));
        bAllTimes->setText(QCoreApplication::translate("ReportCommon", "\320\227\320\260 \320\262\320\265\321\201\321\214 \320\277\320\265\321\200\320\270\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportCommon: public Ui_ReportCommon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTCOMMON_H
