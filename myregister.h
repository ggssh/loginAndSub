#ifndef MYREGISTER_H
#define MYREGISTER_H

#include <QWidget>
#include <QMainWindow>
#include <qt_windows.h>
#include <QtCore>
#include <QtNetwork>
#include "regsuccess.h"
#include "msgProcess.h"

namespace Ui {
class MyRegister;
}

class MyRegister : public QWidget
{
    Q_OBJECT

public:
    explicit MyRegister(QWidget *parent = nullptr);
    ~MyRegister();

private slots:
    void afterReply(QNetworkReply *);
    void on_registerButton_clicked();

private:
    Ui::MyRegister *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    regSuccess *rs;
};

#endif // MYREGISTER_H
