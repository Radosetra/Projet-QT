/********************************************************************************
** Form generated from reading UI file 'liste_generale.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_GENERALE_H
#define UI_LISTE_GENERALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_liste_generale
{
public:
    QLineEdit *filename;
    QGroupBox *groupBox;
    QCheckBox *L1;
    QCheckBox *L3;
    QCheckBox *L2;
    QCheckBox *M1;
    QCheckBox *M2;
    QPushButton *logout;
    QGroupBox *groupBox_2;
    QCheckBox *non_paye;
    QCheckBox *partiel;
    QCheckBox *paye;
    QPushButton *view;
    QPushButton *save;
    QTableView *vue;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_listGen;
    QRadioButton *radioButton_inscription;
    QRadioButton *radioButton_reinscription;

    void setupUi(QDialog *liste_generale)
    {
        if (liste_generale->objectName().isEmpty())
            liste_generale->setObjectName(QString::fromUtf8("liste_generale"));
        liste_generale->resize(989, 618);
        filename = new QLineEdit(liste_generale);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setGeometry(QRect(20, 550, 151, 25));
        groupBox = new QGroupBox(liste_generale);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 251, 161));
        L1 = new QCheckBox(groupBox);
        L1->setObjectName(QString::fromUtf8("L1"));
        L1->setGeometry(QRect(20, 40, 87, 23));
        L3 = new QCheckBox(groupBox);
        L3->setObjectName(QString::fromUtf8("L3"));
        L3->setGeometry(QRect(20, 90, 87, 23));
        L2 = new QCheckBox(groupBox);
        L2->setObjectName(QString::fromUtf8("L2"));
        L2->setGeometry(QRect(150, 40, 87, 23));
        M1 = new QCheckBox(groupBox);
        M1->setObjectName(QString::fromUtf8("M1"));
        M1->setGeometry(QRect(90, 130, 87, 23));
        M2 = new QCheckBox(groupBox);
        M2->setObjectName(QString::fromUtf8("M2"));
        M2->setGeometry(QRect(150, 90, 87, 23));
        logout = new QPushButton(liste_generale);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(890, 580, 80, 25));
        logout->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 21, 0);\n"
"color:balck;"));
        groupBox_2 = new QGroupBox(liste_generale);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 340, 251, 181));
        non_paye = new QCheckBox(groupBox_2);
        non_paye->setObjectName(QString::fromUtf8("non_paye"));
        non_paye->setGeometry(QRect(50, 50, 87, 23));
        partiel = new QCheckBox(groupBox_2);
        partiel->setObjectName(QString::fromUtf8("partiel"));
        partiel->setGeometry(QRect(50, 90, 131, 23));
        paye = new QCheckBox(groupBox_2);
        paye->setObjectName(QString::fromUtf8("paye"));
        paye->setGeometry(QRect(50, 130, 87, 23));
        view = new QPushButton(liste_generale);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(790, 580, 80, 25));
        save = new QPushButton(liste_generale);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(190, 550, 80, 25));
        vue = new QTableView(liste_generale);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setGeometry(QRect(300, 20, 671, 551));
        groupBox_3 = new QGroupBox(liste_generale);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 20, 251, 141));
        radioButton_listGen = new QRadioButton(groupBox_3);
        radioButton_listGen->setObjectName(QString::fromUtf8("radioButton_listGen"));
        radioButton_listGen->setGeometry(QRect(20, 30, 104, 23));
        radioButton_inscription = new QRadioButton(groupBox_3);
        radioButton_inscription->setObjectName(QString::fromUtf8("radioButton_inscription"));
        radioButton_inscription->setGeometry(QRect(20, 60, 104, 23));
        radioButton_reinscription = new QRadioButton(groupBox_3);
        radioButton_reinscription->setObjectName(QString::fromUtf8("radioButton_reinscription"));
        radioButton_reinscription->setGeometry(QRect(20, 90, 104, 23));
        radioButton_reinscription->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(liste_generale);

        QMetaObject::connectSlotsByName(liste_generale);
    } // setupUi

    void retranslateUi(QDialog *liste_generale)
    {
        liste_generale->setWindowTitle(QApplication::translate("liste_generale", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("liste_generale", "Niveau", nullptr));
        L1->setText(QApplication::translate("liste_generale", "L1", nullptr));
        L3->setText(QApplication::translate("liste_generale", "L3", nullptr));
        L2->setText(QApplication::translate("liste_generale", "L2", nullptr));
        M1->setText(QApplication::translate("liste_generale", "M2", nullptr));
        M2->setText(QApplication::translate("liste_generale", "M1", nullptr));
        logout->setText(QApplication::translate("liste_generale", "retour", nullptr));
        groupBox_2->setTitle(QApplication::translate("liste_generale", "Paiement", nullptr));
        non_paye->setText(QApplication::translate("liste_generale", "non-paye", nullptr));
        partiel->setText(QApplication::translate("liste_generale", "paiement partiel", nullptr));
        paye->setText(QApplication::translate("liste_generale", "paye", nullptr));
        view->setText(QApplication::translate("liste_generale", "view", nullptr));
        save->setText(QApplication::translate("liste_generale", "save", nullptr));
        groupBox_3->setTitle(QApplication::translate("liste_generale", "Categories", nullptr));
        radioButton_listGen->setText(QApplication::translate("liste_generale", "liste globale", nullptr));
        radioButton_inscription->setText(QApplication::translate("liste_generale", "inscription", nullptr));
        radioButton_reinscription->setText(QApplication::translate("liste_generale", "reinscription", nullptr));
    } // retranslateUi

};

namespace Ui {
    class liste_generale: public Ui_liste_generale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_GENERALE_H
