#include "mydb.h"

MyDB::MyDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Info.db");

    db.open();

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE Users(Login TEXT, Password TEXT, EMAIL TEXT)");

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
