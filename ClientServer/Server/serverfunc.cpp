#include "serverfunc.h"
#include <QDebug>
#include "mydb.h"

ServerFunc::ServerFunc()
{
    MyDB::getInstance();
}

ServerFunc::~ServerFunc()
{

}

int ServerFunc::parsing(QString str)
{
    int result_code = -1;
    int func_code = str.section('%', 0, 0).toInt();

    QString login = str.section('%', 1, 1);
    QString password = str.section('%', 2, 2);
    QString email = str.section('%', 3, 3);

    qDebug() << func_code;

    switch(func_code)
    {
    case 0:
        result_code = auth(login, password);
        break;
    case 1:
        result_code = reg(login, password, email);
        break;
    case 2:
        result_code = lookStat(login);
        break;
    case 3:
        result_code = lookAllStat();
        break;
    case 4:
        result_code = delUser(login);
        break;
    case 5:
        result_code = resetStat(login);
        break;
    }

    return result_code;
}

int ServerFunc::auth(QString login, QString password)
{
    qDebug() << "auth func\n";
    return MyDB::getInstance()->signInReq(login, password);
}
int ServerFunc::reg(QString login, QString password, QString email)
{
    qDebug() << "reg func\n";
    return MyDB::getInstance()->signUpReq(login, password, email);
}

int ServerFunc::lookStat(QString login)
{
    qDebug() << "lookStat func\n";
    MyDB::getInstance();
    return 3;
}

int ServerFunc::lookAllStat()
{
    qDebug() << "lookAllStat func\n";
    MyDB::getInstance();
    return 4;
}

bool ServerFunc::delUser(QString login)
{
    qDebug() << "delUser func\n";
    return 5;
}

bool ServerFunc::resetStat(QString login)
{
    qDebug() << "resetStat func\n";
    return 6;
}
