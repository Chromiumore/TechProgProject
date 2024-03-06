#include "workwindow.h"
#include "ui_workwindow.h"

WorkWindow::WorkWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WorkWindow)
{
    ui->setupUi(this);
}

WorkWindow::~WorkWindow()
{
    delete ui;
}

void WorkWindow::on_toAuthButton_clicked()
{
    emit toAuth();
}

