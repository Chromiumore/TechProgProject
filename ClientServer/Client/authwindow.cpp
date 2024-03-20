#include "authwindow.h"
#include "ui_authwindow.h"

AuthWindow::AuthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);

    isReg = true;
    ui->emailLabel->setVisible(!isReg);
    ui->emailLineEdit->setVisible(!isReg);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

void AuthWindow::on_signInButton_clicked()
{
    isReg = false;
    ui->emailLabel->setVisible(!isReg);
    ui->emailLineEdit->setVisible(!isReg);
}


void AuthWindow::on_signUpButton_clicked()
{
    isReg = true;
    ui->emailLabel->setVisible(!isReg);
    ui->emailLineEdit->setVisible(!isReg);
}

QString AuthWindow::getLogin()
{
    return ui->loginLineEdit->text();
}

QString AuthWindow::getPassword()
{
    return ui->passwordLineEdit->text();
}

QString AuthWindow::getEmail()
{
    return ui->emailLineEdit->text();
}

void AuthWindow::on_confirmButton_clicked()
{
    if (isReg)
        emit signUp();
    else
        emit signIn();
}

