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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WorkWindow
{
public:
    QPushButton *toAuthButton;

    void setupUi(QDialog *WorkWindow)
    {
        if (WorkWindow->objectName().isEmpty())
            WorkWindow->setObjectName("WorkWindow");
        WorkWindow->resize(400, 300);
        toAuthButton = new QPushButton(WorkWindow);
        toAuthButton->setObjectName("toAuthButton");
        toAuthButton->setGeometry(QRect(100, 90, 191, 111));

        retranslateUi(WorkWindow);

        QMetaObject::connectSlotsByName(WorkWindow);
    } // setupUi

    void retranslateUi(QDialog *WorkWindow)
    {
        WorkWindow->setWindowTitle(QCoreApplication::translate("WorkWindow", "Dialog", nullptr));
        toAuthButton->setText(QCoreApplication::translate("WorkWindow", "Back to auth", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkWindow: public Ui_WorkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
