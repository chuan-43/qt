/********************************************************************************
** Form generated from reading UI file 'review.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEW_H
#define UI_REVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_review
{
public:

    void setupUi(QDialog *review)
    {
        if (review->objectName().isEmpty())
            review->setObjectName("review");
        review->resize(400, 300);

        retranslateUi(review);

        QMetaObject::connectSlotsByName(review);
    } // setupUi

    void retranslateUi(QDialog *review)
    {
        review->setWindowTitle(QCoreApplication::translate("review", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class review: public Ui_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
