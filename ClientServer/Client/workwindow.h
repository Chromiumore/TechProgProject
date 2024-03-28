#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QDialog>
#include <QObject>

namespace Ui {
class WorkWindow;
}

class WorkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WorkWindow(QWidget *parent = nullptr);
    ~WorkWindow();

private slots:
    void on_backToAuthButton_clicked();

private:
    Ui::WorkWindow *ui;

signals:
    void toAuth();
};

#endif // WORKWINDOW_H
