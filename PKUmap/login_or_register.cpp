#include "login_or_register.h"
#include "ui_login_or_register.h"
#include "mainwindow.h"
#include "regist.h"

Login_or_Register::Login_or_Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_or_Register)
{
    ui->setupUi(this);
}

Login_or_Register::~Login_or_Register()
{
    delete ui;
}


void Login_or_Register::on_pushbutton_login_clicked()
{
    MainWindow* map=new MainWindow();
    map->show();
    hide();
}


void Login_or_Register::on_commandLinkButton_toRegist_clicked()
{
    regist* r=new regist(this);
    connect(r,&regist::completed,this,[this](){this->show();});
    this->hide();
    r->exec();
}

