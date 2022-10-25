/********************************************************************************
** Form generated from reading UI file 'historic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIC_H
#define UI_HISTORIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_historic
{
public:
    QTableView *vue;
    QPushButton *pushButton;

    void setupUi(QDialog *historic)
    {
        if (historic->objectName().isEmpty())
            historic->setObjectName(QString::fromUtf8("historic"));
        historic->resize(989, 618);
        vue = new QTableView(historic);
        vue->setObjectName(QString::fromUtf8("vue"));
        vue->setGeometry(QRect(20, 10, 951, 561));
        pushButton = new QPushButton(historic);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(880, 580, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 63, 5);\n"
"color:black;\n"
""));

        retranslateUi(historic);

        QMetaObject::connectSlotsByName(historic);
    } // setupUi

    void retranslateUi(QDialog *historic)
    {
        historic->setWindowTitle(QApplication::translate("historic", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("historic", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class historic: public Ui_historic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIC_H
