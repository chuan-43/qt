#include "review.h"
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QHBoxLayout>
#include "GlobalData.h"
#include "ui_review.h"

review::review(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::review)
{
    ui->setupUi(this);
    this->setWindowTitle("评论区");
    this->listView = new QListView(this);
    this->textEdit = new QTextEdit(this);
    this->pushButton = new QPushButton("发送", this);

    // 设置布局
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(listView);

    QHBoxLayout *bottomLayout = new QHBoxLayout();
    bottomLayout->addWidget(textEdit);
    bottomLayout->addWidget(pushButton);

    listView->setFixedWidth(350);
    layout->addLayout(bottomLayout);
    if (!listView || !textEdit || !pushButton) {
        qCritical() << "UI元素初始化失败";
        return;
    }
    starButton = new QPushButton("★", this);
    starButton->setFixedSize(40, 40);
    starButton->move(360, 0);
    Stylesheet = QString("QPushButton {"
                              "   border: none;"
                              "   background-color: transparent;"
                              "   color: rgba(240,240,240,0.8);"
                              "   font-size: 24px;"
                              "}"
                              "QPushButton:hover {"
                              "   color: #FFD700;"
                              "}");

    //初始化模型
    commentModel = new QStringListModel(this);
    listView->setModel(commentModel);

    // 连接信号槽
    connect(pushButton, &QPushButton::clicked, this, &review::on_pushButton_clicked);
    connect(starButton, &QPushButton::clicked,[this]() { if_collected(); });
    if (!currentSpot.isEmpty()) {
        loadComments(currentSpot);
    }
}

review::~review()
{
    delete ui;
}

void review::loadComments(const QString &spotName)
{
    currentSpot = spotName;
    QStringList comments;


    // 从数据库加载评论（示例）
    QSqlQuery query;
    query.prepare("SELECT username, content FROM comments WHERE spot_name = ?");
    query.addBindValue(spotName);

    if (!query.exec()) {
        qDebug() << "加载评论失败:" ;
        return;
    }
    if (query.exec()) {
        while (query.next()) {
            comments << QString("%1: %2")
                            .arg(query.value(0).toString())
                            .arg(query.value(1).toString());
        }
    }

    commentModel->setStringList(comments);
}

