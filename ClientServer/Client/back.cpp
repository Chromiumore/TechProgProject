#include "back.h"
#include <string>
#include "clientsingleton.h"

Back::Back()
{
    interface = new UserInterface;

    connect(interface, &UserInterface::signalFromInterface, this, &Back::sendRequest);

    connect(ClientSingleton::getInstance(), &ClientSingleton::answerSignal, this, &Back::back_parsing);
}

Back::~Back()
{
    delete interface;
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
}

void Back::back_parsing(QByteArray array)
{
    interface->codeManager(array.toInt());
}
