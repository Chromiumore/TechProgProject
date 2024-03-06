#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "authwindow.h"
#include "workwindow.h"
#include <QObject>

class UserInterface : public QObject
{

//    Q_OBJECT

public:
    UserInterface();
    ~UserInterface();

public slots:
    void toMainWindow();
    void toAuthWindow();

private:
    AuthWindow *authW;
    WorkWindow *mainW;
};

#endif // USERINTERFACE_H
