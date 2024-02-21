#include "userinterface.h"
#include <QDebug>

UserInterface::UserInterface()
{
    authW = new AuthWindow;
    authW->show();
    qDebug() << "UserInterface\n";
    qDebug() << "UserInterface\n";
}

UserInterface::~UserInterface()
{
    qDebug() << "~UserInterface()\n";

}

void UserInterface::toAuthWindow()
{

}

void UserInterface::toMainWindow()
{

}

