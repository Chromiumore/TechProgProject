#include "authwindow.h"
#include "ui_authwindow.h"

AuthWindow::AuthWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

void AuthWindow::on_signInButton_clicked()
{
    emit signInSignal();
}


void AuthWindow::on_signUpButton_clicked()
{
    emit signUpSignal();
}

QString AuthWindow::getLogin()
{
    return ui->loginLineEdit->text();
}

QString AuthWindow::getPassword()
{
    return ui->passwordLineEdit->text();
}
