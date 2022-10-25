/********************************************************************************
** Form generated from reading UI file 'reinscription.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REINSCRIPTION_H
#define UI_REINSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_reinscription
{
public:
    QPushButton *logout;
    QPushButton *ajouter;
    QTableView *vue;
    QPushButton *supprimer;
    QPushButton *modifier;
    QLabel *label;
    QPushButton *Afficher;

    void setupUi(QDialog *reinscription)
    {
        if (reinscription->objectName().isEmpty())
            reinscription->setObjectName(QString::fromUtf8("reinscription"));
        reinscription->resize(711, 495);
        logout = new QPushButton(reinscription);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(590, 460, 80, 25));
        logout->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 21, 0);\n"
"color:balck;"));
        ajouter = new QPushButton(reinscription);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        ajouter->setGeometry(QRect(490, 460, 80, 25));
        vue = new QTableView(reinscription);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setGeometry(QRect(40, 40, 631, 401));
        supprimer = new QPushButton(reinscription);
        supprimer->setObjectName(QString::fromUtf8("supprimer"));
        supprimer->setGeometry(QRect(310, 460, 80, 25));
        supprimer->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 7, 7);"));
        modifier = new QPushButton(reinscription);
        modifier->setObjectName(QString::fromUtf8("modifier"));
        modifier->setGeometry(QRect(400, 460, 80, 25));
        label = new QLabel(reinscription);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 151, 21));
        Afficher = new QPushButton(reinscription);
        Afficher->setObjectName(QString::fromUtf8("Afficher"));
        Afficher->setGeometry(QRect(220, 460, 80, 25));
        Afficher->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 7, 7);"));

        retranslateUi(reinscription);

        QMetaObject::connectSlotsByName(reinscription);
    } // setupUi

    void retranslateUi(QDialog *reinscription)
    {
        reinscription->setWindowTitle(QApplication::translate("reinscription", "Dialog", nullptr));
        logout->setText(QApplication::translate("reinscription", "retour", nullptr));
        ajouter->setText(QApplication::translate("reinscription", "ajouter", nullptr));
        supprimer->setText(QApplication::translate("reinscription", "Supprimer", nullptr));
        modifier->setText(QApplication::translate("reinscription", "Modifier", nullptr));
        label->setText(QApplication::translate("reinscription", "Liste des utilisateurs enregitres", nullptr));
        Afficher->setText(QApplication::translate("reinscription", "Afficher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reinscription: public Ui_reinscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REINSCRIPTION_H
