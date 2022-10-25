/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_pic;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *inpUsername;
    QLabel *label_3;
    QLineEdit *inp_password;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(556, 345);
        MainWindow->setCursor(QCursor(Qt::IBeamCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));

        gridLayout->addWidget(label_pic, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        inpUsername = new QLineEdit(groupBox);
        inpUsername->setObjectName(QString::fromUtf8("inpUsername"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, inpUsername);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        inp_password = new QLineEdit(groupBox);
        inp_password->setObjectName(QString::fromUtf8("inp_password"));
        inp_password->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, inp_password);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pushButton);


        gridLayout->addWidget(groupBox, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QApplication::translate("MainWindow", "yo", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Connection", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nom d'utilisateur:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Mot de passe:", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Se connecter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
