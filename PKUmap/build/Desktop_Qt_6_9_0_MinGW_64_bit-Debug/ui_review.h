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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_review
{
public:
    QLabel *score;
    QListView *listView;
    QTextEdit *textEdit;

    void setupUi(QDialog *review)
    {
        if (review->objectName().isEmpty())
            review->setObjectName("review");
        review->resize(400, 300);
        score = new QLabel(review);
        score->setObjectName("score");
        score->setGeometry(QRect(6, 6, 36, 16));
        QFont font;
        font.setPointSize(12);
        score->setFont(font);
        listView = new QListView(review);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(6, 36, 391, 191));
        textEdit = new QTextEdit(review);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(11, 243, 371, 51));

        retranslateUi(review);

        QMetaObject::connectSlotsByName(review);
    } // setupUi

    void retranslateUi(QDialog *review)
    {
        review->setWindowTitle(QCoreApplication::translate("review", "Dialog", nullptr));
        score->setText(QCoreApplication::translate("review", "\350\257\204\345\210\206\357\274\232", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("review", "\347\225\231\350\250\200\350\257\204\350\256\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class review: public Ui_review {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEW_H
