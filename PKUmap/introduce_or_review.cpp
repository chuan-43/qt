#include "introduce_or_review.h"
#include "ui_introduce_or_review.h"

introduce_or_review::introduce_or_review(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::introduce_or_review)
{
    ui->setupUi(this);
}

introduce_or_review::~introduce_or_review()
{
    delete ui;
}

void introduce_or_review::on_pushButton_2_clicked()
{

}


void introduce_or_review::on_pushButton_clicked()
{

}

