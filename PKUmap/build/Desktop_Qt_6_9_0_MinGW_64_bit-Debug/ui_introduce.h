/********************************************************************************
** Form generated from reading UI file 'introduce.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCE_H
#define UI_INTRODUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_introduce
{
public:

    void setupUi(QDialog *introduce)
    {
        if (introduce->objectName().isEmpty())
            introduce->setObjectName("introduce");
        introduce->resize(400, 300);

        retranslateUi(introduce);

        QMetaObject::connectSlotsByName(introduce);
    } // setupUi

    void retranslateUi(QDialog *introduce)
    {
        introduce->setWindowTitle(QCoreApplication::translate("introduce", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class introduce: public Ui_introduce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCE_H
