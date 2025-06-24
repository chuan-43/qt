#ifndef INTRODUCE_OR_REVIEW_H
#define INTRODUCE_OR_REVIEW_H

#include <QDialog>

namespace Ui {
class introduce_or_review;
}

class introduce_or_review : public QDialog
{
    Q_OBJECT

public:
    explicit introduce_or_review(QWidget *parent = nullptr);
    ~introduce_or_review();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::introduce_or_review *ui;
};

#endif // INTRODUCE_OR_REVIEW_H
