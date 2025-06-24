#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void updateBackgroundSize();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsView *mapView;    // 地图显示区域
    QGraphicsScene *mapScene;// 地图场景
    QLabel backgroundLabel;
    void initMap();

};
#endif // MAINWINDOW_H
