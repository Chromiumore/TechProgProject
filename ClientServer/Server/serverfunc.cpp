#include "serverfunc.h"
#include <QDebug>

ServerFunc::ServerFunc()
{

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

    switch(func_code)
    {
    case 0:
        result_code = auth(login, password);
    case 1:
        result_code = reg(login, password);
    case 2:
        result_code = lookStat(login);
    case 3:
        result_code = lookAllStat();
    case 4:
        result_code = delUser(login);
    case 5:
        result_code = resetStat(login);
    }

    return result_code;
}

int ServerFunc::auth(QString login, QString password)
{
    qDebug() << "auth func\n";
    return 1;
}
int ServerFunc::reg(QString login, QString password)
{
    qDebug() << "reg func\n";
    return 1;
}

int ServerFunc::lookStat(QString login)
{
    qDebug() << "lookStat func\n";
    return 1;
}

int ServerFunc::lookAllStat()
{
    qDebug() << "lookAllStat func\n";
    return 1;
}

bool ServerFunc::delUser(QString login)
{
    qDebug() << "delUser func\n";
    return 1;
}

bool ServerFunc::resetStat(QString login)
{
    qDebug() << "resetStat func\n";
    return 1;
}
