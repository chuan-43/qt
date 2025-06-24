#include "regist.h"
#include "ui_regist.h"
#include "login_or_register.h"

regist::regist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::regist)
{
    ui->setupUi(this);

}

regist::~regist()
{
    delete ui;
}

void regist::on_pushButton_clicked()
{

}


void regist::on_pushButton_2_clicked()
{
    emit completed();
    close();
}

