/********************************************************************************
** Form generated from reading UI file 'login_or_register.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_OR_REGISTER_H
#define UI_LOGIN_OR_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login_or_Register
{
public:
    QLabel *label;
    QLineEdit *username;
    QLineEdit *password;
    QCommandLinkButton *commandLinkButton_toRegist;
    QPushButton *pushbutton_login;

    void setupUi(QDialog *Login_or_Register)
    {
        if (Login_or_Register->objectName().isEmpty())
            Login_or_Register->setObjectName("Login_or_Register");
        Login_or_Register->resize(400, 300);
        label = new QLabel(Login_or_Register);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 181, 51));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setIndent(-1);
        username = new QLineEdit(Login_or_Register);
        username->setObjectName("username");
        username->setGeometry(QRect(110, 90, 161, 20));
        password = new QLineEdit(Login_or_Register);
        password->setObjectName("password");
        password->setGeometry(QRect(110, 140, 161, 20));
        password->setMaxLength(10);
        commandLinkButton_toRegist = new QCommandLinkButton(Login_or_Register);
        commandLinkButton_toRegist->setObjectName("commandLinkButton_toRegist");
        commandLinkButton_toRegist->setGeometry(QRect(130, 170, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gigi")});
        font1.setBold(false);
        commandLinkButton_toRegist->setFont(font1);
        commandLinkButton_toRegist->setStyleSheet(QString::fromUtf8("QCommandLinkButton {\n"
"    text-align: center;       /* \346\260\264\345\271\263\345\261\205\344\270\255 */\n"
"    padding-top: 0px;         /* \351\241\266\351\203\250\345\206\205\350\276\271\350\267\235\350\256\276\344\270\272 0\357\274\214\346\226\207\346\234\254\350\264\264\351\241\266 */\n"
"         /* \345\272\225\351\203\250\345\206\205\350\276\271\350\267\235\345\242\236\345\244\247\357\274\214\346\222\221\345\274\200\346\214\211\351\222\256\351\253\230\345\272\246 */\n"
"    /* \345\217\257\351\200\211\357\274\232\350\260\203\346\225\264\345\255\227\344\275\223\345\244\247\345\260\217\343\200\201\346\214\211\351\222\256\351\253\230\345\272\246\347\255\211\350\256\251\346\225\210\346\236\234\346\233\264\346\230\216\346\230\276 */\n"
"              \n"
"}\n"
"QCommandLinkButton {\n"
"    color: black; /* \345\217\257\347\224\250\346\200\201\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"QCommandLinkButton:disabled {\n"
"    color: gray; /* \344\277\235\347\225\231\347\246\201\347\224\250"
                        "\346\200\201\351\200\273\350\276\221\357\274\210\345\217\257\351\200\211\357\274\211 */\n"
"}"));
        commandLinkButton_toRegist->setIconSize(QSize(10, 10));
        commandLinkButton_toRegist->setAutoRepeat(false);
        commandLinkButton_toRegist->setAutoRepeatDelay(300);
        commandLinkButton_toRegist->setDefault(false);
        pushbutton_login = new QPushButton(Login_or_Register);
        pushbutton_login->setObjectName("pushbutton_login");
        pushbutton_login->setGeometry(QRect(140, 210, 101, 41));

        retranslateUi(Login_or_Register);

        QMetaObject::connectSlotsByName(Login_or_Register);
    } // setupUi

    void retranslateUi(QDialog *Login_or_Register)
    {
        Login_or_Register->setWindowTitle(QCoreApplication::translate("Login_or_Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login_or_Register", "\347\231\273\345\275\225", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("Login_or_Register", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("Login_or_Register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        commandLinkButton_toRegist->setText(QCoreApplication::translate("Login_or_Register", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\345\216\273\346\263\250\345\206\214", nullptr));
        pushbutton_login->setText(QCoreApplication::translate("Login_or_Register", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login_or_Register: public Ui_Login_or_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_OR_REGISTER_H
