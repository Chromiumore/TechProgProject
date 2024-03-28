#include "workwindow.h"
#include "ui_workwindow.h"
#include <QDebug>

WorkWindow::WorkWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WorkWindow)
{
    ui->setupUi(this);
    qDebug() << "WorkWindow::WorkWindow  |  word window initialized\n";
}

WorkWindow::~WorkWindow()
{
    delete ui;
    qDebug() << "WorkWindow::~WorkWindow  |  work window destroyed\n";
}



void WorkWindow::on_backToAuthButton_clicked()
{
    emit toAuth();
    qDebug() << "WorkWindow::on_backToAuthButton_clicked  |  to authorization window signal emited\n";
}

