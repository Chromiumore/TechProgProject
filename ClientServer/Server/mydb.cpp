#include "mydb.h"
#include <QVariant>
#include <QDebug>

MyDB::MyDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Info.db");

    db.open();

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE Users(Login TEXT, Password TEXT, EMAIL TEXT), task1 INT, task2 INT, task3 INT");
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
    query->bindValue(QString::fromStdString(":bind0"), login);
    query->bindValue(QString::fromStdString(":bind1"), password);
    query->exec();

    if (query->size() > 0)
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
    query->prepare("INSERT INTO Users VALUES (:bind0, :bind1, :bind2, 0, 0, 0)");
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
