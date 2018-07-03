/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QLabel *labelTradeLink;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelStakeText;
    QLabel *labelStake;
    QLabel *labelTotal;
    QLabel *watch4;
    QLabel *labelWatchTotal;
    QLabel *labelWatchImmature;
    QLabel *labelWatchAvailable;
    QFrame *line;
    QLabel *btctotal;
    QLabel *labelBalance;
    QLabel *labelUSDTotal;
    QSpacerItem *verticalSpacer_3;
    QLabel *watch2;
    QLabel *labelImmature;
    QLabel *labelUnconfirmed;
    QLabel *label;
    QLabel *usdtotal;
    QLabel *labelWatchonly;
    QPushButton *refreshButton;
    QLabel *labelImmatureText;
    QLabel *labelBTCTotal;
    QLabel *unconfirmedlabeltxt;
    QLabel *labelTotalText;
    QLabel *watch1;
    QLabel *labelWatchImmatureText;
    QLabel *labelLockedText;
    QLabel *labelWatchPending;
    QLabel *labelLocked;
    QFrame *line_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *logo;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(917, 681);
        horizontalLayout = new QHBoxLayout(OverviewPage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        labelTradeLink = new QLabel(frame);
        labelTradeLink->setObjectName(QStringLiteral("labelTradeLink"));

        horizontalLayout_4->addWidget(labelTradeLink);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelStakeText = new QLabel(frame);
        labelStakeText->setObjectName(QStringLiteral("labelStakeText"));

        gridLayout->addWidget(labelStakeText, 7, 0, 1, 1);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QStringLiteral("0 SONO"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelStake, 7, 1, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setWeight(50);
        labelTotal->setFont(font2);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QStringLiteral("200000000.00000001 SONO"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 6, 1, 1, 1);

        watch4 = new QLabel(frame);
        watch4->setObjectName(QStringLiteral("watch4"));

        gridLayout->addWidget(watch4, 19, 0, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font1);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QStringLiteral("0 SONO"));
        labelWatchTotal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 19, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font1);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QStringLiteral("0 SONO"));
        labelWatchImmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 18, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font1);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QStringLiteral("0 SONO"));
        labelWatchAvailable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 16, 1, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 3);

        btctotal = new QLabel(frame);
        btctotal->setObjectName(QStringLiteral("btctotal"));

        gridLayout->addWidget(btctotal, 11, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        labelBalance->setFont(font3);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QStringLiteral("0 SONO"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 0, 1, 1, 2);

        labelUSDTotal = new QLabel(frame);
        labelUSDTotal->setObjectName(QStringLiteral("labelUSDTotal"));
        labelUSDTotal->setFont(font3);
        labelUSDTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelUSDTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUSDTotal, 10, 1, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 14, 0, 1, 1);

        watch2 = new QLabel(frame);
        watch2->setObjectName(QStringLiteral("watch2"));

        gridLayout->addWidget(watch2, 17, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QStringLiteral("0 SONO"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 2);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QStringLiteral("0 SONO"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 2);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        usdtotal = new QLabel(frame);
        usdtotal->setObjectName(QStringLiteral("usdtotal"));

        gridLayout->addWidget(usdtotal, 10, 0, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setFont(font);
        labelWatchonly->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 15, 0, 1, 2);

        refreshButton = new QPushButton(frame);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(refreshButton->sizePolicy().hasHeightForWidth());
        refreshButton->setSizePolicy(sizePolicy1);
        refreshButton->setBaseSize(QSize(0, 0));
        QFont font4;
        font4.setItalic(true);
        refreshButton->setFont(font4);
        refreshButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/refresh"), QSize(), QIcon::Normal, QIcon::Off);
        refreshButton->setIcon(icon);
        refreshButton->setAutoDefault(false);
        refreshButton->setFlat(false);

        gridLayout->addWidget(refreshButton, 12, 1, 1, 2);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelBTCTotal = new QLabel(frame);
        labelBTCTotal->setObjectName(QStringLiteral("labelBTCTotal"));
        labelBTCTotal->setFont(font1);
        labelBTCTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelBTCTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBTCTotal, 11, 1, 1, 2);

        unconfirmedlabeltxt = new QLabel(frame);
        unconfirmedlabeltxt->setObjectName(QStringLiteral("unconfirmedlabeltxt"));

        gridLayout->addWidget(unconfirmedlabeltxt, 2, 0, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 6, 0, 1, 1);

        watch1 = new QLabel(frame);
        watch1->setObjectName(QStringLiteral("watch1"));

        gridLayout->addWidget(watch1, 16, 0, 1, 1);

        labelWatchImmatureText = new QLabel(frame);
        labelWatchImmatureText->setObjectName(QStringLiteral("labelWatchImmatureText"));

        gridLayout->addWidget(labelWatchImmatureText, 18, 0, 1, 1);

        labelLockedText = new QLabel(frame);
        labelLockedText->setObjectName(QStringLiteral("labelLockedText"));

        gridLayout->addWidget(labelLockedText, 4, 0, 1, 1);

        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font1);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QStringLiteral("0 SONO"));
        labelWatchPending->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 17, 1, 1, 1);

        labelLocked = new QLabel(frame);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));
        labelLocked->setEnabled(true);
        labelLocked->setFont(font1);
        labelLocked->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLocked, 4, 1, 1, 2);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 8, 0, 2, 3);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);


        verticalLayout_2->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font5;
        font5.setPointSize(11);
        label_4->setFont(font5);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listTransactions->sizePolicy().hasHeightForWidth());
        listTransactions->setSizePolicy(sizePolicy2);
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        logo = new QLabel(OverviewPage);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy3);
        logo->setBaseSize(QSize(222, 128));
        logo->setLayoutDirection(Qt::RightToLeft);
        logo->setAutoFillBackground(false);
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/splash")));
        logo->setScaledContents(false);
        logo->setAlignment(Qt::AlignCenter);
        logo->setMargin(0);
        logo->setIndent(-1);

        verticalLayout_3->addWidget(logo);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(OverviewPage);

        refreshButton->setDefault(false);


        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Denarius network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelTradeLink->setText(QApplication::translate("OverviewPage", "SONO", 0));
        labelStakeText->setText(QApplication::translate("OverviewPage", "Available for Stake:", 0));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
        watch4->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        btctotal->setText(QApplication::translate("OverviewPage", "BTC Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUSDTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance estimated in USD, Rate is not updated often", 0));
