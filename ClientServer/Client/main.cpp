#include "userinterface.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UserInterface interface;
    return a.exec();
}
