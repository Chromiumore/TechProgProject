#include "back.h"
#include <string>
#include "clientsingleton.h"

Back::Back()
{
    interface = new UserInterface;
    ws = new Workspace;

    connect(interface, &UserInterface::signInSignal, this, &Back::signInRequest);
    connect(interface, &UserInterface::signUpSignal, this, &Back::signUpRequest);

    connect(ClientSingleton::getInstance(), &ClientSingleton::answerSignal, this, &Back::back_parsing);
}

Back::~Back()
{
    delete interface;
    delete ws;
}

void Back::signInRequest(QString login, QString password)
{
    std::string num = "0";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString() + sep + password.toStdString());
    ClientSingleton::getInstance()->slotClientSend(req.toUtf8());
}

void Back::signUpRequest(QString login, QString password)
{
    std::string num = "1";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString() + sep + password.toStdString());
    ClientSingleton::getInstance()->slotClientSend(req.toUtf8());
}

void Back::statRequest(QString login)
{
    std::string num = "2";
    std::string sep = "%";
    QString req = QString::fromStdString(num + sep + login.toStdString());
    ClientSingleton::getInstance()->slotClientSend(req.toUtf8());
}

void Back::back_parsing(QByteArray array)
{
    interface->codeManager(array.toInt());
}
