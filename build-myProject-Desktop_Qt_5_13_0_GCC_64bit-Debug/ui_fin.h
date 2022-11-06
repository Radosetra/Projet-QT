/********************************************************************************
** Form generated from reading UI file 'fin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIN_H
#define UI_FIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit;
    QLabel *label;

    void setupUi(QDialog *fin)
    {
        if (fin->objectName().isEmpty())
            fin->setObjectName(QString::fromUtf8("fin"));
        fin->resize(296, 148);
        pushButton = new QPushButton(fin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 100, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 21, 5);\n"
"color: rgb(7, 7, 7);"));
        pushButton_2 = new QPushButton(fin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 100, 81, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(21, 21, 21);\n"
"background-color: rgb(212, 212, 212);"));
        dateEdit = new QDateEdit(fin);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 50, 261, 31));
        label = new QLabel(fin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 251, 31));

        retranslateUi(fin);

        QMetaObject::connectSlotsByName(fin);
    } // setupUi

    void retranslateUi(QDialog *fin)
    {
        fin->setWindowTitle(QCoreApplication::translate("fin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("fin", "Annuler", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fin", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("fin", "Entrer la date de fin d'inscription:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fin: public Ui_fin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIN_H
