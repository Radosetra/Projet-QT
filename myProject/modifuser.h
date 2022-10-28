#ifndef MODIFUSER_H
#define MODIFUSER_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class modifuser;
}

class modifuser : public QDialog
{
    Q_OBJECT

public:
    //Creation de fonctions pour ouvrir et fermer les bases de donnees utilisees
    QSqlDatabase db;

    void closeDB()
    {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool openDB(QString PATH)
    {
        db = QSqlDatabase::addDatabase("QSQLITE");

        db.setDatabaseName(PATH);
        db.open();
        if(!db.isOpen())
        {
            qDebug()<<"Failed to open the data base";
            return false;
        }
        else
        {
            qDebug()<<"Connection to database set";
            return true;
        }
    }
    //Obtenir le niveau de l'user
    QString userNiv{""};

    //Fonction pour enregitrer les actions dans la base de donnee historique
    //Creation de fonctions pour enregistrer les actions dans l'historique
    void addHistorique(QString action)
    {
        QSqlQuery q;
        QString responsable{""};
        if(q.exec("SELECT [pseudo receptioniste] FROM [receptionistes] WHERE [active] = 1 ;"))
        {
            while(q.next())
            {
                responsable = q.value(0).toString();
            }
            if(q.exec("INSERT INTO [historique] ([date action],[heure action],[responsable],[action]) VALUES (date('now'),time('now'),\""+responsable+"\",\""+action+"\");"))
            {
                qDebug()<<"Enregistrement action reussit";
            }
            else
            {
                qDebug()<<"Enregistrement action error";
            }
        }
        else
            qDebug()<<"Failled to get receptioniste name";
    }

public:
    explicit modifuser(QWidget *parent = nullptr);
    ~modifuser();

private slots:
    void on_pushButton_clicked();

    void on_Admin_clicked();

    void on_Root_clicked();

private:
    Ui::modifuser *ui;
};

#endif // MODIFUSER_H
