#ifndef BACK_H
#define BACK_H

#include <QObject>
#include <QtNetwork>
#include <QString>

#include "userinterface.h"
#include "workspace.h"

QT_BEGIN_NAMESPACE

class Back: public QObject
{
    Q_OBJECT

public:
    Back();
    ~Back();

public slots:
    void sendRequest(int, QString, QString, QString);
    void back_parsing(QByteArray);

private:
    UserInterface *interface;
};
#endif // BACK_H
