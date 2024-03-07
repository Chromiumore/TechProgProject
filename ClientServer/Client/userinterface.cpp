#include "userinterface.h"
#include <QDebug>

UserInterface::UserInterface()
{
    authW = new AuthWindow;
    mainW = new WorkWindow;
    authW->show();
    qDebug() << "UserInterface\n";
    qDebug() << "UserInterface\n";
    connect(authW, &AuthWindow::signIn, this, &UserInterface::toMainWindow);
}

UserInterface::~UserInterface()
{
    qDebug() << "~UserInterface()\n";
    delete authW;
    delete mainW;

}

void UserInterface::toAuthWindow()
{
    mainW->hide();
    authW->show();
}

void UserInterface::toMainWindow()
{
    authW->hide();
    mainW->show();
}

void UserInterface::signIn()
{
    emit signInSignal(authW->getLogin(), authW->getPassword());
}

void UserInterface::signUp()
{
    emit signUpSignal(authW->getLogin(), authW->getPassword());
}

void UserInterface::codeManager(int code)
{
    switch (code)
    {
    case 0:
        qDebug() << "sign in\n";
        break;
    case 1:
        qDebug() << "sign up\n";
        break;
    case 2:
        qDebug() << "stat\n";
        break;
    }
}



