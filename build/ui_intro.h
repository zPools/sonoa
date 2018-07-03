/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Intro
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *sizeWarningLabel;
    QLabel *label;
    QRadioButton *dataDirDefault;
    QRadioButton *dataDirCustom;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *dataDirectory;
    QPushButton *ellipsisButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *freeSpace;
    QSpacerItem *verticalSpacer_2;
    QLabel *errorMessage;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Intro)
    {
        if (Intro->objectName().isEmpty())
            Intro->setObjectName(QStringLiteral("Intro"));
        Intro->resize(480, 351);
        verticalLayout = new QVBoxLayout(Intro);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(Intro);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("QLabel { font-style:italic; }"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(Intro);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        sizeWarningLabel = new QLabel(Intro);
        sizeWarningLabel->setObjectName(QStringLiteral("sizeWarningLabel"));
        sizeWarningLabel->setWordWrap(true);

        verticalLayout_3->addWidget(sizeWarningLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);

        label = new QLabel(Intro);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/sono128")));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        dataDirDefault = new QRadioButton(Intro);
        dataDirDefault->setObjectName(QStringLiteral("dataDirDefault"));

        verticalLayout->addWidget(dataDirDefault);

        dataDirCustom = new QRadioButton(Intro);
        dataDirCustom->setObjectName(QStringLiteral("dataDirCustom"));

        verticalLayout->addWidget(dataDirCustom);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dataDirectory = new QLineEdit(Intro);
        dataDirectory->setObjectName(QStringLiteral("dataDirectory"));

        horizontalLayout_2->addWidget(dataDirectory);

        ellipsisButton = new QPushButton(Intro);
        ellipsisButton->setObjectName(QStringLiteral("ellipsisButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ellipsisButton->sizePolicy().hasHeightForWidth());
        ellipsisButton->setSizePolicy(sizePolicy);
        ellipsisButton->setMaximumSize(QSize(30, 16777215));
        ellipsisButton->setText(QString::fromUtf8("\342\200\246"));
        ellipsisButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(ellipsisButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        freeSpace = new QLabel(Intro);
        freeSpace->setObjectName(QStringLiteral("freeSpace"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(freeSpace->sizePolicy().hasHeightForWidth());
        freeSpace->setSizePolicy(sizePolicy1);
        freeSpace->setWordWrap(true);

        verticalLayout_2->addWidget(freeSpace);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        errorMessage = new QLabel(Intro);
        errorMessage->setObjectName(QStringLiteral("errorMessage"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(errorMessage->sizePolicy().hasHeightForWidth());
        errorMessage->setSizePolicy(sizePolicy2);
        errorMessage->setTextFormat(Qt::RichText);
        errorMessage->setWordWrap(true);

        verticalLayout_2->addWidget(errorMessage);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Intro);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Intro);
        QObject::connect(buttonBox, SIGNAL(accepted()), Intro, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Intro, SLOT(reject()));

        QMetaObject::connectSlotsByName(Intro);
    } // setupUi

    void retranslateUi(QDialog *Intro)
    {
        Intro->setWindowTitle(QApplication::translate("Intro", "Welcome", 0));
        label_2->setText(QApplication::translate("Intro", "Welcome to SONO!", 0));
        label_4->setText(QApplication::translate("Intro", "This is the first time <strong>SONO</strong> has launched on this computer, so you can choose where SONO will store its data.", 0));
        sizeWarningLabel->setText(QApplication::translate("Intro", "SONO will download and store a copy of the SONO block chain. At least <strong>%1GB</strong> of data will need to be available to be stored in this directory, as it will grow over time. The wallet data will also be stored in this directory.", 0));
        label->setText(QString());
        dataDirDefault->setText(QApplication::translate("Intro", "Use the default data directory", 0));
        dataDirCustom->setText(QApplication::translate("Intro", "Use a custom data directory:", 0));
        freeSpace->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Intro: public Ui_Intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
