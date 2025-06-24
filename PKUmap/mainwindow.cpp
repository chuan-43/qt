#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //initMap();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// MainWindow.cpp
/*void MainWindow::initMap() {
    QGraphicsScene* mapScene = new QGraphicsScene(this);
    mapView = new QGraphicsView(mapScene, this);

    // 加载地图图片（替换为你的燕园地图路径）
    QPixmap campusMap("C:\\Users\\Lenovo\\Documents\\qt--map\\PKU.png");
    mapScene->addPixmap(campusMap);
    //ui->graphicsView->setScene(mapScene);

}

void MainWindow::updateBackgroundSize()
{
    if(!ui->backgroundLabel->pixmap().isNull())
    {
        // 保持宽高比缩放
        ui->backgroundLabel->setPixmap(
            ui->backgroundLabel->pixmap().scaled(
                ui->backgroundLabel->size(),
                Qt::KeepAspectRatioByExpanding,
                Qt::SmoothTransformation
                )
            );
    }
}*/
