#include "regsuccess.h"
#include "ui_regsuccess.h"

regSuccess::regSuccess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regSuccess)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

regSuccess::~regSuccess()
{
    delete ui;
}
