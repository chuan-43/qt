/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName("regist");
        regist->resize(338, 265);
        label = new QLabel(regist);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 191, 61));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(regist);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 70, 141, 20));
        lineEdit_2 = new QLineEdit(regist);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 110, 141, 20));
        lineEdit_3 = new QLineEdit(regist);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(100, 150, 141, 20));
        pushButton = new QPushButton(regist);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 190, 61, 21));
        pushButton_2 = new QPushButton(regist);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 190, 61, 21));

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QDialog *regist)
    {
        regist->setWindowTitle(QCoreApplication::translate("regist", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("regist", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("regist", "\350\257\267\350\276\223\345\205\2458-10\344\275\215\345\257\206\347\240\201", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("regist", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("regist", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("regist", "\345\216\273\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
