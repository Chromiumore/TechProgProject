#include "clientsingleton.h"

ClientSingleton::ClientSingleton(){}

ClientSingleton::~ClientSingleton() {}

ClientSingleton* ClientSingleton::getInstance(){
    if (!instance)
    {
        instance = new ClientSingleton();
        destroyer.initialize(instance);
    }
    return instance;
}


ClientSingletonDestroyer::~ClientSingletonDestroyer()
{
    delete instance;
}
void ClientSingletonDestroyer::initialize(ClientSingleton * p)
{
    instance = p;
}


ClientSingleton * ClientSingleton::instance;
ClientSingletonDestroyer ClientSingleton::destroyer;
