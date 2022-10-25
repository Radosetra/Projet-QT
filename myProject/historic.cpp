#include "historic.h"
#include "ui_historic.h"

historic::historic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historic)
{
    ui->setupUi(this);
    setFixedSize(989,618);

    //Affichage de l'historique
    //To make a query , we'll use
    QSqlQuery *q = new QSqlQuery();

    //To present your table, we need a view
    QSqlQueryModel *model = new QSqlQueryModel();
    openDB("C:/Users/micka/Desktop/Databases_projet_fin_annee/historique.sqlite");
    q->prepare("SELECT * FROM [historique];");
    if(q->exec())
    {
        model->setQuery(*q);
        ui->vue->setModel(model);
    }
    closeDB();

}

historic::~historic()
{
    delete ui;
}

void historic::on_pushButton_clicked()
{
    hide();
}