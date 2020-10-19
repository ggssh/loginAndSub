#ifndef MQTTWINDOW_H
#define MQTTWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtMqtt/QMqttClient>
#include <QtNetwork>
#include <QtMqtt/QMqttSubscription>
#include "operations.h"

namespace Ui {
class mqttWindow;
}

class mqttWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mqttWindow(QWidget *parent = nullptr);
    ~mqttWindow();

private slots:
    void mySubscribe();
    void myConnect();
    void hhh();
    void on_connectButton_clicked();

private:
    Ui::mqttWindow *ui;
    QMqttClient *m_client;

};

#endif // MQTTWINDOW_H
