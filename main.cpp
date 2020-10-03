#include "mainwindow.h"
#include "operations.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    autostart();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
