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
    connect(mainW, &WorkWindow::toAuth, this, &UserInterface::toAuthWindow);
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