#endif // QT_NO_TOOLTIP
        labelUSDTotal->setText(QApplication::translate("OverviewPage", "0 SONO", 0));
        watch2->setText(QApplication::translate("OverviewPage", "Pending:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Balance from new stakes or coins that is not mature enough to be spent", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
        usdtotal->setText(QApplication::translate("OverviewPage", "USD Total:", 0));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0));
#ifndef QT_NO_TOOLTIP
        refreshButton->setToolTip(QApplication::translate("OverviewPage", "Refresh your USD and BTC estimated totals, forces price data from CMC.", 0));
#endif // QT_NO_TOOLTIP
        refreshButton->setText(QApplication::translate("OverviewPage", "Refresh Totals", 0));
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelBTCTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance estimated in BTC, Rate is not updated often", 0));
#endif // QT_NO_TOOLTIP
        labelBTCTotal->setText(QApplication::translate("OverviewPage", "0 BTC", 0));
        unconfirmedlabeltxt->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0));
        labelTotalText->setText(QApplication::translate("OverviewPage", "Wallet Total:", 0));
        watch1->setText(QApplication::translate("OverviewPage", "Available:", 0));
        labelWatchImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
        labelLockedText->setText(QApplication::translate("OverviewPage", "Locked:", 0));
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLocked->setToolTip(QApplication::translate("OverviewPage", "Balance locked from usage, e.g. masternode collateral", 0));
#endif // QT_NO_TOOLTIP
        labelLocked->setText(QApplication::translate("OverviewPage", "0 SONO", 0));
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent Transactions</b>", 0));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Denarius network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
