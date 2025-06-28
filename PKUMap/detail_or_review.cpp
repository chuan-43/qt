#include "detail_or_review.h"
#include "ui_detail_or_review.h"
#include "detailwindow.h"
#include "review.h"
#include <QScreen>
#include <QString>

detail_or_review::detail_or_review(const QString &name, const QString &detail,QWidget *parent)
    : QDialog(parent),spotname(name),spotdetail(detail)
    , ui(new Ui::detail_or_review)
{
    ui->setupUi(this);
    this->setWindowTitle(this->spotname);
}

detail_or_review::~detail_or_review()
{
    delete ui;
}

void detail_or_review::on_pushButton_clicked()
{
    // 创建详情窗口（不设置父对象，作为独立窗口）
    DetailWindow *detailWin = new DetailWindow(spotdetail);
    detailWin->setAttribute(Qt::WA_DeleteOnClose); // 关闭时自动删除

    // 设置模态，防止同时打开多个窗口
    detailWin->setWindowModality(Qt::ApplicationModal);

    // 居中显示
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    int x = (screenGeometry.width() - detailWin->width()) / 2;
    int y = (screenGeometry.height() - detailWin->height()) / 2;
    detailWin->move(x, y);

    detailWin->show();
}


void detail_or_review::on_pushButton_2_clicked()
{
    review *current_review=new review(this);
    current_review->loadComments(this->spotname);
    current_review->update_collect();
    current_review->exec();
}

