/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *latitude;
    QLineEdit *radius;
    QLineEdit *day;
    QLabel *label;
    QLineEdit *longitude;
    QLabel *label_3;
    QLineEdit *hour;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(524, 366);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(11);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4CAF50; /* Green */\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #76C479;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 13px 30px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: #3D8C40;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}"));

        gridLayout->addWidget(pushButton, 7, 0, 1, 2);

        latitude = new QLineEdit(centralwidget);
        latitude->setObjectName("latitude");

        gridLayout->addWidget(latitude, 1, 0, 1, 1);

        radius = new QLineEdit(centralwidget);
        radius->setObjectName("radius");

        gridLayout->addWidget(radius, 6, 0, 1, 1);

        day = new QLineEdit(centralwidget);
        day->setObjectName("day");

        gridLayout->addWidget(day, 3, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        longitude = new QLineEdit(centralwidget);
        longitude->setObjectName("longitude");

        gridLayout->addWidget(longitude, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        hour = new QLineEdit(centralwidget);
        hour->setObjectName("hour");

        gridLayout->addWidget(hour, 3, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(10);
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 9, 0, 1, 2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #4CAF50; /* Green */\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: #76C479;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 13px 30px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: #3D8C40;\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 15px 32px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 8, 0, 1, 2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 524, 21));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\224\320\276\320\273\320\263\320\276\321\202\320\260</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        latitude->setText(QCoreApplication::translate("MainWindow", "55.7", nullptr));
        radius->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        day->setText(QCoreApplication::translate("MainWindow", "2.07", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\250\320\270\321\200\320\276\321\202\320\260</span></p></body></html>", nullptr));
        longitude->setText(QCoreApplication::translate("MainWindow", "37.6", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\275\321\214", nullptr));
        hour->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 - \320\270\321\216\320\275\321\214 - \320\275\320\260\321\207\320\260\320\273\320\276 \320\260\320\262\320\263\321\203\321\201\321\202\320\260. \320\244\320\276\321\200\320\274\320\260\321\202 \320\264\320\260\321\202\321\213 - d.mm</p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\260\320\275\320\276\320\274\320\260\320\273\321\214\320\275\321\213\320\265 \320\277\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\240\320\260\320\264\320\270\321\203\321\201 \320\277\320\276\320\270\321\201\320\272\320\260</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
