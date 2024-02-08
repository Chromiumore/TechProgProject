#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void slotClientRead();
    void slotClientDisconect();

private slots:
    void on_sendMButton_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket* mTcpSocket;
};
#endif // MAINWINDOW_H
