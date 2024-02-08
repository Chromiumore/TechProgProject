#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mTcpSocket = new QTcpSocket(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotClientRead()
{

}

void MainWindow::slotClientDisconect()
{
    socket->deleteLater();
}

void MainWindow::on_sendMButton_clicked()
{
    socket->connectToHost("127.0.0.1", 33333);
}
