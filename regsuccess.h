#ifndef REGSUCCESS_H
#define REGSUCCESS_H

#include <QWidget>

namespace Ui {
class regSuccess;
}

class regSuccess : public QWidget
{
    Q_OBJECT

public:
    explicit regSuccess(QWidget *parent = nullptr);
    ~regSuccess();

private:
    Ui::regSuccess *ui;
};

#endif // REGSUCCESS_H
