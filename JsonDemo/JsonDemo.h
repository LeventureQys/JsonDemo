#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_JsonDemo.h"
#include "qjsonarray.h"

#include "qjsondocument.h"

#include "qjsonobject.h"
#include "qjsonvalue.h"
#include "qdebug.h"

struct userinfo {
	QString name;
	QString sip;
	QString seat;
};

class JsonDemo : public QMainWindow
{
    Q_OBJECT

public:
    JsonDemo(QWidget *parent = Q_NULLPTR);
	QList<userinfo> temp;
	QByteArray qba;
	QByteArray qbaa;
	public slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	void on_pushButton_3_clicked();
	void on_pushButton_4_clicked();
private:
    Ui::JsonDemoClass ui;
};
