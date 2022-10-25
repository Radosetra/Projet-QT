/********************************************************************************
** Form generated from reading UI file 'ajout_echel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUT_ECHEL_H
#define UI_AJOUT_ECHEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ajout_echel
{
public:
    QTableView *tableView;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ajout_echel)
    {
        if (ajout_echel->objectName().isEmpty())
            ajout_echel->setObjectName(QString::fromUtf8("ajout_echel"));
        ajout_echel->resize(989, 618);
        tableView = new QTableView(ajout_echel);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(390, 21, 571, 541));
        groupBox = new QGroupBox(ajout_echel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 170, 361, 181));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 60, 161, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 171, 20));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 130, 101, 25));
        pushButton_2 = new QPushButton(ajout_echel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(870, 570, 80, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 7, 7);\n"
"color:black;"));
        pushButton_3 = new QPushButton(ajout_echel);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 570, 80, 31));

        retranslateUi(ajout_echel);

        QMetaObject::connectSlotsByName(ajout_echel);
    } // setupUi

    void retranslateUi(QDialog *ajout_echel)
    {
        ajout_echel->setWindowTitle(QApplication::translate("ajout_echel", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("ajout_echel", "Information", nullptr));
        label->setText(QApplication::translate("ajout_echel", "No matricule/concours:", nullptr));
        pushButton->setText(QApplication::translate("ajout_echel", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("ajout_echel", "Retour", nullptr));
        pushButton_3->setText(QApplication::translate("ajout_echel", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajout_echel: public Ui_ajout_echel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUT_ECHEL_H
