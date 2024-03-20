/********************************************************************************
** Form generated from reading UI file 'workwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWINDOW_H
#define UI_WORKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkWindow
{
public:
    QPushButton *backToAuthButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *key2LineEdit;
    QLabel *label_2;
    QLineEdit *task2LineEdit;
    QLineEdit *task1lineEdit;
    QLineEdit *key1LineEdit;
    QLineEdit *task3LineEdit;
    QLabel *label_3;
    QPushButton *task1Button;
    QPushButton *task2Button;
    QPushButton *task3Button;
    QPushButton *statButton;
    QPushButton *allStatButton;

    void setupUi(QDialog *WorkWindow)
    {
        if (WorkWindow->objectName().isEmpty())
            WorkWindow->setObjectName("WorkWindow");
        WorkWindow->resize(621, 455);
        backToAuthButton = new QPushButton(WorkWindow);
        backToAuthButton->setObjectName("backToAuthButton");
        backToAuthButton->setGeometry(QRect(492, 10, 111, 41));
        gridLayoutWidget = new QWidget(WorkWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 160, 541, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        key2LineEdit = new QLineEdit(gridLayoutWidget);
        key2LineEdit->setObjectName("key2LineEdit");

        gridLayout->addWidget(key2LineEdit, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        task2LineEdit = new QLineEdit(gridLayoutWidget);
        task2LineEdit->setObjectName("task2LineEdit");

        gridLayout->addWidget(task2LineEdit, 1, 1, 1, 1);

        task1lineEdit = new QLineEdit(gridLayoutWidget);
        task1lineEdit->setObjectName("task1lineEdit");

        gridLayout->addWidget(task1lineEdit, 1, 0, 1, 1);

        key1LineEdit = new QLineEdit(gridLayoutWidget);
        key1LineEdit->setObjectName("key1LineEdit");

        gridLayout->addWidget(key1LineEdit, 2, 0, 1, 1);

        task3LineEdit = new QLineEdit(gridLayoutWidget);
        task3LineEdit->setObjectName("task3LineEdit");

        gridLayout->addWidget(task3LineEdit, 1, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        task1Button = new QPushButton(gridLayoutWidget);
        task1Button->setObjectName("task1Button");

        gridLayout->addWidget(task1Button, 3, 0, 1, 1);

        task2Button = new QPushButton(gridLayoutWidget);
        task2Button->setObjectName("task2Button");

        gridLayout->addWidget(task2Button, 3, 1, 1, 1);

        task3Button = new QPushButton(gridLayoutWidget);
        task3Button->setObjectName("task3Button");

        gridLayout->addWidget(task3Button, 3, 2, 1, 1);

        statButton = new QPushButton(WorkWindow);
        statButton->setObjectName("statButton");
        statButton->setGeometry(QRect(20, 10, 111, 41));
        allStatButton = new QPushButton(WorkWindow);
        allStatButton->setObjectName("allStatButton");
        allStatButton->setGeometry(QRect(20, 60, 111, 41));

        retranslateUi(WorkWindow);

        QMetaObject::connectSlotsByName(WorkWindow);
    } // setupUi

    void retranslateUi(QDialog *WorkWindow)
    {
        WorkWindow->setWindowTitle(QCoreApplication::translate("WorkWindow", "Dialog", nullptr));
        backToAuthButton->setText(QCoreApplication::translate("WorkWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("WorkWindow", "\320\250\320\270\321\204\321\200 1", nullptr));
        label_2->setText(QCoreApplication::translate("WorkWindow", "\320\250\320\270\321\204\321\200 2", nullptr));
        label_3->setText(QCoreApplication::translate("WorkWindow", "\320\250\320\270\321\204\321\200 3", nullptr));
        task1Button->setText(QCoreApplication::translate("WorkWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        task2Button->setText(QCoreApplication::translate("WorkWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        task3Button->setText(QCoreApplication::translate("WorkWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        statButton->setText(QCoreApplication::translate("WorkWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        allStatButton->setText(QCoreApplication::translate("WorkWindow", "\320\222\321\201\321\217 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkWindow: public Ui_WorkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
