/********************************************************************************
** Form generated from reading UI file 'mqttwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTTWINDOW_H
#define UI_MQTTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mqttWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *userLineEdit;
    QPushButton *connectButton;
    QLabel *label_5;
    QLineEdit *passwordLineEdit;
    QLabel *label_6;
    QPlainTextEdit *editLog;

    void setupUi(QMainWindow *mqttWindow)
    {
        if (mqttWindow->objectName().isEmpty())
            mqttWindow->setObjectName(QString::fromUtf8("mqttWindow"));
        mqttWindow->resize(414, 300);
        centralwidget = new QWidget(mqttWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        userLineEdit = new QLineEdit(centralwidget);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setReadOnly(true);

        gridLayout->addWidget(userLineEdit, 1, 1, 1, 1);

        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        gridLayout->addWidget(connectButton, 1, 2, 2, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        passwordLineEdit->setReadOnly(true);

        gridLayout->addWidget(passwordLineEdit, 2, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        editLog = new QPlainTextEdit(centralwidget);
        editLog->setObjectName(QString::fromUtf8("editLog"));

        gridLayout->addWidget(editLog, 4, 0, 1, 3);

        mqttWindow->setCentralWidget(centralwidget);

        retranslateUi(mqttWindow);

        QMetaObject::connectSlotsByName(mqttWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mqttWindow)
    {
        mqttWindow->setWindowTitle(QCoreApplication::translate("mqttWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("mqttWindow", "\350\277\236\346\216\245", nullptr));
        label_4->setText(QCoreApplication::translate("mqttWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        userLineEdit->setText(QCoreApplication::translate("mqttWindow", "Test-Windows", nullptr));
        connectButton->setText(QCoreApplication::translate("mqttWindow", "\350\277\236\346\216\245", nullptr));
        label_5->setText(QCoreApplication::translate("mqttWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        passwordLineEdit->setText(QCoreApplication::translate("mqttWindow", "Test-Windows", nullptr));
        label_6->setText(QCoreApplication::translate("mqttWindow", "\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mqttWindow: public Ui_mqttWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTWINDOW_H
