#ifndef SERVERINTERFACE_H
#define SERVERINTERFACE_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

#include <QtNetwork>
#include <QByteArray>
#include <QDebug>
#include <QList>

class ServerInterface : public QObject
{
    Q_OBJECT
public:
    explicit ServerInterface(QObject *parent = nullptr);
    ~ServerInterface();
public slots:
    void slotNewConnection();
    void slotClientDisconnected();
    void slotServerRead();
private:
    QTcpServer * mTcpServer;
    QTcpSocket * mTcpSocket;
    QList<QTcpSocket> *sockets;
    //int server_status;
};
#endif // SERVERINTERFACE_H







