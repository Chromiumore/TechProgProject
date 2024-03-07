#include "back.h"
#include <string>
#include <QDebug>

Back::Back()
{
    mTcpSocket = new QTcpSocket(this);
    connect(mTcpSocket, &QTcpSocket::readyRead, this, &Back::slotClientRead);
    connect(mTcpSocket, &QTcpSocket::disconnected, this, &Back::slotClientDisconect);
    mTcpSocket->connectToHost("127.0.0.1", 33333);

    interface = new UserInterface;
    ws = new Workspace;

    connect(interface, &UserInterface::signInSignal, this, &Back::signInRequest);
    connect(interface, &UserInterface::signUpSignal, this, Back::signUpRequest);
}

Back::~Back()
{
    delete interface;
    delete ws;
}

void Back::signUpRequest(QString login, QString password)
{
    std::string num = "1";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString() + sep + password.toStdString());
    mTcpSocket->write(req.toUtf8());
    qDebug() << "signIn request: " << req;
}

void Back::signInRequest(QString login, QString password)
{
    std::string num = "0";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString() + sep + password.toStdString());
    mTcpSocket->write(req.toUtf8());
}

void Back::statRequest(QString login)
{
    std::string num = "2";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString());
    mTcpSocket->write(req.toUtf8());
}


void Back::slotClientRead()
{
    QByteArray array;

    while(mTcpSocket->bytesAvailable()>0)
    {
        array = mTcpSocket->readAll();
        qDebug()<< "array: " << array<<"\n";
    }
    interface->codeManager(array.toInt());
}


void Back::slotClientDisconect()
{
    mTcpSocket->deleteLater();
}

int Back::slotClientSend()
{
    return 1;
}
