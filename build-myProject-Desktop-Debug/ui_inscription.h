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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_inscription
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *logout;
    QTableView *tableView;

    void setupUi(QDialog *inscription)
    {
        if (inscription->objectName().isEmpty())
            inscription->setObjectName(QString::fromUtf8("inscription"));
        inscription->resize(989, 618);
        groupBox = new QGroupBox(inscription);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 170, 381, 151));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 110, 80, 25));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 50, 171, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 161, 20));
        pushButton_2 = new QPushButton(inscription);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(790, 570, 80, 31));
        logout = new QPushButton(inscription);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(890, 570, 80, 31));
        logout->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 15, 7);\n"
"color:black;"));
        tableView = new QTableView(inscription);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(420, 30, 551, 531));

        retranslateUi(inscription);

        QMetaObject::connectSlotsByName(inscription);
    } // setupUi

    void retranslateUi(QDialog *inscription)
    {
        inscription->setWindowTitle(QApplication::translate("inscription", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("inscription", "Recherche", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("inscription", "<html><head/><body><p>&lt;center&gt;&lt;strong&gt;Add&lt;/strong&gt;&lt;/center&gt;</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("inscription", "Submit", nullptr));
        label->setText(QApplication::translate("inscription", "<html><head/><body><p>No matricule/concours:</p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("inscription", "Next", nullptr));
        logout->setText(QApplication::translate("inscription", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inscription: public Ui_inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSCRIPTION_H
