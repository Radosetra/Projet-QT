/********************************************************************************
** Form generated from reading UI file 'rmuser.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RMUSER_H
#define UI_RMUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_rmuser
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *inp_ID;
    QPushButton *pushButton;

    void setupUi(QDialog *rmuser)
    {
        if (rmuser->objectName().isEmpty())
            rmuser->setObjectName(QString::fromUtf8("rmuser"));
        rmuser->resize(259, 163);
        label = new QLabel(rmuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 116, 41));
        label_2 = new QLabel(rmuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 61, 31));
        inp_ID = new QLineEdit(rmuser);
        inp_ID->setObjectName(QString::fromUtf8("inp_ID"));
        inp_ID->setGeometry(QRect(120, 70, 113, 31));
        pushButton = new QPushButton(rmuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 120, 80, 31));

        retranslateUi(rmuser);

        QMetaObject::connectSlotsByName(rmuser);
    } // setupUi

    void retranslateUi(QDialog *rmuser)
    {
        rmuser->setWindowTitle(QApplication::translate("rmuser", "Dialog", nullptr));
        label->setText(QApplication::translate("rmuser", "Suppression d'utilisateur", nullptr));
        label_2->setText(QApplication::translate("rmuser", "Identifiant", nullptr));
        pushButton->setText(QApplication::translate("rmuser", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rmuser: public Ui_rmuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RMUSER_H
