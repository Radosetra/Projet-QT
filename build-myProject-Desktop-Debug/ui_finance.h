/********************************************************************************
** Form generated from reading UI file 'finance.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_H
#define UI_FINANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_finance
{
public:
    QPushButton *retour;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *view;

    void setupUi(QDialog *finance)
    {
        if (finance->objectName().isEmpty())
            finance->setObjectName(QString::fromUtf8("finance"));
        finance->resize(1366, 768);
        finance->setMinimumSize(QSize(1366, 768));
        finance->setMaximumSize(QSize(16777215, 16777215));
        finance->setStyleSheet(QString::fromUtf8(""));
        retour = new QPushButton(finance);
        retour->setObjectName(QString::fromUtf8("retour"));
        retour->setGeometry(QRect(735, 660, 80, 35));
        retour->setMinimumSize(QSize(80, 35));
        retour->setMaximumSize(QSize(80, 35));
        retour->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 12pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: black;\n"
"	background-color: red;\n"
"	position: absolute;\n"
"	top: 10px;\n"
"	right: 50px;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));
        verticalFrame = new QFrame(finance);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setGeometry(QRect(345, 79, 665, 550));
        verticalFrame->setMinimumSize(QSize(665, 550));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        view = new QPushButton(finance);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(620, 660, 80, 35));
        view->setMinimumSize(QSize(80, 35));
        view->setMaximumSize(QSize(80, 35));
        view->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 25px;\n"
"	font: 81 Italic 12pt \"Fira Sans Compressed ExtraBold\";\n"
"	color: white;\n"
"	background-color: grey;\n"
"	position: absolute;\n"
"	top: 10px;\n"
"	right: 50px;\n"
"}\n"
"\n"
"QpushButton:pressed{\n"
"	background-color: rgb(182, 7, 7);\n"
"}"));

        retranslateUi(finance);

        QMetaObject::connectSlotsByName(finance);
    } // setupUi

    void retranslateUi(QDialog *finance)
    {
        finance->setWindowTitle(QApplication::translate("finance", "Situation financiere", nullptr));
        retour->setText(QApplication::translate("finance", "Retour", nullptr));
        view->setText(QApplication::translate("finance", "Visionner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance: public Ui_finance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_H
