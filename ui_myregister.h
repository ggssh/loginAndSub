/********************************************************************************
** Form generated from reading UI file 'myregister.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYREGISTER_H
#define UI_MYREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyRegister
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *confirmLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *phoneLineEdit;
    QComboBox *comboBox;
    QPushButton *registerButton;

    void setupUi(QWidget *MyRegister)
    {
        if (MyRegister->objectName().isEmpty())
            MyRegister->setObjectName(QString::fromUtf8("MyRegister"));
        MyRegister->resize(468, 288);
        label_3 = new QLabel(MyRegister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 72, 15));
        label_4 = new QLabel(MyRegister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 72, 15));
        label_5 = new QLabel(MyRegister);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 210, 72, 15));
        label_6 = new QLabel(MyRegister);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 260, 72, 15));
        label = new QLabel(MyRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 72, 15));
        label_2 = new QLabel(MyRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 72, 15));
        userLineEdit = new QLineEdit(MyRegister);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(150, 20, 201, 21));
        passwordLineEdit = new QLineEdit(MyRegister);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(150, 110, 201, 21));
        confirmLineEdit = new QLineEdit(MyRegister);
        confirmLineEdit->setObjectName(QString::fromUtf8("confirmLineEdit"));
        confirmLineEdit->setGeometry(QRect(150, 160, 201, 21));
        emailLineEdit = new QLineEdit(MyRegister);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(150, 210, 201, 21));
        phoneLineEdit = new QLineEdit(MyRegister);
        phoneLineEdit->setObjectName(QString::fromUtf8("phoneLineEdit"));
        phoneLineEdit->setGeometry(QRect(150, 260, 201, 21));
        comboBox = new QComboBox(MyRegister);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 60, 87, 22));
        registerButton = new QPushButton(MyRegister);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(390, 260, 61, 28));

        retranslateUi(MyRegister);

        QMetaObject::connectSlotsByName(MyRegister);
    } // setupUi

    void retranslateUi(QWidget *MyRegister)
    {
        MyRegister->setWindowTitle(QCoreApplication::translate("MyRegister", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("MyRegister", "\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("MyRegister", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("MyRegister", "email", nullptr));
        label_6->setText(QCoreApplication::translate("MyRegister", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("MyRegister", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MyRegister", "\346\200\247\345\210\253", nullptr));
        userLineEdit->setPlaceholderText(QCoreApplication::translate("MyRegister", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\250\346\210\267\345\220\215\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MyRegister", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        confirmLineEdit->setPlaceholderText(QCoreApplication::translate("MyRegister", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("MyRegister", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\345\255\220\351\202\256\347\256\261\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        phoneLineEdit->setPlaceholderText(QCoreApplication::translate("MyRegister", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\265\350\257\235\345\217\267\347\240\201\357\274\210\345\277\205\345\241\253\357\274\211", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MyRegister", "\347\224\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MyRegister", "\345\245\263", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MyRegister", "\347\247\230\345\257\206", nullptr));

        registerButton->setText(QCoreApplication::translate("MyRegister", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyRegister: public Ui_MyRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYREGISTER_H
