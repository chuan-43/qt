#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>

namespace Ui {
class review;
}

class review : public QDialog
{
    Q_OBJECT

public:
    explicit review(QWidget *parent = nullptr);
    ~review();

private:
    Ui::review *ui;
};

#endif // REVIEW_H
