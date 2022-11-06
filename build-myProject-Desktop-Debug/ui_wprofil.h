/********************************************************************************
** Form generated from reading UI file 'wprofil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WPROFIL_H
#define UI_WPROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_wprofil
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *profile_prenom;
    QLineEdit *profil_email;
    QLabel *label_4;
    QLineEdit *profile_nom;
    QPushButton *visionner;
    QLineEdit *profile_niveau;
    QLabel *label_3;
    QPushButton *ch_user;
    QPushButton *ch_pass;
    QPushButton *fin;
    QLabel *label_5;

    void setupUi(QDialog *wprofil)
    {
        if (wprofil->objectName().isEmpty())
            wprofil->setObjectName(QString::fromUtf8("wprofil"));
        wprofil->resize(804, 513);
        wprofil->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"	image: none;\n"
"}"));
        groupBox = new QGroupBox(wprofil);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 671, 441));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        profile_prenom = new QLineEdit(groupBox);
        profile_prenom->setObjectName(QString::fromUtf8("profile_prenom"));
        profile_prenom->setEnabled(false);
        profile_prenom->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(8, 8, 8);"));

        gridLayout->addWidget(profile_prenom, 2, 1, 1, 2);

        profil_email = new QLineEdit(groupBox);
        profil_email->setObjectName(QString::fromUtf8("profil_email"));
        profil_email->setEnabled(false);
        profil_email->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(6, 6, 6);"));

        gridLayout->addWidget(profil_email, 4, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        profile_nom = new QLineEdit(groupBox);
        profile_nom->setObjectName(QString::fromUtf8("profile_nom"));
        profile_nom->setEnabled(false);
        profile_nom->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(8, 8, 8);"));

        gridLayout->addWidget(profile_nom, 1, 1, 1, 2);

        visionner = new QPushButton(groupBox);
        visionner->setObjectName(QString::fromUtf8("visionner"));
        visionner->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(27, 27, 27);"));

        gridLayout->addWidget(visionner, 5, 1, 1, 1);

        profile_niveau = new QLineEdit(groupBox);
        profile_niveau->setObjectName(QString::fromUtf8("profile_niveau"));
        profile_niveau->setEnabled(false);
        profile_niveau->setStyleSheet(QString::fromUtf8("background-color: rgb(145, 145, 145);\n"
"color: rgb(7, 7, 7);"));

        gridLayout->addWidget(profile_niveau, 3, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        ch_user = new QPushButton(groupBox);
        ch_user->setObjectName(QString::fromUtf8("ch_user"));
        ch_user->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(20, 20, 20);"));

        gridLayout->addWidget(ch_user, 5, 2, 1, 1);

        ch_pass = new QPushButton(groupBox);
        ch_pass->setObjectName(QString::fromUtf8("ch_pass"));
        ch_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(27, 27, 27);"));

        gridLayout->addWidget(ch_pass, 5, 0, 1, 1);

        fin = new QPushButton(groupBox);
        fin->setObjectName(QString::fromUtf8("fin"));
        fin->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(13, 13, 13);"));

        gridLayout->addWidget(fin, 6, 1, 1, 1);

        label_5 = new QLabel(wprofil);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 20, 191, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 20pt \"Quicksand\";\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(wprofil);

        QMetaObject::connectSlotsByName(wprofil);
    } // setupUi

    void retranslateUi(QDialog *wprofil)
    {
        wprofil->setWindowTitle(QApplication::translate("wprofil", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("wprofil", "PROFILES", nullptr));
        label->setText(QApplication::translate("wprofil", "NOM:", nullptr));
        label_2->setText(QApplication::translate("wprofil", "PRENOM:", nullptr));
        label_4->setText(QApplication::translate("wprofil", "EMAIL:", nullptr));
        visionner->setText(QApplication::translate("wprofil", "Visionner", nullptr));
        label_3->setText(QApplication::translate("wprofil", "NIVEAU:", nullptr));
        ch_user->setText(QApplication::translate("wprofil", "Retour", nullptr));
        ch_pass->setText(QApplication::translate("wprofil", "Changer mot de passe", nullptr));
        fin->setText(QApplication::translate("wprofil", "Ajouter date de fin d'inscription", nullptr));
        label_5->setText(QApplication::translate("wprofil", "PARAMETRES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wprofil: public Ui_wprofil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WPROFIL_H
