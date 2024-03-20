#include "userinterface.h"
#include <QDebug>
#include <QMessageBox>

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
    emit signalFromInterface(1, authW->getLogin(), authW->getPassword(), authW->getEmail());
}

void UserInterface::signUp()
{
    emit signalFromInterface(2, authW->getLogin(), authW->getPassword(), authW->getEmail());
}

void UserInterface::codeManager(int code)
{
    switch (code)
    {
    case 1:
        qDebug() << "Signed In successfully\n";
        toMainWindow();
        message.setWindowTitle("Авторизация");
        message.setText("Вы успешно вошли в систему!");
        message.setIcon(QMessageBox::Information);
        message.exec();
        break;
    case 2:
        qDebug() << "Sign Up successfully\n";
        message.setWindowTitle("Регистрация");
        message.setText("Вы успешно зарегестрировались");
        message.setIcon(QMessageBox::Information);
        message.exec();
        break;
    case 3:
        qDebug() << "stat\n";
        break;
    case 4:
        qDebug() << "allstat\n";
        break;
    }
}



