/********************************************************************************
** Form generated from reading UI file 'termsofuse.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMSOFUSE_H
#define UI_TERMSOFUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TermsOfUse
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *buttonAgree;
    QPushButton *buttonCancel;

    void setupUi(QDialog *TermsOfUse)
    {
        if (TermsOfUse->objectName().isEmpty())
            TermsOfUse->setObjectName(QStringLiteral("TermsOfUse"));
        TermsOfUse->resize(651, 541);
        textBrowser = new QTextBrowser(TermsOfUse);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 50, 631, 441));
        label = new QLabel(TermsOfUse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 631, 17));
        buttonAgree = new QPushButton(TermsOfUse);
        buttonAgree->setObjectName(QStringLiteral("buttonAgree"));
        buttonAgree->setGeometry(QRect(550, 500, 98, 27));
        buttonCancel = new QPushButton(TermsOfUse);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(440, 500, 98, 27));

        retranslateUi(TermsOfUse);

        QMetaObject::connectSlotsByName(TermsOfUse);
    } // setupUi

    void retranslateUi(QDialog *TermsOfUse)
    {
        TermsOfUse->setWindowTitle(QApplication::translate("TermsOfUse", "SONO - Terms of Use", 0));
        textBrowser->setHtml(QApplication::translate("TermsOfUse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">By using this software, you acknowledge and understand that <span style=\" font-weight:600;\">SONO</span> is not intended for use in any illegal activity, and that no person or entity associated with the creation, development, marketing, or furtherance of <span style=\" font-weight:600;\">SONO</span> shall be held responsible for use by any individual, group, or entity that is against the law in their respective jurisdiction.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">SONO</span> intends to have fully implemented Masternodes and DarkSend, which is completely trustless because nobody controls the whole system. The risk of something going wrong is very low. However, the software is still in development. Which, this means that things can break and there are no guarantees about it. Use it at your own risk, follow the instructions exactly, and only use money that you can afford to lose should something go wrong. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Darksend uses a very large keypool and goes through keys quite rapidly. This means that you need to ma"
                        "ke backups more frequently than with other wallets, because when it anonymizes your funds a lot of transactions happen in the background. To be safe, make a new backup after each time your anonymized threshold of funds is reached. It is also always recommended to backup your wallet.dat! (It is what contains your funds and addresses).</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Visit <a href=\"https://projectsono.io\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; text-decoration: underline; color:#ffff7f;\">https://projectsono.io</span></a> for more info or join our Discord at <a href=\"https://discord.gg/8bY2rjX\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; text-decoration: underline; color:#ffff7f;\">https://discord.gg/8bY2rjX</span><"
                        "/a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:600; text-decoration: underline; color:#ffff7f;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-weight:600; font-style:italic;\">Credits:</span><span style=\" font-style:italic;\"> zPools, Hamukione, Richy, Duffyboyo and everyone from our Discord. With special thanks to the team of Denarius! </span><span style=\" font-style:italic; text-decoration: underline;\">Our community is fantastic and you all deserve to be mentioned here forever.</span><span style=\" font-style:italic;\"> THANK YOU! FOR THE POWER OF THE PEOPLE! CRYPTO MONEY FOR A NEW WORLD!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label->setText(QApplication::translate("TermsOfUse", "Do you agree to the following terms of use?", 0));
        buttonAgree->setText(QApplication::translate("TermsOfUse", "I Agree", 0));
        buttonCancel->setText(QApplication::translate("TermsOfUse", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class TermsOfUse: public Ui_TermsOfUse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMSOFUSE_H
