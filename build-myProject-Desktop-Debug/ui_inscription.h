/********************************************************************************
** Form generated from reading UI file 'inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSCRIPTION_H
#define UI_INSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_inscription
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *bar_inp_idEtudiant;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *idEtudian;
    QLabel *inp_idEtudiant;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *inp_nom;
    QLabel *inp_prenom;
    QLabel *inp_naissance;
    QLabel *inp_niveau;
    QLabel *inp_observation;
    QLabel *inp_autEchel;
    QLabel *inp_CIN;
    QLabel *inp_type;
    QLabel *inp_montPayer;
    QLabel *inp_montApayer;
    QLabel *inp_StatuPaiement;
    QPushButton *logout;
    QGroupBox *groupBox_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *vers_inp_montant;
    QLineEdit *vers_inp_borderau;
    QDateEdit *vers_inp_date;
    QPushButton *pushButton_2;

    void setupUi(QDialog *inscription)
    {
        if (inscription->objectName().isEmpty())
            inscription->setObjectName(QString::fromUtf8("inscription"));
        inscription->resize(983, 526);
        groupBox = new QGroupBox(inscription);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 511, 441));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 90, 80, 25));
        bar_inp_idEtudiant = new QLineEdit(groupBox);
        bar_inp_idEtudiant->setObjectName(QString::fromUtf8("bar_inp_idEtudiant"));
        bar_inp_idEtudiant->setGeometry(QRect(10, 90, 171, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 151, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 170, 71, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 71, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 230, 71, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 71, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 290, 71, 31));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 340, 81, 31));
        idEtudian = new QLabel(groupBox);
        idEtudian->setObjectName(QString::fromUtf8("idEtudian"));
        idEtudian->setGeometry(QRect(220, 140, 47, 31));
        inp_idEtudiant = new QLabel(groupBox);
        inp_idEtudiant->setObjectName(QString::fromUtf8("inp_idEtudiant"));
        inp_idEtudiant->setGeometry(QRect(280, 150, 61, 21));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 230, 71, 31));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 260, 71, 31));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(250, 290, 141, 31));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 370, 101, 31));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 340, 91, 31));
        inp_nom = new QLabel(groupBox);
        inp_nom->setObjectName(QString::fromUtf8("inp_nom"));
        inp_nom->setGeometry(QRect(70, 170, 341, 21));
        inp_prenom = new QLabel(groupBox);
        inp_prenom->setObjectName(QString::fromUtf8("inp_prenom"));
        inp_prenom->setGeometry(QRect(90, 200, 341, 21));
        inp_naissance = new QLabel(groupBox);
        inp_naissance->setObjectName(QString::fromUtf8("inp_naissance"));
        inp_naissance->setGeometry(QRect(100, 230, 141, 21));
        inp_niveau = new QLabel(groupBox);
        inp_niveau->setObjectName(QString::fromUtf8("inp_niveau"));
        inp_niveau->setGeometry(QRect(300, 230, 51, 21));
        inp_observation = new QLabel(groupBox);
        inp_observation->setObjectName(QString::fromUtf8("inp_observation"));
        inp_observation->setGeometry(QRect(330, 260, 61, 21));
        inp_autEchel = new QLabel(groupBox);
        inp_autEchel->setObjectName(QString::fromUtf8("inp_autEchel"));
        inp_autEchel->setGeometry(QRect(400, 290, 31, 21));
        inp_CIN = new QLabel(groupBox);
        inp_CIN->setObjectName(QString::fromUtf8("inp_CIN"));
        inp_CIN->setGeometry(QRect(70, 260, 141, 21));
        inp_type = new QLabel(groupBox);
        inp_type->setObjectName(QString::fromUtf8("inp_type"));
        inp_type->setGeometry(QRect(70, 290, 141, 21));
        inp_montPayer = new QLabel(groupBox);
        inp_montPayer->setObjectName(QString::fromUtf8("inp_montPayer"));
        inp_montPayer->setGeometry(QRect(110, 340, 131, 21));
        inp_montApayer = new QLabel(groupBox);
        inp_montApayer->setObjectName(QString::fromUtf8("inp_montApayer"));
        inp_montApayer->setGeometry(QRect(350, 340, 131, 21));
        inp_StatuPaiement = new QLabel(groupBox);
        inp_StatuPaiement->setObjectName(QString::fromUtf8("inp_StatuPaiement"));
        inp_StatuPaiement->setGeometry(QRect(140, 370, 131, 21));
        logout = new QPushButton(inscription);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(890, 480, 80, 31));
        logout->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 15, 7);\n"
"color:black;"));
        groupBox_2 = new QGroupBox(inscription);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 30, 421, 441));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 130, 71, 31));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 190, 81, 31));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(60, 250, 111, 31));
        vers_inp_montant = new QLineEdit(groupBox_2);
        vers_inp_montant->setObjectName(QString::fromUtf8("vers_inp_montant"));
        vers_inp_montant->setGeometry(QRect(190, 130, 141, 31));
        vers_inp_borderau = new QLineEdit(groupBox_2);
        vers_inp_borderau->setObjectName(QString::fromUtf8("vers_inp_borderau"));
        vers_inp_borderau->setGeometry(QRect(190, 190, 141, 31));
        vers_inp_date = new QDateEdit(groupBox_2);
        vers_inp_date->setObjectName(QString::fromUtf8("vers_inp_date"));
        vers_inp_date->setGeometry(QRect(190, 250, 110, 31));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 330, 80, 31));

        retranslateUi(inscription);

        QMetaObject::connectSlotsByName(inscription);
    } // setupUi

    void retranslateUi(QDialog *inscription)
    {
        inscription->setWindowTitle(QApplication::translate("inscription", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("inscription", "Verification", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("inscription", "<html><head/><body><p>&lt;center&gt;&lt;strong&gt;Add&lt;/strong&gt;&lt;/center&gt;</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("inscription", "Rechercher", nullptr));
        label->setText(QApplication::translate("inscription", "<html><head/><body><p>No matricule/concours:</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("inscription", "Nom :", nullptr));
        label_3->setText(QApplication::translate("inscription", "Prenom :", nullptr));
        label_4->setText(QApplication::translate("inscription", "Ne(e) le :", nullptr));
        label_5->setText(QApplication::translate("inscription", "CIN :", nullptr));
        label_6->setText(QApplication::translate("inscription", "Type :", nullptr));
        label_7->setText(QApplication::translate("inscription", "Montant payer:", nullptr));
        idEtudian->setText(QApplication::translate("inscription", "No:", nullptr));
        inp_idEtudiant->setText(QString());
        label_8->setText(QApplication::translate("inscription", "Niveau :", nullptr));
        label_9->setText(QApplication::translate("inscription", "Observation :", nullptr));
        label_10->setText(QApplication::translate("inscription", "Autorisation echellonement :", nullptr));
        label_11->setText(QApplication::translate("inscription", "Status de paiement:", nullptr));
        label_12->setText(QApplication::translate("inscription", "Montant a payer:", nullptr));
        inp_nom->setText(QString());
        inp_prenom->setText(QString());
        inp_naissance->setText(QString());
        inp_niveau->setText(QString());
        inp_observation->setText(QString());
        inp_autEchel->setText(QString());
        inp_CIN->setText(QString());
        inp_type->setText(QString());
        inp_montPayer->setText(QString());
        inp_montApayer->setText(QString());
        inp_StatuPaiement->setText(QString());
        logout->setText(QApplication::translate("inscription", "Retour", nullptr));
        groupBox_2->setTitle(QApplication::translate("inscription", "Versement", nullptr));
        label_13->setText(QApplication::translate("inscription", "Montant :", nullptr));
        label_14->setText(QApplication::translate("inscription", "No bordereau:", nullptr));
        label_15->setText(QApplication::translate("inscription", "Date de versement :", nullptr));
        pushButton_2->setText(QApplication::translate("inscription", "Confirmer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inscription: public Ui_inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSCRIPTION_H
