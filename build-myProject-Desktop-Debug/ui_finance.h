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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_finance
{
public:
    QTableWidget *tableWidget;
    QPushButton *retour;

    void setupUi(QDialog *finance)
    {
        if (finance->objectName().isEmpty())
            finance->setObjectName(QString::fromUtf8("finance"));
        finance->resize(600, 400);
        tableWidget = new QTableWidget(finance);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setBackground(QColor(50, 50, 50));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setBackground(QColor(50, 50, 50));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 40, 381, 261));
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(12);
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->horizontalHeader()->setDefaultSectionSize(182);
        tableWidget->verticalHeader()->setDefaultSectionSize(78);
        retour = new QPushButton(finance);
        retour->setObjectName(QString::fromUtf8("retour"));
        retour->setGeometry(QRect(250, 330, 111, 41));
        retour->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 17, 17);\n"
"color: rgb(26, 26, 26);\n"
"background-color: rgb(255, 0, 0);\n"
""));

        retranslateUi(finance);

        QMetaObject::connectSlotsByName(finance);
    } // setupUi

    void retranslateUi(QDialog *finance)
    {
        finance->setWindowTitle(QApplication::translate("finance", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("finance", "motif", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("finance", "somme(en ar)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("finance", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("finance", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("finance", "3", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("finance", "Somme total: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("finance", "Somme recu:", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(2, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("finance", "Somme restant:", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        retour->setText(QApplication::translate("finance", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finance: public Ui_finance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_H
