#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>
#include <QListView>
#include <QStringListModel>
#include <QTextEdit>

namespace Ui {
class review;
}

class review : public QDialog
{
    Q_OBJECT

public:
    explicit review(QWidget *parent = nullptr);
    ~review();
    void loadComments(const QString &spotName); // 加载指定景点的评论
    void update_collect();

private slots:
    void on_pushButton_clicked();
    void if_collected();

private:
    Ui::review *ui;
    QStringListModel *commentModel; // 评论数据模型
    QString currentSpot;            // 当前景点名称
    QPushButton *starButton;        //收藏按钮
    bool isClicked = false;               //按钮点击状态
    QString Stylesheet;             //按钮样式表
    QListView *listView;
    QTextEdit *textEdit;
    QPushButton *pushButton;
};

#endif // REVIEW_H
