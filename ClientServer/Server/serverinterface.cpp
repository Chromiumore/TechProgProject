#include "serverinterface.h"
#include <QDebug>
#include <QCoreApplication>
#include<QString>

ServerInterface::~ServerInterface()
{

    mTcpServer->close();
    //server_status=0;
}

ServerInterface::ServerInterface(QObject *parent) : QObject(parent){
    mTcpServer = new QTcpServer(this);

    connect(mTcpServer, &QTcpServer::newConnection,
            this, &ServerInterface::slotNewConnection);

    if(!mTcpServer->listen(QHostAddress::Any, 33333)){
        qDebug() << "server is not started";
    } else {
        //server_status=1;
        qDebug() << "server is started";
    }
}

void ServerInterface::slotNewConnection(){
 //   if(server_status==1){
        mTcpSocket = mTcpServer->nextPendingConnection();
//        mTcpSocket->write("Hello, World!!! I am echo server!\r\n");
        connect(mTcpSocket, &QTcpSocket::readyRead,this,&ServerInterface::slotServerRead);
        connect(mTcpSocket,&QTcpSocket::disconnected,this,&ServerInterface::slotClientDisconnected);
   // }
}

void ServerInterface::slotServerRead(){
    while(mTcpSocket->bytesAvailable()>0)
    {
        QByteArray array =mTcpSocket->readAll();
        qDebug()<<array<<"\n";
     }
}

void ServerInterface::slotClientDisconnected(){
    mTcpSocket->close();
}
