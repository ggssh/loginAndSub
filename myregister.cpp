#include "myregister.h"
#include "ui_myregister.h"

#define TR(str) (QStringLiteral(str))

MyRegister::MyRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyRegister)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

MyRegister::~MyRegister()
{
    delete ui;
}

void MyRegister::on_registerButton_clicked()
{
    QString str = "http://121.41.229.179:8081/user/register/";
    QString str1,str2,str3,str4;
    if(!ui->userLineEdit->text().isEmpty() && !ui->passwordLineEdit->text().isEmpty() && !ui->confirmLineEdit->text().isEmpty()
             && !ui->emailLineEdit->text().isEmpty() && !ui->phoneLineEdit->text().isEmpty())
    {
        if(ui->passwordLineEdit->text() != ui->confirmLineEdit->text())
        {
            ui->confirmLineEdit->clear();
            ui->confirmLineEdit->setPlaceholderText(TR("两次密码输入不符，请重新输入"));
            return;
        }

        str1 = ui->userLineEdit->text();
        str2 = ui->passwordLineEdit->text();
        str3 = ui->emailLineEdit->text();
        str4 = ui->phoneLineEdit->text();

        QString str5 = QString("%1/%2/%3/%4").arg(str1,str2,str3,str4);
        str.append(str5);
        //qDebug() << str << endl;
        QUrl url(str);
        reply = manager->get(QNetworkRequest(url));
    }
}

void MyRegister::afterReply(QNetworkReply *)
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
            rs = new regSuccess();
            rs->show();
            Sleep(500);
            this->close();
        }
        else
        {
            setWindowTitle(TR("注册失败，请选择其他的用户名再尝试"));
            Sleep(500);
            ui->userLineEdit->clear();
            ui->passwordLineEdit->clear();
            ui->confirmLineEdit->clear();
            ui->emailLineEdit->clear();
            ui->phoneLineEdit->clear();
        }
    }

    reply->deleteLater();
}
