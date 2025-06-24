/********************************************************************************
** Form generated from reading UI file 'introduce_or_review.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_OR_REVIEW_H
#define UI_INTRODUCE_OR_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_introduce_or_review
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *introduce_or_review)
    {
        if (introduce_or_review->objectName().isEmpty())
            introduce_or_review->setObjectName("introduce_or_review");
        introduce_or_review->resize(368, 275);
        pushButton = new QPushButton(introduce_or_review);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 50, 141, 51));
        QFont font;
        font.setPointSize(17);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(introduce_or_review);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 150, 141, 51));
        pushButton_2->setFont(font);

        retranslateUi(introduce_or_review);

        QMetaObject::connectSlotsByName(introduce_or_review);
    } // setupUi

    void retranslateUi(QDialog *introduce_or_review)
    {
        introduce_or_review->setWindowTitle(QCoreApplication::translate("introduce_or_review", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("introduce_or_review", "\344\273\213\347\273\215", nullptr));
        pushButton_2->setText(QCoreApplication::translate("introduce_or_review", "\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce_or_review: public Ui_introduce_or_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_OR_REVIEW_H
