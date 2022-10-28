/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *ajouter_btn;
    QDateEdit *ajout_inp_date;
    QLineEdit *ajout_inp_id;
    QLineEdit *ajout_inp_piece;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QLineEdit *autorisation_inp_id;
    QPushButton *autorisation_btn;
    QPushButton *vision_liste_btn;
    QTableView *vue;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(989, 618);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(890, 560, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 10);\n"
"color:black;"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 271, 191));
        ajouter_btn = new QPushButton(groupBox);
        ajouter_btn->setObjectName(QString::fromUtf8("ajouter_btn"));
        ajouter_btn->setGeometry(QRect(190, 160, 61, 21));
        ajout_inp_date = new QDateEdit(groupBox);
        ajout_inp_date->setObjectName(QString::fromUtf8("ajout_inp_date"));
        ajout_inp_date->setGeometry(QRect(140, 80, 110, 22));
        ajout_inp_id = new QLineEdit(Dialog);
        ajout_inp_id->setObjectName(QString::fromUtf8("ajout_inp_id"));
        ajout_inp_id->setGeometry(QRect(190, 80, 113, 21));
        ajout_inp_piece = new QLineEdit(Dialog);
        ajout_inp_piece->setObjectName(QString::fromUtf8("ajout_inp_piece"));
        ajout_inp_piece->setGeometry(QRect(190, 160, 113, 21));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 61, 21));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 120, 91, 21));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 160, 91, 21));
        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 250, 271, 121));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 40, 81, 16));
        autorisation_inp_id = new QLineEdit(groupBox_2);
        autorisation_inp_id->setObjectName(QString::fromUtf8("autorisation_inp_id"));
        autorisation_inp_id->setGeometry(QRect(140, 40, 113, 21));
        autorisation_btn = new QPushButton(groupBox_2);
        autorisation_btn->setObjectName(QString::fromUtf8("autorisation_btn"));
        autorisation_btn->setGeometry(QRect(190, 80, 61, 21));
        vision_liste_btn = new QPushButton(Dialog);
        vision_liste_btn->setObjectName(QString::fromUtf8("vision_liste_btn"));
        vision_liste_btn->setGeometry(QRect(139, 400, 171, 31));
        vue = new QTableView(Dialog);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setGeometry(QRect(330, 50, 651, 401));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Retour", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Ajout dans la liste d'attente", nullptr));
        ajouter_btn->setText(QApplication::translate("Dialog", "Ajouter", nullptr));
        label->setText(QApplication::translate("Dialog", "Identifiant :", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Date de demande :", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Piece justificative :", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Autorisation", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Identifiant :", nullptr));
        autorisation_btn->setText(QApplication::translate("Dialog", "Confirmer", nullptr));
        vision_liste_btn->setText(QApplication::translate("Dialog", "Visionner la liste des demandes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
