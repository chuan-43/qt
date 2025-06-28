/********************************************************************************
** Form generated from reading UI file 'detail_or_review.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_OR_REVIEW_H
#define UI_DETAIL_OR_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_detail_or_review
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *detail_or_review)
    {
        if (detail_or_review->objectName().isEmpty())
            detail_or_review->setObjectName("detail_or_review");
        detail_or_review->resize(237, 170);
        pushButton = new QPushButton(detail_or_review);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 40, 111, 31));
        pushButton_2 = new QPushButton(detail_or_review);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 100, 111, 31));

        retranslateUi(detail_or_review);

        QMetaObject::connectSlotsByName(detail_or_review);
    } // setupUi

    void retranslateUi(QDialog *detail_or_review)
    {
        detail_or_review->setWindowTitle(QCoreApplication::translate("detail_or_review", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("detail_or_review", "\350\257\246\346\203\205", nullptr));
        pushButton_2->setText(QCoreApplication::translate("detail_or_review", "\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detail_or_review: public Ui_detail_or_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_OR_REVIEW_H
