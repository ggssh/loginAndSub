#include "mqttwindow.h"
#include "ui_mqttwindow.h"
#include "operations.h"
#include "msgProcess.h"
#include "mqttAction.h"

#include <QtNetwork>
#include <QtCore/QDateTime>
#include <qtmqtt/QMqttClient>
#include <QtWidgets/QMessageBox>

#define TR(str) (QStringLiteral(str))

mqttWindow::mqttWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mqttWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::Popup);
    setWindowTitle(TR("MQTT Client Demo"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowCloseButtonHint);
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小


    m_client = new QMqttClient(this);
    m_client->setHostname("150.158.186.235");
    m_client->setPort(1883);
    //为方便使用，默认用户名和密码为Test-Windows
    m_client->setUsername("Test-Windows");
    m_client->setPassword("Test-Windows");
    hhh();
   // connect(m_client,&QMqttClient::disconnected,this,&mqttWindow::trayicon);
    connect(m_client, &QMqttClient::connected, this, &mqttWindow::mySubscribe);
    connect(m_client,&QMqttClient::connected,this,&mqttWindow::trayicon);
    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic){
        const QString content = QDateTime::currentDateTime().toString() + TR("收到来自订阅主题: ") + topic.name() + TR(" 内容: ") + message + QLatin1Char('\n');
        ui->editLog->insertPlainText(content);
        //获取来自服务端的具体的指令
        QString str = getKeyValue(message, "command");
        int i = 0;
        QString msg = NULL;
        if(oper(str))
        {
            msg = "success";
        }
        else
        {
            i = -1;
            msg = "fail";
        }
        QString str1 = cmdRespToJson(i, msg);

        QString str2 = "Win-002/commands/response";

        //向指定主题发送消息试不需要订阅此主题
        //m_subscribe(m_client, "Win-002/commands/response", str1);
        m_publish(m_client, "Win-002/commands/response", str1);

    });

}

mqttWindow::~mqttWindow()
{
    delete ui;
    qApp->quit();
}

void mqttWindow::mySubscribe()
{
    m_subscribe(m_client, "Win-002/commands/request", 0);
}

void mqttWindow::myConnect()
{
    if(m_client->state() == QMqttClient::Disconnected)
    {
        m_client->connectToHost();
    }
}

void mqttWindow::hhh(){
    if(m_client->state() == QMqttClient::Disconnected)
    {
        ui->connectButton->setText(TR("断开连接"));
        m_client->connectToHost();

    }
    else
    {
        ui->connectButton->setText(TR("连接"));
        m_client->disconnectFromHost();
    }
}
void mqttWindow::on_connectButton_clicked()
{
/*
     if(m_client->state() == QMqttClient::Disconnected)
    {
        ui->connectButton->setText(TR("断开连接"));
        m_client->connectToHost();
    }
    else
    {
        ui->connectButton->setText(TR("连接"));
        m_client->disconnectFromHost();
    }

*/
}


void mqttWindow::trayicon(){
        this->hide();
        //新建QSystemTrayIcon对象
        msystemicon = new QSystemTrayIcon(this);
        //新建托盘要显示的icon
        QIcon icon=QIcon("1.jpg");
        //将icon设置到QSystemTrayIcon对象中
        msystemicon->setIcon(icon);
        //mSystemTrayIcon->setToolTip(QObject::trUtf8("测试系统托盘图标"));
        msystemicon->show();

}
