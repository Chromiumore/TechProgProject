#include "userinterface.h"
#include <QDebug>
#include <QMessageBox>

UserInterface::UserInterface()
{
    authW = new AuthWindow;
    mainW = new WorkWindow;
    authW->show();
    connect(authW, &AuthWindow::signIn, this, &UserInterface::signIn);
    connect(authW, &AuthWindow::signUp, this, &UserInterface::signUp);
    connect(mainW, &WorkWindow::toAuth, this, &UserInterface::toAuthWindow);
    qDebug() << "UserInterface::UserInterface  |  interface initiliazed\n";
}

UserInterface::~UserInterface()
{
    delete authW;
    delete mainW;
    qDebug() << "UserInterface::~UserInterface()  |  interface destroyed\n";
}

void UserInterface::toAuthWindow()
{
    mainW->hide();
    authW->show();
    qDebug() << "UserInterface::toAuthWindow  |  interface switched to authorization\n";
}

void UserInterface::toMainWindow()
{
    authW->hide();
    mainW->show();
    qDebug() << "UserInterface::toMainWindow  |  interface switched to work window\n";
}

void UserInterface::signIn()
{
    emit signalFromInterface(1, authW->getLogin(), authW->getPassword(), authW->getEmail());
    qDebug() << "UserInterface::signIn  |  sign in signal emited\n";
}

void UserInterface::signUp()
{
    emit signalFromInterface(2, authW->getLogin(), authW->getPassword(), authW->getEmail());
    qDebug() << "UserInterface::signUp  |  sign up signal emited\n";
}

void UserInterface::codeManager(int code)
{
    switch (code)
    {
    case 1:
        toMainWindow();
        message.setWindowTitle("Авторизация");
        message.setText("Вы успешно вошли в систему!");
        message.setIcon(QMessageBox::Information);
        message.exec();
        qDebug() << "UserInterface::codeManager  |  signed in successfully\n";
        break;
    case 2:
        message.setWindowTitle("Регистрация");
        message.setText("Вы успешно зарегестрировались");
        message.setIcon(QMessageBox::Information);
        message.exec();
        qDebug() << "UserInterface::codeManager  |  signed up successfully\n";
        break;
    case 3:
        qDebug() << "UserInterface::codeManager  |  checking user statistics\n";
        break;
    case 4:
        qDebug() << "UserInterface::codeManager  |  checking global statistics\n";
        break;
    }
}



