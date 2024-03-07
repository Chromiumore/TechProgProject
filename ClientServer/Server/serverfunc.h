#ifndef SERVERFUNC_H
#define SERVERFUNC_H

#include <QByteArray>
#include <QString>

class ServerFunc
{
public:
    ServerFunc();
    ~ServerFunc();

    int parsing(QString);
    int auth(QString, QString);
    int reg(QString, QString);
    int lookStat(QString);
    int lookAllStat();

    bool delUser(QString);
    bool resetStat(QString);
};

#endif // SERVERFUNC_H
