#include "back.h"

Back::Back()
{
    mTcpSocket = new QTcpSocket(this);
    connect(mTcpSocket, &QTcpSocket::readyRead, this, &Back::slotClientRead);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &Back::slotClientDisconect);
    mTcpSocket->connectToHost("127.0.0.1", 33333);

    interface = new UserInterface;
    ws = new Workspace;
}

Back::~Back()
{
    delete interface;
    delete ws;
}

int Back::slotClientRead()
{
    QByteArray array;

    while(mTcpSocket->bytesAvailable()>0)
    {
        array = mTcpSocket->readAll();
        qDebug()<<array<<"\n";
    }

    return 1;

}

void Back::slotClientDisconect()
{
    mTcpSocket->deleteLater();
}

int Back::slotClientSend()
{
    return 1;
}
