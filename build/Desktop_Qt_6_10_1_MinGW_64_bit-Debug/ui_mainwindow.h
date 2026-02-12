/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLCDNumber *lcdNumber;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Start;
    QPushButton *Reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(733, 282);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Main window */\n"
"QMainWindow {\n"
"    background-color: #2b2f36;\n"
"}\n"
"\n"
"/* Central widget */\n"
"QWidget {\n"
"    background-color: #2b2f36;\n"
"    color: #eaeaea;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* LCD Number */\n"
"QLCDNumber {\n"
"    background-color: #1f2329;\n"
"    color: #00ffcc;\n"
"    border: 2px solid #3a3f46;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"/* Push Buttons */\n"
"QPushButton {\n"
"    background-color: #3a3f46;\n"
"    color: #ffffff;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4a5058;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2c3036;\n"
"}\n"
"\n"
"/* Optional: Menu bar (if you added one) */\n"
"QMenuBar {\n"
"    background-color: #2b2f36;\n"
"    color: #eaeaea;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #3a3f46;\n"
"}\n"
"\n"
"QMenu {\n"
""
                        "    background-color: #2b2f36;\n"
"    color: #eaeaea;\n"
"}\n"
"\n"
"QMenu::item:selected {\n"
"    background-color: #4a5058;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Vertical);
        lcdNumber = new QLCDNumber(splitter);
        lcdNumber->setObjectName("lcdNumber");
        splitter->addWidget(lcdNumber);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Start = new QPushButton(layoutWidget);
        Start->setObjectName("Start");

        horizontalLayout->addWidget(Start);

        Reset = new QPushButton(layoutWidget);
        Reset->setObjectName("Reset");

        horizontalLayout->addWidget(Reset);

        splitter->addWidget(layoutWidget);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 733, 25));
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
        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
