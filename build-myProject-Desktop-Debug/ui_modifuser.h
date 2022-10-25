/********************************************************************************
** Form generated from reading UI file 'modifuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFUSER_H
#define UI_MODIFUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_modifuser
{
public:
    QLabel *label;
    QLineEdit *inp_ID;
    QLabel *label_2;
    QRadioButton *Admin;
    QRadioButton *Root;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *modifuser)
    {
        if (modifuser->objectName().isEmpty())
            modifuser->setObjectName(QString::fromUtf8("modifuser"));
        modifuser->resize(230, 247);
        label = new QLabel(modifuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 71, 31));
        inp_ID = new QLineEdit(modifuser);
        inp_ID->setObjectName(QString::fromUtf8("inp_ID"));
        inp_ID->setGeometry(QRect(140, 80, 51, 21));
        label_2 = new QLabel(modifuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 120, 71, 31));
        Admin = new QRadioButton(modifuser);
        Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->setGeometry(QRect(110, 130, 51, 19));
        Root = new QRadioButton(modifuser);
        Root->setObjectName(QString::fromUtf8("Root"));
        Root->setGeometry(QRect(170, 130, 51, 19));
        pushButton = new QPushButton(modifuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 170, 80, 31));
        plainTextEdit = new QPlainTextEdit(modifuser);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 10, 121, 51));
        plainTextEdit->setLayoutDirection(Qt::LeftToRight);
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 8pt \"Nirmala UI Semilight\";\n"
"text-align: center;"));

        retranslateUi(modifuser);

        QMetaObject::connectSlotsByName(modifuser);
    } // setupUi

    void retranslateUi(QDialog *modifuser)
    {
        modifuser->setWindowTitle(QApplication::translate("modifuser", "Dialog", nullptr));
        label->setText(QApplication::translate("modifuser", "Identifiant", nullptr));
        label_2->setText(QApplication::translate("modifuser", "Identifiant", nullptr));
        Admin->setText(QApplication::translate("modifuser", "Admin", nullptr));
        Root->setText(QApplication::translate("modifuser", "Root", nullptr));
        pushButton->setText(QApplication::translate("modifuser", "Confirmer", nullptr));
        plainTextEdit->setPlainText(QApplication::translate("modifuser", "Modification du niveau d'acces utilisateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifuser: public Ui_modifuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFUSER_H
