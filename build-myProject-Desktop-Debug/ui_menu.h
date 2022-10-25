/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *financeBtn;
    QPushButton *leave;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(496, 381);
        verticalLayout = new QVBoxLayout(menu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(menu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(menu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(menu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        financeBtn = new QPushButton(menu);
        financeBtn->setObjectName(QString::fromUtf8("financeBtn"));
        financeBtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(financeBtn);

        leave = new QPushButton(menu);
        leave->setObjectName(QString::fromUtf8("leave"));
        leave->setCursor(QCursor(Qt::PointingHandCursor));
        leave->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(13, 13, 13);"));

        verticalLayout->addWidget(leave);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("menu", "Suivi financier", nullptr));
        pushButton_2->setText(QApplication::translate("menu", "Payement", nullptr));
        pushButton_3->setText(QApplication::translate("menu", "Utilisateur", nullptr));
        pushButton_4->setText(QApplication::translate("menu", "Echelonnement", nullptr));
        pushButton_5->setText(QApplication::translate("menu", "Historique", nullptr));
        financeBtn->setText(QApplication::translate("menu", "Situation financiere", nullptr));
        leave->setText(QApplication::translate("menu", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
