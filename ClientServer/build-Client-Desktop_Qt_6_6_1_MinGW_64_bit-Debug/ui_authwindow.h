/********************************************************************************
** Form generated from reading UI file 'authwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLabel *passwordLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *loginLineEdit;
    QLineEdit *passwordLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signInButton;
    QPushButton *signUpButton;

    void setupUi(QDialog *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(400, 300);
        horizontalLayoutWidget = new QWidget(AuthWindow);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 60, 391, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        loginLabel = new QLabel(horizontalLayoutWidget);
        loginLabel->setObjectName("loginLabel");

        verticalLayout->addWidget(loginLabel);

        passwordLabel = new QLabel(horizontalLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        verticalLayout->addWidget(passwordLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        loginLineEdit = new QLineEdit(horizontalLayoutWidget);
        loginLineEdit->setObjectName("loginLineEdit");

        verticalLayout_2->addWidget(loginLineEdit);

        passwordLineEdit = new QLineEdit(horizontalLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        verticalLayout_2->addWidget(passwordLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(AuthWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(50, 210, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        signInButton = new QPushButton(horizontalLayoutWidget_2);
        signInButton->setObjectName("signInButton");

        horizontalLayout_2->addWidget(signInButton);

        signUpButton = new QPushButton(horizontalLayoutWidget_2);
        signUpButton->setObjectName("signUpButton");

        horizontalLayout_2->addWidget(signUpButton);


        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("AuthWindow", "Login", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AuthWindow", "Password", nullptr));
        signInButton->setText(QCoreApplication::translate("AuthWindow", "Sign in", nullptr));
        signUpButton->setText(QCoreApplication::translate("AuthWindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
