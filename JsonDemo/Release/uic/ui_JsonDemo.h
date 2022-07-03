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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JsonDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JsonDemoClass)
    {
        if (JsonDemoClass->objectName().isEmpty())
            JsonDemoClass->setObjectName(QStringLiteral("JsonDemoClass"));
        JsonDemoClass->resize(600, 400);
        menuBar = new QMenuBar(JsonDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        JsonDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JsonDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        JsonDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(JsonDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        JsonDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(JsonDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        JsonDemoClass->setStatusBar(statusBar);

        retranslateUi(JsonDemoClass);

        QMetaObject::connectSlotsByName(JsonDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *JsonDemoClass)
    {
        JsonDemoClass->setWindowTitle(QApplication::translate("JsonDemoClass", "JsonDemo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JsonDemoClass: public Ui_JsonDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JSONDEMO_H
