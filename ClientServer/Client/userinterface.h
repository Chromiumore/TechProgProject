#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "authwindow.h"
#include "workwindow.h"
#include <QObject>
#include <QString>
#include <QMessageBox>

class UserInterface : public QObject
{

    Q_OBJECT

public:
    UserInterface();
    ~UserInterface();

    void codeManager(int);

public slots:
    void toMainWindow();
    void toAuthWindow();

    void signIn();
    void signUp();

private:
    AuthWindow *authW;
    WorkWindow *mainW;

    QMessageBox message;

signals:
    void signalFromInterface(int, QString, QString, QString);
};

#endif // USERINTERFACE_H
