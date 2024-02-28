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

    serverFunc = new ServerFunc;

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
    QByteArray array;
    QByteArray back_array;
    int code = -101;

    while(mTcpSocket->bytesAvailable()>0)
    {
        array =mTcpSocket->readAll();
        qDebug()<<array<<"\n";
    }

    code = serverFunc->parsing(QString(array));
    mTcpSocket->write(back_array.setNum(code));
}

void ServerInterface::slotClientDisconnected(){
    mTcpSocket->close();
}
