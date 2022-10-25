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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *liste_echel;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(989, 618);
        liste_echel = new QTableView(Dialog);
        liste_echel->setObjectName(QString::fromUtf8("liste_echel"));
        liste_echel->setGeometry(QRect(310, 21, 661, 511));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 261, 221));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 40, 111, 23));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(140, 40, 111, 23));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 90, 111, 23));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(140, 90, 111, 23));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(20, 140, 111, 23));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(140, 140, 111, 23));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 180, 80, 25));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(890, 560, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 38, 10);\n"
"color:black;"));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(790, 560, 80, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "Filtre de niveau", nullptr));
        checkBox->setText(QApplication::translate("Dialog", "L1 redoublant", nullptr));
        checkBox_2->setText(QApplication::translate("Dialog", "L1 admis", nullptr));
        checkBox_3->setText(QApplication::translate("Dialog", "L2", nullptr));
        checkBox_4->setText(QApplication::translate("Dialog", "L3", nullptr));
        checkBox_5->setText(QApplication::translate("Dialog", "M1", nullptr));
        checkBox_6->setText(QApplication::translate("Dialog", "M2", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "Submit", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Retour", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
