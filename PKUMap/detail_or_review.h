#ifndef DETAIL_OR_REVIEW_H
#define DETAIL_OR_REVIEW_H

#include <QDialog>

namespace Ui {
class detail_or_review;
}

class detail_or_review : public QDialog
{
    Q_OBJECT

public:
    explicit detail_or_review(const QString &name, const QString &detail,QWidget *parent = nullptr);
    ~detail_or_review();
    QString spotname;
    QString spotdetail;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::detail_or_review *ui;

};

#endif // DETAIL_OR_REVIEW_H
