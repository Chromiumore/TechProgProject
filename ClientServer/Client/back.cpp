#include "back.h"
#include <string>
#include "clientsingleton.h"
#include <QDebug>

Back::Back()
{
    interface = new UserInterface;

    connect(interface, &UserInterface::signalFromInterface, this, &Back::sendRequest);
    connect(ClientSingleton::getInstance(), &ClientSingleton::answerSignal, this, &Back::back_parsing);

    qDebug() << "Back::Back  |  back initialized\n";
}

Back::~Back()
{
    delete interface;
    qDebug() << "Back::~Back  |  back destroyed\n";
}

void Back::sendRequest(int _code, QString _login, QString _password, QString _email)
{
    std::string login = _login.toStdString();
    std::string password = _password.toStdString();
    std::string email = _email.toStdString();
    std::string code = std::to_string(_code);
    std::string sep = "%";
    QString req = QString::fromStdString(code + sep + login + sep + password + sep + email);
    ClientSingleton::getInstance()->slotClientSend(req.toUtf8());
    qDebug() << "Back::sendRequest  |  sending request to singleton\n";
}

void Back::back_parsing(QByteArray array)
{
    interface->codeManager(array.toInt());
    qDebug() << "Back::back_parsing  |  sending server answer to code manager\n";
}
