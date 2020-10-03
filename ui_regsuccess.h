/********************************************************************************
** Form generated from reading UI file 'regsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGSUCCESS_H
#define UI_REGSUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regSuccess
{
public:
    QLabel *label;

    void setupUi(QWidget *regSuccess)
    {
        if (regSuccess->objectName().isEmpty())
            regSuccess->setObjectName(QString::fromUtf8("regSuccess"));
        regSuccess->resize(303, 168);
        label = new QLabel(regSuccess);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 161, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(regSuccess);

        QMetaObject::connectSlotsByName(regSuccess);
    } // setupUi

    void retranslateUi(QWidget *regSuccess)
    {
        regSuccess->setWindowTitle(QCoreApplication::translate("regSuccess", "Form", nullptr));
        label->setText(QCoreApplication::translate("regSuccess", "\346\263\250\345\206\214\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regSuccess: public Ui_regSuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGSUCCESS_H
