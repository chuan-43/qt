#ifndef LOGIN_OR_REGISTER_H
#define LOGIN_OR_REGISTER_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Login_or_Register;
}

class Login_or_Register : public QDialog
{
    Q_OBJECT

public:
    explicit Login_or_Register(QWidget *parent = nullptr);
    ~Login_or_Register();

private slots:

    void on_pushbutton_login_clicked();

    void on_commandLinkButton_toRegist_clicked();

private:
    Ui::Login_or_Register *ui;
};

#endif // LOGIN_OR_REGISTER_H
