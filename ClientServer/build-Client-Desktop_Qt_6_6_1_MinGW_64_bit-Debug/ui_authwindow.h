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
    QLabel *emailLabel;
    QLabel *loginLabel;
    QLabel *passwordLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *emailLineEdit;
    QLineEdit *loginLineEdit;
    QLineEdit *passwordLineEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signUpButton;
    QPushButton *signInButton;
    QPushButton *confirmButton;

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
        emailLabel = new QLabel(horizontalLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        verticalLayout->addWidget(emailLabel);

        loginLabel = new QLabel(horizontalLayoutWidget);
        loginLabel->setObjectName("loginLabel");

        verticalLayout->addWidget(loginLabel);

        passwordLabel = new QLabel(horizontalLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        verticalLayout->addWidget(passwordLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        emailLineEdit = new QLineEdit(horizontalLayoutWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        verticalLayout_2->addWidget(emailLineEdit);

        loginLineEdit = new QLineEdit(horizontalLayoutWidget);
        loginLineEdit->setObjectName("loginLineEdit");

        verticalLayout_2->addWidget(loginLineEdit);

        passwordLineEdit = new QLineEdit(horizontalLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        verticalLayout_2->addWidget(passwordLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayoutWidget_2 = new QWidget(AuthWindow);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(50, 240, 301, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        signUpButton = new QPushButton(horizontalLayoutWidget_2);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setEnabled(true);

        horizontalLayout_2->addWidget(signUpButton);

        signInButton = new QPushButton(horizontalLayoutWidget_2);
        signInButton->setObjectName("signInButton");

        horizontalLayout_2->addWidget(signInButton);

        confirmButton = new QPushButton(AuthWindow);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(262, 180, 111, 29));

        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "Dialog", nullptr));
        emailLabel->setText(QCoreApplication::translate("AuthWindow", "Email", nullptr));
        loginLabel->setText(QCoreApplication::translate("AuthWindow", "Login", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AuthWindow", "Password", nullptr));
        signUpButton->setText(QCoreApplication::translate("AuthWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        signInButton->setText(QCoreApplication::translate("AuthWindow", "\320\222\321\205\320\276\320\264", nullptr));
        confirmButton->setText(QCoreApplication::translate("AuthWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
