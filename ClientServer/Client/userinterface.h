#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "authwindow.h"
#include "mainwindow.h"

class UserInterface
{
public:
    UserInterface();
    ~UserInterface();

    void toMainWindow();
    void toAuthWindow();

private:
    AuthWindow *authW;
    MainWindow *mainW;
};

#endif // USERINTERFACE_H
