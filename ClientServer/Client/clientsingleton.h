#ifndef CLIENTClientSingleton_H
#define CLIENTClientSingleton_H

#include <QTcpSocket>
#include <QObject>
#include <QtNetwork>
#include <QString>
#include <QByteArray>

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

class ClientSingleton: public QObject
{
    Q_OBJECT

private:
    static ClientSingleton * instance;
    static ClientSingletonDestroyer destroyer;

    QTcpSocket *mTcpSocket;
    QByteArray array;

protected:
    ClientSingleton();
    ClientSingleton(const ClientSingleton&) =delete;
    ClientSingleton& operator = (ClientSingleton &)=delete;
    ~ClientSingleton();
    friend class ClientSingletonDestroyer;

public:
    static ClientSingleton* getInstance();

public slots:
    void slotClientRead();
    void slotClientDisconect();
    void slotClientSend(QByteArray);

signals:
    void answerSignal(QByteArray);

};



#endif // CLIENTClientSingleton_H
