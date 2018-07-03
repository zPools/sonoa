/********************************************************************************
** Form generated from reading UI file 'addeditadrenalinenode.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITADRENALINENODE_H
#define UI_ADDEDITADRENALINENODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAdrenalineNode
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *aliasLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *addressLineEdit;
    QToolButton *AddEditAddressPasteButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *privkeyLineEdit;
    QToolButton *AddEditPrivkeyPasteButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txhashLineEdit;
    QToolButton *AddEditTxhashPasteButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *outputindexLineEdit;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *AddEditAdrenalineNode)
    {
        if (AddEditAdrenalineNode->objectName().isEmpty())
            AddEditAdrenalineNode->setObjectName(QStringLiteral("AddEditAdrenalineNode"));
        AddEditAdrenalineNode->resize(331, 387);
        AddEditAdrenalineNode->setModal(true);
        verticalLayout = new QVBoxLayout(AddEditAdrenalineNode);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_9 = new QLabel(AddEditAdrenalineNode);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(AddEditAdrenalineNode);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        aliasLineEdit = new QLineEdit(AddEditAdrenalineNode);
        aliasLineEdit->setObjectName(QStringLiteral("aliasLineEdit"));

        horizontalLayout_4->addWidget(aliasLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(AddEditAdrenalineNode);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        addressLineEdit = new QLineEdit(AddEditAdrenalineNode);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        horizontalLayout_5->addWidget(addressLineEdit);

        AddEditAddressPasteButton = new QToolButton(AddEditAdrenalineNode);
        AddEditAddressPasteButton->setObjectName(QStringLiteral("AddEditAddressPasteButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        AddEditAddressPasteButton->setIcon(icon);

        horizontalLayout_5->addWidget(AddEditAddressPasteButton);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_5 = new QLabel(AddEditAdrenalineNode);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        privkeyLineEdit = new QLineEdit(AddEditAdrenalineNode);
        privkeyLineEdit->setObjectName(QStringLiteral("privkeyLineEdit"));

        horizontalLayout_3->addWidget(privkeyLineEdit);

        AddEditPrivkeyPasteButton = new QToolButton(AddEditAdrenalineNode);
        AddEditPrivkeyPasteButton->setObjectName(QStringLiteral("AddEditPrivkeyPasteButton"));
        AddEditPrivkeyPasteButton->setIcon(icon);

        horizontalLayout_3->addWidget(AddEditPrivkeyPasteButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(AddEditAdrenalineNode);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txhashLineEdit = new QLineEdit(AddEditAdrenalineNode);
        txhashLineEdit->setObjectName(QStringLiteral("txhashLineEdit"));

        horizontalLayout_2->addWidget(txhashLineEdit);

        AddEditTxhashPasteButton = new QToolButton(AddEditAdrenalineNode);
        AddEditTxhashPasteButton->setObjectName(QStringLiteral("AddEditTxhashPasteButton"));
        AddEditTxhashPasteButton->setIcon(icon);

        horizontalLayout_2->addWidget(AddEditTxhashPasteButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_8 = new QLabel(AddEditAdrenalineNode);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        outputindexLineEdit = new QLineEdit(AddEditAdrenalineNode);
        outputindexLineEdit->setObjectName(QStringLiteral("outputindexLineEdit"));

        horizontalLayout_8->addWidget(outputindexLineEdit);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        okButton = new QPushButton(AddEditAdrenalineNode);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(AddEditAdrenalineNode);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);


        retranslateUi(AddEditAdrenalineNode);

        QMetaObject::connectSlotsByName(AddEditAdrenalineNode);
    } // setupUi

    void retranslateUi(QDialog *AddEditAdrenalineNode)
    {
        AddEditAdrenalineNode->setWindowTitle(QApplication::translate("AddEditAdrenalineNode", "Add/Edit SONO Masternode", 0));
        label_9->setText(QApplication::translate("AddEditAdrenalineNode", "<html><head/><body><p>Enter an Alias (friendly name) for your <span style=\" font-weight:600;\">SONO Masternode</span> and its address (either a clearnet IP and port or Tor onion address and port).</p><p>The address should be in the format <span style=\" font-style:italic;\">155.456.789.123:32000</span> or <span style=\" font-style:italic;\">akjdsafxjkhasdf.onion:32000</span>. </p><p>You must send exactly <span style=\" font-weight:600; text-decoration: underline;\">1000 SONO</span> to the collateral address.</p></body></html>", 0));
        label_4->setText(QApplication::translate("AddEditAdrenalineNode", "Alias*", 0));
        label_6->setText(QApplication::translate("AddEditAdrenalineNode", "Address*", 0));
#ifndef QT_NO_TOOLTIP
        AddEditAddressPasteButton->setToolTip(QApplication::translate("AddEditAdrenalineNode", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        AddEditAddressPasteButton->setText(QString());
        AddEditAddressPasteButton->setShortcut(QApplication::translate("AddEditAdrenalineNode", "Alt+P", 0));
        label_5->setText(QApplication::translate("AddEditAdrenalineNode", "PrivKey*", 0));
#ifndef QT_NO_TOOLTIP
        AddEditPrivkeyPasteButton->setToolTip(QApplication::translate("AddEditAdrenalineNode", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        AddEditPrivkeyPasteButton->setText(QString());
        AddEditPrivkeyPasteButton->setShortcut(QApplication::translate("AddEditAdrenalineNode", "Alt+P", 0));
        label_2->setText(QApplication::translate("AddEditAdrenalineNode", "TxHash*", 0));
#ifndef QT_NO_TOOLTIP
        AddEditTxhashPasteButton->setToolTip(QApplication::translate("AddEditAdrenalineNode", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        AddEditTxhashPasteButton->setText(QString());
        AddEditTxhashPasteButton->setShortcut(QApplication::translate("AddEditAdrenalineNode", "Alt+P", 0));
        label_8->setText(QApplication::translate("AddEditAdrenalineNode", "Output Index*", 0));
        okButton->setText(QApplication::translate("AddEditAdrenalineNode", "&OK", 0));
        cancelButton->setText(QApplication::translate("AddEditAdrenalineNode", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddEditAdrenalineNode: public Ui_AddEditAdrenalineNode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITADRENALINENODE_H
