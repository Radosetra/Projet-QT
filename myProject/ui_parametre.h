/********************************************************************************
** Form generated from reading UI file 'parametre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETRE_H
#define UI_PARAMETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_parametre
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *inp_licence;
    QLineEdit *inp_master;
    QLineEdit *inp_DocEtrMdn;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *dataLicence;
    QLineEdit *dataMaster;
    QLineEdit *dataDocEtrMdn;
    QLineEdit *dataDateInsc;
    QLineEdit *dataDateEch;
    QGroupBox *groupBox_3;
    QDateEdit *inp_dateIns;
    QDateEdit *inp_dateEch;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *parametre)
    {
        if (parametre->objectName().isEmpty())
            parametre->setObjectName(QString::fromUtf8("parametre"));
        parametre->resize(989, 618);
        parametre->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	\n"
"	background-image: url(:/img/img/hero-background-15.jpg);\n"
"}"));
        label = new QLabel(parametre);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 20, 171, 41));
        label->setStyleSheet(QString::fromUtf8("font: 18pt \"MS Shell Dlg 2\";"));
        groupBox = new QGroupBox(parametre);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 70, 261, 351));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 45);\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 151, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 151, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 151, 21));
        inp_licence = new QLineEdit(groupBox);
        inp_licence->setObjectName(QString::fromUtf8("inp_licence"));
        inp_licence->setGeometry(QRect(20, 90, 181, 21));
        inp_master = new QLineEdit(groupBox);
        inp_master->setObjectName(QString::fromUtf8("inp_master"));
        inp_master->setGeometry(QRect(20, 190, 181, 21));
        inp_DocEtrMdn = new QLineEdit(groupBox);
        inp_DocEtrMdn->setObjectName(QString::fromUtf8("inp_DocEtrMdn"));
        inp_DocEtrMdn->setGeometry(QRect(20, 290, 181, 21));
        groupBox_2 = new QGroupBox(parametre);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(360, 70, 261, 351));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 25);\n"
"}"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 30, 151, 21));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 90, 151, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 150, 151, 21));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 210, 151, 21));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 270, 201, 21));
        dataLicence = new QLineEdit(groupBox_2);
        dataLicence->setObjectName(QString::fromUtf8("dataLicence"));
        dataLicence->setEnabled(false);
        dataLicence->setGeometry(QRect(30, 60, 181, 21));
        dataMaster = new QLineEdit(groupBox_2);
        dataMaster->setObjectName(QString::fromUtf8("dataMaster"));
        dataMaster->setEnabled(false);
        dataMaster->setGeometry(QRect(30, 120, 181, 21));
        dataDocEtrMdn = new QLineEdit(groupBox_2);
        dataDocEtrMdn->setObjectName(QString::fromUtf8("dataDocEtrMdn"));
        dataDocEtrMdn->setEnabled(false);
        dataDocEtrMdn->setGeometry(QRect(30, 180, 181, 21));
        dataDateInsc = new QLineEdit(groupBox_2);
        dataDateInsc->setObjectName(QString::fromUtf8("dataDateInsc"));
        dataDateInsc->setEnabled(false);
        dataDateInsc->setGeometry(QRect(30, 240, 181, 21));
        dataDateEch = new QLineEdit(groupBox_2);
        dataDateEch->setObjectName(QString::fromUtf8("dataDateEch"));
        dataDateEch->setEnabled(false);
        dataDateEch->setGeometry(QRect(30, 300, 181, 21));
        groupBox_3 = new QGroupBox(parametre);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(660, 70, 261, 351));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: rgba(255, 255, 255, 25);\n"
"}"));
        inp_dateIns = new QDateEdit(groupBox_3);
        inp_dateIns->setObjectName(QString::fromUtf8("inp_dateIns"));
        inp_dateIns->setGeometry(QRect(30, 90, 101, 31));
        inp_dateEch = new QDateEdit(groupBox_3);
        inp_dateEch->setObjectName(QString::fromUtf8("inp_dateEch"));
        inp_dateEch->setGeometry(QRect(30, 190, 101, 31));
        label_10 = new QLabel(parametre);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(690, 130, 151, 21));
        label_11 = new QLabel(parametre);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(690, 230, 201, 21));
        pushButton = new QPushButton(parametre);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 460, 111, 31));
        pushButton_2 = new QPushButton(parametre);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 460, 111, 31));
        pushButton_3 = new QPushButton(parametre);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 460, 111, 31));
        pushButton_4 = new QPushButton(parametre);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(870, 570, 111, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 30, 1);\n"
"color: rgb(11, 11, 11);"));

        retranslateUi(parametre);

        QMetaObject::connectSlotsByName(parametre);
    } // setupUi

    void retranslateUi(QDialog *parametre)
    {
        parametre->setWindowTitle(QApplication::translate("parametre", "Dialog", nullptr));
        label->setText(QApplication::translate("parametre", "<center>PARAMETRE</center>", nullptr));
        groupBox->setTitle(QApplication::translate("parametre", "Mdodifier montant due", nullptr));
        label_2->setText(QApplication::translate("parametre", "Licences", nullptr));
        label_3->setText(QApplication::translate("parametre", "Masters", nullptr));
        label_4->setText(QApplication::translate("parametre", "Doctorants, Etranger, MDN", nullptr));
        groupBox_2->setTitle(QApplication::translate("parametre", "Donnees actuelle", nullptr));
        label_5->setText(QApplication::translate("parametre", "Licences", nullptr));
        label_6->setText(QApplication::translate("parametre", "Masters", nullptr));
        label_7->setText(QApplication::translate("parametre", "Doctorants, Etranger, MDN", nullptr));
        label_8->setText(QApplication::translate("parametre", "Date fin d'inscription", nullptr));
        label_9->setText(QApplication::translate("parametre", "Date fin de payement d'echelonnement", nullptr));
        groupBox_3->setTitle(QApplication::translate("parametre", "Mdodifier date de fin d'inscription", nullptr));
        label_10->setText(QApplication::translate("parametre", "Date fin d'inscription", nullptr));
        label_11->setText(QApplication::translate("parametre", "Date fin de payement d'echelonnement", nullptr));
        pushButton->setText(QApplication::translate("parametre", "Visionner", nullptr));
        pushButton_2->setText(QApplication::translate("parametre", "Confirmer", nullptr));
        pushButton_3->setText(QApplication::translate("parametre", "confirmer", nullptr));
        pushButton_4->setText(QApplication::translate("parametre", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parametre: public Ui_parametre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETRE_H
