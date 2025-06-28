#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sqlite_Init();
    MainWindow w;
    w.show();
    return a.exec();
}