//点击收藏按钮
void review::if_collected(){
    if (!QSqlDatabase::database().isOpen()) {
        qDebug() << "数据库未打开！";
        return;
    }
    qDebug()<<GlobalData::instance().currentUserId() <<currentSpot;
    bool flag = false;
    QSqlQuery query;
    query.prepare("SELECT collected FROM favorites WHERE username = ? AND spot_name = ?");
    query.addBindValue(GlobalData::instance().currentUserId());
    query.addBindValue(currentSpot);
    if(query.exec() && query.next()){
        flag = (query.value(0) == 1);
    }else{
        qDebug() <<"meizhaodao";
        if(!QSqlDatabase::database().isOpen()) {
            qDebug() << "数据库未连接!";
            return;
        }
        query.prepare("INSERT INTO favorites(username, spot_name, collected)"
                      "VALUES (:u, :s, :c)");
        query.bindValue(":u",GlobalData::instance().currentUserId());
        query.bindValue(":s",currentSpot);
        query.bindValue(":c",0);
        query.exec();
    }
    if(!flag){
        // 选中状态 - 设置为金色
        starButton->setStyleSheet(QString(
                                      "QPushButton {"
                                      "   border: none;"
                                      "   background-color: transparent;"
                                      "   color: #FFD700;"
                                      "   font-size: 24px;"
                                      "}"
                                      ));
    } else {
        // 未选中状态 - 恢复原始样式

        starButton->setStyleSheet(Stylesheet);
    }
    int collect = (!flag)? 1 : 0;
    query.prepare("UPDATE favorites SET collected = ? WHERE username = ? AND spot_name = ?");
    query.addBindValue(collect);
    query.addBindValue(GlobalData::instance().currentUserId());
    query.addBindValue(currentSpot);
    query.exec();
    QSqlQuery qquery;
    qquery.prepare("SELECT collected FROM favorites WHERE username = ? AND spot_name = ?");
    qquery.addBindValue(GlobalData::instance().currentUserId());
    qquery.addBindValue(currentSpot);
    if(qquery.exec() && qquery.next()){
        qDebug()<<qquery.value(0);
    }else{
        qDebug() << "未找到景点数据";
    }

    /*QString username = GlobalData::instance().currentUserId();
    QString spotName = currentSpot;

    qDebug() << "=== 开始调试 ===";
    qDebug() << "参数: username =" << username << "spotName =" << spotName;

    // 1. 检查数据库连接
    if(!QSqlDatabase::database().isOpen()) {
        qDebug() << "错误: 数据库未连接!";
        return;
    }

    // 2. 检查表结构
    QSqlQuery schemaQuery;
    if(!schemaQuery.exec("PRAGMA table_info(favorites)")) {
        qDebug() << "无法获取表结构:" << schemaQuery.lastError();
    } else {
        qDebug() << "favorites表结构:";
        while(schemaQuery.next()) {
            qDebug() << schemaQuery.value(1).toString() << ":"
                     << schemaQuery.value(2).toString();
        }
    }

    // 3. 检查用户是否存在
    QSqlQuery userQuery;
    userQuery.prepare("SELECT 1 FROM user WHERE username = ?");
    userQuery.addBindValue(username);
    if(!userQuery.exec()) {
        qDebug() << "检查用户失败:" << userQuery.lastError();
    } else if(!userQuery.next()) {
        qDebug() << "错误: 用户不存在!";
        return;
    }

    // 4. 尝试插入数据
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO favorites(username, spot_name, collected) "
                        "VALUES (:user, :spot, 0)");
    insertQuery.bindValue(":user", username);
    insertQuery.bindValue(":spot", spotName);

    if(!insertQuery.exec()) {
        qDebug() << "=== 插入失败 ===";
        qDebug() << "错误代码:" << insertQuery.lastError().nativeErrorCode();
        qDebug() << "错误信息:" << insertQuery.lastError().text();
        qDebug() << "数据库信息:" << insertQuery.lastError().driverText();
        qDebug() << "执行的SQL:" << insertQuery.lastQuery();

        // 尝试直接执行SQL
        QString rawSQL = QString("INSERT INTO favorites(username, spot_name, collected) "
                                 "VALUES ('%1', '%2', 0)")
                             .arg(username).arg(spotName);
        QSqlQuery rawQuery;
        if(!rawQuery.exec(rawSQL)) {
            qDebug() << "直接执行也失败:" << rawQuery.lastError();
        } else {
            qDebug() << "直接执行成功! 问题可能在参数绑定";
        }
    } else {
        qDebug() << "插入成功!";
    }*/
}

//获取最新的收藏状态
void review::update_collect(){
    bool flag=false;
    QSqlQuery query;
    query.prepare("SELECT collected FROM favorites WHERE username = ? AND spot_name = ?");
    query.addBindValue(GlobalData::instance().currentUserId());
    query.addBindValue(currentSpot);
    if(query.exec() && query.next()){
        flag = (query.value(0) == 1);
    }else{
        qDebug() << "未找到景点数据";
    }
    if(flag){
        // 选中状态 - 设置为金色
        starButton->setStyleSheet(QString(
            "QPushButton {"
            "   border: none;"
            "   background-color: transparent;"
            "   color: #FFD700;"
            "   font-size: 24px;"
            "}"
            ));
    } else {
        // 未选中状态 - 原始样式
        starButton->setStyleSheet(Stylesheet);
    }
}

//发送评论
void review::on_pushButton_clicked()
{
    QString content = textEdit->toPlainText().trimmed();
    if (content.isEmpty())
        return;

    // 获取当前用户（需实现用户系统）
    QString username = GlobalData::instance().currentUserId();

    // 保存到数据库（示例）
    QSqlQuery query;
    query.prepare("INSERT INTO comments(spot_name, username, content) VALUES (?, ?, ?)");
    query.addBindValue(currentSpot);
    query.addBindValue(username);
    query.addBindValue(content);

    if (!query.exec()) {
        qDebug() << "插入评论失败:" ;
        return;
    }

    // 更新显示
    QStringList comments = commentModel->stringList();
    comments << QString("%1: %2").arg(username).arg(content);
    commentModel->setStringList(comments);

    // 清空输入框
    textEdit->clear();
}
