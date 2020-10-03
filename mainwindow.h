#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qt_windows.h>
#include <QMainWindow>
#include <QtNetwork>
#include "myregister.h"
#include "mqttwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void afterReply(QNetworkReply *);
    void on_loginButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    MyRegister *reg;
    mqttWindow *mw;
};
#endif // MAINWINDOW_H
