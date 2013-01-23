/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jan 24 02:03:10 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit_bmxh;
    QPushButton *pushButton_search;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_register;
    QLineEdit *lineEdit_province;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_sex;
    QLineEdit *lineEdit_zykh;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 54, 12));
        lineEdit_bmxh = new QLineEdit(centralWidget);
        lineEdit_bmxh->setObjectName(QString::fromUtf8("lineEdit_bmxh"));
        lineEdit_bmxh->setGeometry(QRect(130, 60, 113, 20));
        pushButton_search = new QPushButton(centralWidget);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(270, 60, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 140, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 170, 54, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 200, 54, 12));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 240, 54, 12));
        pushButton_register = new QPushButton(centralWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(320, 270, 75, 23));
        lineEdit_province = new QLineEdit(centralWidget);
        lineEdit_province->setObjectName(QString::fromUtf8("lineEdit_province"));
        lineEdit_province->setGeometry(QRect(120, 130, 113, 20));
        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(120, 170, 113, 20));
        lineEdit_sex = new QLineEdit(centralWidget);
        lineEdit_sex->setObjectName(QString::fromUtf8("lineEdit_sex"));
        lineEdit_sex->setGeometry(QRect(120, 200, 113, 20));
        lineEdit_zykh = new QLineEdit(centralWidget);
        lineEdit_zykh->setObjectName(QString::fromUtf8("lineEdit_zykh"));
        lineEdit_zykh->setGeometry(QRect(140, 240, 113, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 240, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\212\245\345\220\215\345\272\217\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_search->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\347\234\201\344\273\275:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\223\344\270\232\350\200\203\345\217\267:", 0, QApplication::UnicodeUTF8));
        pushButton_register->setText(QApplication::translate("MainWindow", "\346\212\245\345\210\260", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "1311", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
