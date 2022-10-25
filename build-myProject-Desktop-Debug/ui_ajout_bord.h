/********************************************************************************
** Form generated from reading UI file 'ajout_bord.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_BORD_H
#define UI_AJOUT_BORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajout_bord
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ajout_bord)
    {
        if (ajout_bord->objectName().isEmpty())
            ajout_bord->setObjectName(QString::fromUtf8("ajout_bord"));
        ajout_bord->resize(600, 400);
        groupBox = new QGroupBox(ajout_bord);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(79, 50, 391, 251));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 60, 181, 25));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 140, 181, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 101, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 101, 17));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 204, 80, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 300, 80, 31));
        pushButton_3 = new QPushButton(ajout_bord);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 344, 80, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 27, 11);\n"
"color:black;\n"
""));

        retranslateUi(ajout_bord);

        QMetaObject::connectSlotsByName(ajout_bord);
    } // setupUi

    void retranslateUi(QDialog *ajout_bord)
    {
        ajout_bord->setWindowTitle(QApplication::translate("ajout_bord", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("ajout_bord", "Informations", nullptr));
        label->setText(QApplication::translate("ajout_bord", "No bordereau:", nullptr));
        label_2->setText(QApplication::translate("ajout_bord", "Somme:", nullptr));
        pushButton->setText(QApplication::translate("ajout_bord", "Ajouter", nullptr));
        pushButton_2->setText(QApplication::translate("ajout_bord", "Ajouter", nullptr));
        pushButton_3->setText(QApplication::translate("ajout_bord", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajout_bord: public Ui_ajout_bord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_BORD_H
