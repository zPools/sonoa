/********************************************************************************
** Form generated from reading UI file 'marketbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKETBROWSER_H
#define UI_MARKETBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarketBrowser
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sono;
    QLabel *bitcoin;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SONOmc;
    QLabel *SONObtc;
    QPushButton *startButton;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_31;
    QLineEdit *egals;
    QLabel *label;
    QPushButton *egal;
    QLabel *egald;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;

    void setupUi(QWidget *MarketBrowser)
    {
        if (MarketBrowser->objectName().isEmpty())
            MarketBrowser->setObjectName(QStringLiteral("MarketBrowser"));
        MarketBrowser->setWindowModality(Qt::NonModal);
        MarketBrowser->resize(880, 447);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MarketBrowser->sizePolicy().hasHeightForWidth());
        MarketBrowser->setSizePolicy(sizePolicy);
        MarketBrowser->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(MarketBrowser);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, -1, 0, -1);
        label_4 = new QLabel(MarketBrowser);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QStringLiteral("color: #FFF;font-size:26px;font-weight:600;"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4->setMargin(0);
        label_4->setIndent(15);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        sono = new QLabel(MarketBrowser);
        sono->setObjectName(QStringLiteral("sono"));
        sizePolicy1.setHeightForWidth(sono->sizePolicy().hasHeightForWidth());
        sono->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(27);
        sono->setFont(font);
        sono->setMouseTracking(true);
        sono->setText(QStringLiteral("$ 1000 USD"));
        sono->setScaledContents(false);
        sono->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(sono);

        bitcoin = new QLabel(MarketBrowser);
        bitcoin->setObjectName(QStringLiteral("bitcoin"));
        sizePolicy1.setHeightForWidth(bitcoin->sizePolicy().hasHeightForWidth());
        bitcoin->setSizePolicy(sizePolicy1);
        bitcoin->setFont(font);
        bitcoin->setMouseTracking(true);
        bitcoin->setText(QStringLiteral("$ 1000 USD"));
        bitcoin->setScaledContents(false);
        bitcoin->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(bitcoin);


        gridLayout->addLayout(horizontalLayout_5, 17, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        SONOmc = new QLabel(MarketBrowser);
        SONOmc->setObjectName(QStringLiteral("SONOmc"));
        sizePolicy1.setHeightForWidth(SONOmc->sizePolicy().hasHeightForWidth());
        SONOmc->setSizePolicy(sizePolicy1);
        SONOmc->setFont(font);
        SONOmc->setMouseTracking(true);
        SONOmc->setText(QStringLiteral("$ 1000 USD"));
        SONOmc->setScaledContents(false);
        SONOmc->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(SONOmc);

        SONObtc = new QLabel(MarketBrowser);
        SONObtc->setObjectName(QStringLiteral("SONObtc"));
        sizePolicy1.setHeightForWidth(SONObtc->sizePolicy().hasHeightForWidth());
        SONObtc->setSizePolicy(sizePolicy1);
        SONObtc->setFont(font);
        SONObtc->setMouseTracking(true);
        SONObtc->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(SONObtc);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 2);

        startButton = new QPushButton(MarketBrowser);
        startButton->setObjectName(QStringLiteral("startButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);
        startButton->setMinimumSize(QSize(250, 45));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        startButton->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        startButton->setFont(font1);
        startButton->setAcceptDrops(false);
        startButton->setStyleSheet(QStringLiteral("margin-right: 15px;"));
        startButton->setIconSize(QSize(150, 35));
        startButton->setFlat(false);

        gridLayout->addWidget(startButton, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(MarketBrowser);
        label_15->setObjectName(QStringLiteral("label_15"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_15);

        label_5 = new QLabel(MarketBrowser);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_5);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        gridLayout->addLayout(horizontalLayout_8, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_14 = new QLabel(MarketBrowser);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_14);

        label_13 = new QLabel(MarketBrowser);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_13);


        gridLayout->addLayout(horizontalLayout_6, 15, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));

        gridLayout->addLayout(horizontalLayout_4, 20, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_31 = new QLabel(MarketBrowser);
        label_31->setObjectName(QStringLiteral("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_31);

        egals = new QLineEdit(MarketBrowser);
        egals->setObjectName(QStringLiteral("egals"));
        egals->setMinimumSize(QSize(100, 23));
        egals->setMaximumSize(QSize(100, 16777215));
        egals->setStyleSheet(QStringLiteral("border: 1px solid #61696c;margin-left:4px;"));

        horizontalLayout->addWidget(egals);

        label = new QLabel(MarketBrowser);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color:#61696c;"));

        horizontalLayout->addWidget(label);

        egal = new QPushButton(MarketBrowser);
        egal->setObjectName(QStringLiteral("egal"));
        sizePolicy2.setHeightForWidth(egal->sizePolicy().hasHeightForWidth());
        egal->setSizePolicy(sizePolicy2);
        egal->setMinimumSize(QSize(0, 23));
        egal->setStyleSheet(QStringLiteral("font-weight:600;"));

        horizontalLayout->addWidget(egal);

        egald = new QLabel(MarketBrowser);
        egald->setObjectName(QStringLiteral("egald"));
        sizePolicy1.setHeightForWidth(egald->sizePolicy().hasHeightForWidth());
        egald->setSizePolicy(sizePolicy1);
        egald->setStyleSheet(QStringLiteral("color:#61696c;"));

        horizontalLayout->addWidget(egald);


        gridLayout->addLayout(horizontalLayout, 22, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 21, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_3 = new QLabel(MarketBrowser);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(128, 128));
        label_3->setMaximumSize(QSize(128, 128));
        label_3->setTextFormat(Qt::RichText);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/sono")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);

        horizontalLayout_9->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_9, 6, 0, 1, 2);


        retranslateUi(MarketBrowser);

        startButton->setDefault(false);


        QMetaObject::connectSlotsByName(MarketBrowser);
    } // setupUi

    void retranslateUi(QWidget *MarketBrowser)
    {
        MarketBrowser->setWindowTitle(QApplication::translate("MarketBrowser", "Digging", 0));
        label_4->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-size:20px;font-weight:600; color:#FFFFFF;\">SONO Market Information</span></p></body></html>", 0));
        SONObtc->setText(QApplication::translate("MarketBrowser", "0.1 BTC", 0));
        startButton->setText(QApplication::translate("MarketBrowser", "Refresh Prices", 0));
        label_15->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Current SONO Market Cap</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Last SONO/BTC Price</span></p></body></html>", 0));
        label_14->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Last SONO/USD Price</span></p></body></html>", 0));
        label_13->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">Current BTC/USD Price</span></p></body></html>", 0));
        label_31->setText(QApplication::translate("MarketBrowser", "<html><head/><body><p><span style=\" font-weight:600; color:#767676;\">SONO Price Calculator :</span></p></body></html>", 0));
        label->setText(QApplication::translate("MarketBrowser", "SONO", 0));
        egal->setText(QApplication::translate("MarketBrowser", "=", 0));
        egald->setText(QApplication::translate("MarketBrowser", "0$ / 0 BTC", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MarketBrowser: public Ui_MarketBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKETBROWSER_H
