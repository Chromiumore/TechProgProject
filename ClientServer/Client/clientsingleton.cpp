#include "clientsingleton.h"
#include <QDebug>

ClientSingleton::ClientSingleton()
{
    mTcpSocket = new QTcpSocket(this);
    connect(mTcpSocket, &QTcpSocket::readyRead, this, &ClientSingleton::slotClientRead);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &ClientSingleton::slotClientDisconect);
    mTcpSocket->connectToHost("127.0.0.1", 33333);
    qDebug() << "ClientSingleton::ClientSingleton  |  singleton initialized\n";
}

ClientSingleton::~ClientSingleton()
{
    mTcpSocket->close();
    qDebug() << "ClientSingleton::~ClientSingleton  |  singleton destroyed\n";
}

ClientSingleton* ClientSingleton::getInstance(){
    if (!instance)
    {
        instance = new ClientSingleton();
        destroyer.initialize(instance);
    }
    return instance;
}


ClientSingletonDestroyer::~ClientSingletonDestroyer()
{
    delete instance;
}
void ClientSingletonDestroyer::initialize(ClientSingleton * p)
{
    instance = p;
}


ClientSingleton * ClientSingleton::instance;
ClientSingletonDestroyer ClientSingleton::destroyer;

void ClientSingleton::slotClientRead()
{
    while(mTcpSocket->bytesAvailable()>0)
    {
        array = mTcpSocket->readAll();
        qDebug()<<array<<"\n";
    }
    //    interface->codeManager(array.toInt());
    emit answerSignal(array);
    qDebug() << "ClientSingleton::slotClientRead  |  getting server answer\n";
}
void ClientSingleton::slotClientDisconect()
{
    mTcpSocket->deleteLater();
    qDebug() << "ClientSingleton::slotClientDisconect  |  disconnected from server\n";
}

void ClientSingleton::slotClientSend(QByteArray array)
{
    mTcpSocket->write(array);
    qDebug() << "ClientSingleton::slotClientSend  |  sending request to server\n";
}
