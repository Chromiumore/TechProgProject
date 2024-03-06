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

private:
    Ui::WorkWindow *ui;
};

#endif // WORKWINDOW_H
