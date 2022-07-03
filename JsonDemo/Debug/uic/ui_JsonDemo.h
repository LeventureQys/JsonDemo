/********************************************************************************
** Form generated from reading UI file 'JsonDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JSONDEMO_H
#define UI_JSONDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JsonDemoClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JsonDemoClass)
    {
        if (JsonDemoClass->objectName().isEmpty())
            JsonDemoClass->setObjectName(QStringLiteral("JsonDemoClass"));
        JsonDemoClass->resize(600, 400);
        centralWidget = new QWidget(JsonDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 151, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 40, 151, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 70, 151, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 100, 151, 23));
        JsonDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(JsonDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        JsonDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JsonDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        JsonDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(JsonDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        JsonDemoClass->setStatusBar(statusBar);

        retranslateUi(JsonDemoClass);

        QMetaObject::connectSlotsByName(JsonDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *JsonDemoClass)
    {
        JsonDemoClass->setWindowTitle(QApplication::translate("JsonDemoClass", "JsonDemo", nullptr));
        pushButton->setText(QApplication::translate("JsonDemoClass", "make jsonobject", nullptr));
        pushButton_2->setText(QApplication::translate("JsonDemoClass", "make jsonarray", nullptr));
        pushButton_3->setText(QApplication::translate("JsonDemoClass", "parse object", nullptr));
        pushButton_4->setText(QApplication::translate("JsonDemoClass", "parse jsonarray", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JsonDemoClass: public Ui_JsonDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSONDEMO_H
