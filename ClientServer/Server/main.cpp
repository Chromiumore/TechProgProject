#include <QCoreApplication>
#include "serverinterface.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ServerInterface myserv;
    return a.exec();
}
