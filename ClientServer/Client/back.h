#ifndef BACK_H
#define BACK_H

#include <QTcpSocket>

class Back
{
    Q_OBJECT

public:
    QTcpSocket *socket;

    Back();
    ~Back();

    bool sendToServer();
public slots:
    void slotReadyRead();
    void slotDisconnected();
};

#endif // BACK_H
