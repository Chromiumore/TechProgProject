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
    void signInRequest(QString, QString);
    void signUpRequest(QString, QString);
    void statRequest(QString);
    void back_parsing(QByteArray);

private:
    UserInterface *interface;
    Workspace *ws;
};
#endif // BACK_H
