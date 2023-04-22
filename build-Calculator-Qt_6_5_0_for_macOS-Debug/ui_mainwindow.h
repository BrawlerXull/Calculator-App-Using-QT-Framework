/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *secondNum;
    QLabel *firstNum;
    QLineEdit *txtFirst;
    QLineEdit *txtSecond;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnDiv;
    QPushButton *btnMult;
    QLabel *result;
    QLineEdit *txtThird;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(530, 386);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        secondNum = new QLabel(centralwidget);
        secondNum->setObjectName("secondNum");
        secondNum->setGeometry(QRect(110, 160, 111, 16));
        firstNum = new QLabel(centralwidget);
        firstNum->setObjectName("firstNum");
        firstNum->setGeometry(QRect(110, 110, 121, 16));
        txtFirst = new QLineEdit(centralwidget);
        txtFirst->setObjectName("txtFirst");
        txtFirst->setGeometry(QRect(260, 110, 113, 21));
        txtSecond = new QLineEdit(centralwidget);
        txtSecond->setObjectName("txtSecond");
        txtSecond->setGeometry(QRect(260, 160, 113, 21));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(50, 220, 91, 32));
        btnSub = new QPushButton(centralwidget);
        btnSub->setObjectName("btnSub");
        btnSub->setGeometry(QRect(160, 220, 100, 32));
        btnDiv = new QPushButton(centralwidget);
        btnDiv->setObjectName("btnDiv");
        btnDiv->setGeometry(QRect(280, 220, 100, 32));
        btnMult = new QPushButton(centralwidget);
        btnMult->setObjectName("btnMult");
        btnMult->setGeometry(QRect(400, 220, 100, 32));
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(110, 270, 58, 16));
        txtThird = new QLineEdit(centralwidget);
        txtThird->setObjectName("txtThird");
        txtThird->setGeometry(QRect(260, 270, 113, 21));
        txtThird->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 530, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        secondNum->setText(QCoreApplication::translate("MainWindow", "Second Number", nullptr));
        firstNum->setText(QCoreApplication::translate("MainWindow", "First Number", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMult->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
