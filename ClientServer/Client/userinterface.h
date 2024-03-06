#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "authwindow.h"
#include "workwindow.h"
#include <QObject>
#include <QString>

class UserInterface : public QObject
{

    Q_OBJECT

public:
    UserInterface();
    ~UserInterface();

    void signIn();
    void signUp();
    void codeManager(int);

public slots:
    void toMainWindow();
    void toAuthWindow();

private:
    AuthWindow *authW;
    WorkWindow *mainW;

signals:
    void signInSignal(QString, QString);
    void signUpSignal(QString, QString);
};

#endif // USERINTERFACE_H
