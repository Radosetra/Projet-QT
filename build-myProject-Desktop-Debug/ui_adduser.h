/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_adduser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *inp_nom;
    QLineEdit *inp_prenom;
    QLineEdit *inp_mail;
    QLineEdit *inp_psd;
    QLineEdit *inp_pwd;
    QRadioButton *Admin;
    QRadioButton *Root;
    QPushButton *pushButton;
    QLabel *label_7;

    void setupUi(QDialog *adduser)
    {
        if (adduser->objectName().isEmpty())
            adduser->setObjectName(QString::fromUtf8("adduser"));
        adduser->resize(325, 358);
        label = new QLabel(adduser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 52, 61, 31));
        label_2 = new QLabel(adduser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 61, 31));
        label_3 = new QLabel(adduser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 130, 61, 31));
        label_4 = new QLabel(adduser);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 61, 31));
        label_5 = new QLabel(adduser);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 210, 61, 31));
        label_6 = new QLabel(adduser);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 250, 71, 31));
        inp_nom = new QLineEdit(adduser);
        inp_nom->setObjectName(QString::fromUtf8("inp_nom"));
        inp_nom->setGeometry(QRect(160, 50, 113, 21));
        inp_prenom = new QLineEdit(adduser);
        inp_prenom->setObjectName(QString::fromUtf8("inp_prenom"));
        inp_prenom->setGeometry(QRect(160, 90, 113, 21));
        inp_mail = new QLineEdit(adduser);
        inp_mail->setObjectName(QString::fromUtf8("inp_mail"));
        inp_mail->setGeometry(QRect(160, 130, 113, 21));
        inp_psd = new QLineEdit(adduser);
        inp_psd->setObjectName(QString::fromUtf8("inp_psd"));
        inp_psd->setGeometry(QRect(160, 170, 113, 21));
        inp_pwd = new QLineEdit(adduser);
        inp_pwd->setObjectName(QString::fromUtf8("inp_pwd"));
        inp_pwd->setGeometry(QRect(160, 250, 113, 21));
        inp_pwd->setEchoMode(QLineEdit::Password);
        Admin = new QRadioButton(adduser);
        Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->setGeometry(QRect(160, 220, 51, 19));
        Root = new QRadioButton(adduser);
        Root->setObjectName(QString::fromUtf8("Root"));
        Root->setGeometry(QRect(220, 220, 51, 19));
        pushButton = new QPushButton(adduser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 300, 80, 31));
        label_7 = new QLabel(adduser);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 0, 301, 41));

        retranslateUi(adduser);

        QMetaObject::connectSlotsByName(adduser);
    } // setupUi

    void retranslateUi(QDialog *adduser)
    {
        adduser->setWindowTitle(QApplication::translate("adduser", "Dialog", nullptr));
        label->setText(QApplication::translate("adduser", "Nom", nullptr));
        label_2->setText(QApplication::translate("adduser", "Prenom(s)", nullptr));
        label_3->setText(QApplication::translate("adduser", "Adresse mail", nullptr));
        label_4->setText(QApplication::translate("adduser", "Pseudo", nullptr));
        label_5->setText(QApplication::translate("adduser", "Niveau", nullptr));
        label_6->setText(QApplication::translate("adduser", "Mot de passe", nullptr));
        Admin->setText(QApplication::translate("adduser", "Admin", nullptr));
        Root->setText(QApplication::translate("adduser", "Root", nullptr));
        pushButton->setText(QApplication::translate("adduser", "Confirmer", nullptr));
        label_7->setText(QApplication::translate("adduser", "Les informations serviront a configure le profile des utilisateurs ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adduser: public Ui_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
