#include "review.h"
#include "ui_review.h"
#include<QPushButton>

review::review(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::review)
{
    ui->setupUi(this);
    QPushButton *starButton = new QPushButton("★", this);
    starButton->setFixedSize(40, 40);
    starButton->move(360, 0);
    starButton->setStyleSheet(
        "QPushButton {"
        "   border: none;"
        "   background-color: transparent;"
        "   color: gold;"
        "   font-size: 24px;"
        "}"
        "QPushButton:hover {"
        "   color: #FFD700;"
        "}"
        "QPushButton:pressed {"
        "   color: #FFA500;"
        "}"
        );
}

review::~review()
{
    delete ui;
}
