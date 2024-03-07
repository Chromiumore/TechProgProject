#ifndef CLIENTClientSingleton_H
#define CLIENTClientSingleton_H

#include <QTcpSocket>
#include <QObject>
#include <QtNetwork>
#include <QString>

//#include "back.h"

class ClientSingleton;

class ClientSingletonDestroyer
{
private:
    ClientSingleton * instance;
public:
    ~ClientSingletonDestroyer();
    void initialize(ClientSingleton * p);
};

class ClientSingleton
{
private:
    static ClientSingleton * instance;
    static ClientSingletonDestroyer destroyer;

protected:
    ClientSingleton();
    ClientSingleton(const ClientSingleton&) =delete;
    ClientSingleton& operator = (ClientSingleton &)=delete;
    ~ClientSingleton();
    friend class ClientSingletonDestroyer;

public:
    static ClientSingleton* getInstance();
};



#endif // CLIENTClientSingleton_H
