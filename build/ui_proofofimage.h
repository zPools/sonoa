/********************************************************************************
** Form generated from reading UI file 'proofofimage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROOFOFIMAGE_H
#define UI_PROOFOFIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProofOfImage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QGroupBox *Proof;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFile;
    QPushButton *filePushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *createPushButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *txLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *checkTxButton;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QPushButton *checkButton;
    QLabel *label_3;

    void setupUi(QWidget *ProofOfImage)
    {
        if (ProofOfImage->objectName().isEmpty())
            ProofOfImage->setObjectName(QStringLiteral("ProofOfImage"));
        ProofOfImage->resize(960, 402);
        ProofOfImage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(ProofOfImage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(ProofOfImage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        topLayout->addWidget(labelAlerts);

        Proof = new QGroupBox(ProofOfImage);
        Proof->setObjectName(QStringLiteral("Proof"));
        Proof->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(Proof);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 20);
        labelFile = new QLabel(Proof);
        labelFile->setObjectName(QStringLiteral("labelFile"));

        horizontalLayout_2->addWidget(labelFile);

        filePushButton = new QPushButton(Proof);
        filePushButton->setObjectName(QStringLiteral("filePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filePushButton->sizePolicy().hasHeightForWidth());
        filePushButton->setSizePolicy(sizePolicy);
        filePushButton->setMinimumSize(QSize(250, 35));
        filePushButton->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(filePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 20);
        createPushButton = new QPushButton(Proof);
        createPushButton->setObjectName(QStringLiteral("createPushButton"));
        sizePolicy.setHeightForWidth(createPushButton->sizePolicy().hasHeightForWidth());
        createPushButton->setSizePolicy(sizePolicy);
        createPushButton->setMinimumSize(QSize(500, 50));

        horizontalLayout_3->addWidget(createPushButton);

        label_2 = new QLabel(Proof);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(Proof);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit = new QLineEdit(Proof);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_6->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(Proof);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        txLineEdit = new QLineEdit(Proof);
        txLineEdit->setObjectName(QStringLiteral("txLineEdit"));

        horizontalLayout_7->addWidget(txLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkTxButton = new QPushButton(Proof);
        checkTxButton->setObjectName(QStringLiteral("checkTxButton"));

        verticalLayout_3->addWidget(checkTxButton);

        label_5 = new QLabel(Proof);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkButton = new QPushButton(Proof);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkButton->sizePolicy().hasHeightForWidth());
        checkButton->setSizePolicy(sizePolicy1);
        checkButton->setMinimumSize(QSize(255, 0));

        verticalLayout->addWidget(checkButton);

        label_3 = new QLabel(Proof);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);


        horizontalLayout_8->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_2);


        topLayout->addWidget(Proof, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(ProofOfImage);

        QMetaObject::connectSlotsByName(ProofOfImage);
    } // setupUi

    void retranslateUi(QWidget *ProofOfImage)
    {
        ProofOfImage->setWindowTitle(QApplication::translate("ProofOfImage", "Form", 0));
        Proof->setTitle(QApplication::translate("ProofOfImage", "Proof of Data", 0));
        labelFile->setText(QApplication::translate("ProofOfImage", "Select a file location", 0));
        filePushButton->setText(QApplication::translate("ProofOfImage", "Select File", 0));
        createPushButton->setText(QApplication::translate("ProofOfImage", "Create Timestamp (Pay 0.1 SONO) Proof of Data*", 0));
        label_2->setText(QApplication::translate("ProofOfImage", "<html><head/><body><p><span style=\" font-style:italic; color:#ff0000;\">*Warning:</span> This sends <span style=\" font-weight:600;\">0.1 SONO</span> to a new address generated by hashing the image or data file selected. The address can be checked on a block explorer for a proof of creation date timestamp. This is a Beta Feature Easter Egg and will more than likely be updated!</p></body></html>", 0));
        label->setText(QApplication::translate("ProofOfImage", "Generated Timestamp SONO Address:", 0));
        label_4->setText(QApplication::translate("ProofOfImage", "Transaction Hash:", 0));
        checkTxButton->setText(QApplication::translate("ProofOfImage", "Check Transaction", 0));
        label_5->setText(QApplication::translate("ProofOfImage", "Check a previous Transaction Hash for SONO proofs.", 0));
        checkButton->setText(QApplication::translate("ProofOfImage", "Check Timestamp", 0));
        label_3->setText(QApplication::translate("ProofOfImage", "<html><head/><body><p>Check a timestamp by checking when the address was first seen on a block explorer.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ProofOfImage: public Ui_ProofOfImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROOFOFIMAGE_H
