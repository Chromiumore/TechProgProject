#include "mydb.h"
#include <QVariant>
#include <QDebug>

MyDB::MyDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../Server/Info.db");

    if(db.open())
    {
        qDebug() << "database is opened\n";
    }
    else
    {
        qDebug() << " database is not opened\n";
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE IF NOT EXISTS Users(Login TEXT PRIMARY KEY, Password TEXT, Email TEXT, task1 INTEGER, task2 INTEGER, task3 INTEGER)");

}

MyDB::~MyDB()
{

}

MyDB* MyDB::getInstance(){
    if (!instance)
    {
        instance = new MyDB();
        destroyer.initialize(instance);
    }
    return instance;
}

int MyDB::signInReq(QString login, QString password)
{
    query->prepare("SELECT Login FROM Users WHERE Login = :bind0 AND Password = :bind1");
    query->bindValue(":bind0", login);
    query->bindValue(":bind1", password);
    query->exec();

/*    if (query->size() > 0)
    {
        qDebug() << login << " is signed in!\n";
        return 1;
    }
    else
    {
        qDebug() << login << " is not signed in!\n";
        return -1;
    }*/

    if (query->isActive())
        qDebug() << "query is active\n";
    else if (!query->isActive())
        qDebug() << "query is not active\n";

    if (query->next())
    {
        qDebug() << login << " is signed in!\n";
        return 1;
    }
    else
    {
        qDebug() << login << " is not signed in!\n";
        return -1;
    }
}

int MyDB::signUpReq(QString login, QString password, QString email)
{
    query->prepare("INSERT INTO Users (Login, Password, Email, task1, task2, task3) VALUES (:bind0, :bind1, :bind2, 0, 0, 0)");
    query->bindValue(QString::fromStdString(":bind0"), login);
    query->bindValue(QString::fromStdString(":bind1"), password);
    query->bindValue(QString::fromStdString(":bind2"), email);
    query->exec();

/*    if (query->size() > 0)
    {*/
        qDebug() << login << " is signed up!\n";
        return 2;
/*    }
    else
    {
        qDebug() << login << " is not signed up!\n";
        return -1;
    }*/
}

MyDBDestroyer::~MyDBDestroyer()
{
    delete instance;
}
void MyDBDestroyer::initialize(MyDB * p)
{
    instance = p;
}


MyDB * MyDB::instance;
MyDBDestroyer MyDB::destroyer;
