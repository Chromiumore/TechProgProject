#include "clientsingleton.h"

ClientSingleton::ClientSingleton()
{
    mTcpSocket = new QTcpSocket(this);
    connect(mTcpSocket, &QTcpSocket::readyRead, this, &ClientSingleton::slotClientRead);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &ClientSingleton::slotClientDisconect);
    mTcpSocket->connectToHost("127.0.0.1", 33333);
}

ClientSingleton::~ClientSingleton()
{
    mTcpSocket->close();
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
}
void ClientSingleton::slotClientDisconect()
{
    mTcpSocket->deleteLater();
}

void ClientSingleton::slotClientSend(QByteArray array)
{
    mTcpSocket->write(array);
}
