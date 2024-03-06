#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTcpSocket>

class MainWindow
{
    Q_OBJECT

public:
    QTcpSocket *socket;

    MainWindow();
    ~MainWindow();

    bool sendToServer();
public slots:
    void slotReadyRead();
    void slotDisconnected();
};

#endif // MAINWINDOW_H
