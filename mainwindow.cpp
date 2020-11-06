#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "msgProcess.h"

#define TR(str) (QStringLiteral(str))


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(TR("用户登录demo"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
   // mw = new mqttWindow();
    //mw->show();
    manager = new QNetworkAccessManager(this);
    connect(manager,SIGNAL(finished(QNetworkReply*)), this, SLOT(afterReply(QNetworkReply*)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::afterReply(QNetworkReply *)
{
    //对来自服务端的信息进行处理，获取返回的状态码
    if(reply->error())
    {
        qDebug() << TR("ERROR") << endl;
    }
    else
    {
        int valueCode = getKeyValue(reply->readAll(), "code").toInt();
        if(valueCode == 200)
        {
            setWindowTitle(TR("登录成功"));
            Sleep(500);
            this->close();
            mw = new mqttWindow();
            mw->show();
        }
        else
        {
            setWindowTitle(TR("登录失败，请检查密码是否有误"));
            Sleep(500);
            ui->userLineEdit->clear();
            ui->passwordLineEdit->clear();
        }
    }

    reply->deleteLater();
}



void MainWindow::on_loginButton_clicked()
{
    //点击登录按钮后向服务端发送get请求
    //此时为虚拟接口
    QString str = "http://121.41.229.179:8081/user/login/";

    ui->userLineEdit->setStyleSheet("color:black");
    ui->passwordLineEdit->setStyleSheet("color:black");

    if(!ui->userLineEdit->text().isEmpty()&&!ui->passwordLineEdit->text().isEmpty())
    {
        //QString str1 = ui->userLineEdit->text();
        //QString str2 = ui->passwordLineEdit->text();
        QString str1 = "2084teamyyz";
        QString str2 = "2084teamyyz";

        QString str3 = QString("%1/%2").arg(str1.data(),str2.data());
        str = str + str3;
        qDebug() << str << endl;
        QUrl url(str);
        reply = manager->get(QNetworkRequest(url));

    }
    else
    {
        if(ui->userLineEdit->text().isEmpty())
        {
            ui->userLineEdit->setPlaceholderText(TR("用户名不能为空"));
            Sleep(500);
        }
        if(ui->passwordLineEdit->text().isEmpty())
        {
            ui->passwordLineEdit->setPlaceholderText(TR("密码不能为空"));
            Sleep(500);
        }
        return;
    }

}

void MainWindow::on_registerButton_clicked()
{
    //reg = new MyRegister();
    //reg->show();
}
