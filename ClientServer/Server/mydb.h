#ifndef MYDB_H
#define MYDB_H

#include <QSqlDatabase>
#include <QSqlQuery>

class MyDB;

class MyDBDestroyer
{
private:
    MyDB * instance;
public:
    ~MyDBDestroyer();
    void initialize(MyDB * p);
};

class MyDB
{
public:
    int signInReq(QString login, QString password);
    int signUpReq(QString login, QString password, QString email);

private:
    static MyDB * instance;
    static MyDBDestroyer destroyer;

    QSqlQuery *query;
    QSqlDatabase db;

protected:
    MyDB();
    MyDB(const MyDB&) =delete;
    MyDB& operator = (MyDB &)=delete;
    ~MyDB();
    friend class MyDBDestroyer;

public:
    static MyDB* getInstance();
};

#endif // MYDB_H
