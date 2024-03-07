#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>
#include <QObject>

#include <QString>

namespace Ui {
class AuthWindow;
}

class AuthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

    QString getLogin();
    QString getPassword();

signals:
    void signUpSignal();
    void signInSignal();

private slots:
    void on_signInButton_clicked();
    void on_signUpButton_clicked();

private:
    Ui::AuthWindow *ui;
};

#endif // AUTHWINDOW_H
