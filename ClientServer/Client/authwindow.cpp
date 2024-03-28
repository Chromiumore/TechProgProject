#include "authwindow.h"
#include "ui_authwindow.h"
#include <QDebug>

AuthWindow::AuthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);

    isReg = true;
    ui->emailLabel->setVisible(isReg);
    ui->emailLineEdit->setVisible(isReg);
    qDebug() << "AuthWindow::AuthWindow  |  authorization window initialized\n";
}

AuthWindow::~AuthWindow()
{
    delete ui;
    qDebug() << "AuthWindow::~AuthWindow  |  authorization window destroyed\n";
}

void AuthWindow::on_signInButton_clicked()
{
    isReg = false;
    ui->emailLabel->setVisible(isReg);
    ui->emailLineEdit->setVisible(isReg);
    qDebug() << "AuthWindow::on_signInButton_clicked  |  sign in button clicked\n";
}


void AuthWindow::on_signUpButton_clicked()
{
    isReg = true;
    ui->emailLabel->setVisible(isReg);
    ui->emailLineEdit->setVisible(isReg);
    qDebug() << "AuthWindow::on_signUnButton_clicked  |  sign un button clicked\n";
}

QString AuthWindow::getLogin()
{
    return ui->loginLineEdit->text();
    qDebug() << "AuthWindow::getLogin  |  getting user login\n";
}

QString AuthWindow::getPassword()
{
    return ui->passwordLineEdit->text();
    qDebug() << "AuthWindow::getPassword  |  getting user passwrod\n";
}

QString AuthWindow::getEmail()
{
    return ui->emailLineEdit->text();
        qDebug() << "AuthWindow::getEmail  |  getting user email\n";
}

void AuthWindow::on_confirmButton_clicked()
{
    if (isReg)
    {
        emit signUp();
        qDebug() << "AuthWindow::on_confirmButton_clicked  |  sign up signal emited\n";
    }
    else
    {
        emit signIn();
        qDebug() << "AuthWindow::on_confirmButton_clicked  |  sign in signal emited\n";
    }
}

