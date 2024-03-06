#ifndef BACK_H
#define BACK_H

#include <QTcpSocket>
#include <QObject>
#include <QtNetwork>
#include <QString>

#include "userinterface.h"
#include "workspace.h"

QT_BEGIN_NAMESPACE

class Back: public QObject
{
    Q_OBJECT

public:
    Back();
    ~Back();

public slots:
    void slotClientRead();
    void slotClientDisconect();
    int slotClientSend();

    void signInRequest(QString, QString);
    void signUpRequest(QString, QString);
    void statRequest(QString);

private:
    QTcpSocket *mTcpSocket;
    UserInterface *interface;
    Workspace *ws;
};
#endif // BACK_H
