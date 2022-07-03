#include "JsonDemo.h"

JsonDemo::JsonDemo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	userinfo u1;
	userinfo u2;
	userinfo u3;
	
	u1.name = "lwx";
	u2.name = "hlx";
	u3.name = "xx";
	
	u1.seat = "1";
	u2.seat = "2";
	u3.seat = "3";

	u1.sip = "1.1";
	u2.sip = "1.2";
	u3.sip = "1.3";

	temp.append(u1);
	temp.append(u2);
	temp.append(u3);
}

void JsonDemo::on_pushButton_clicked() {
	QJsonObject json;
	json.insert("Sip", "{IP}");
	json.insert("Seat", "123");
	json.insert("Name", "李文轩");

	QJsonDocument doc;
	doc.setObject(json);

	qba = doc.toJson(QJsonDocument::Compact);

	qDebug() << qba;
}

void JsonDemo::on_pushButton_2_clicked() {
	QJsonObject jsarray;
	QJsonArray Name;
	QJsonArray Seat;
	QJsonArray sip;

	QString title = "STULIST";
	QJsonArray amap;

	for (int i = 0; i < temp.size(); i++) {
		QJsonObject tjson;
		tjson.insert("Ip", temp.at(i).sip);
		tjson.insert("Seat", temp.at(i).seat);
		tjson.insert("Name", temp.at(i).name);
		amap.append(tjson);
	}

	QJsonObject TeacherInfo;

	TeacherInfo.insert("Ip", "5.5");
	TeacherInfo.insert("Seat", "06");
	TeacherInfo.insert("Name", "Tea");

	QJsonObject ClassInfo;

	ClassInfo.insert("classname", "三年一班");


	QJsonDocument doc;
	QJsonObject strMessage;
	strMessage.insert("ALLSTULIST", "1");
	strMessage.insert(title, amap);
	strMessage.insert("TEACHERINFO", TeacherInfo);
	strMessage.insert("CLASSNAME", ClassInfo);

	doc.setObject(strMessage);
	QByteArray bta = doc.toJson(QJsonDocument::Compact);

	qbaa = bta;
	qDebug() << qbaa;
	qDebug() << QString::fromLocal8Bit(qbaa);
	//for (int i = 0; i < temp.size(); i++) {
	//	Name.append(temp.at(i).name);
	//	Seat.append(temp.at(i).seat);
	//	sip.append(temp.at(i).sip);
	//}

	//jsarray.insert("Name", Name);
	//jsarray.insert("Seat", Seat);
	//jsarray.insert("Sip",sip);

	//QJsonDocument doc;
	//doc.setObject(jsarray);

	//qbaa = doc.toJson(QJsonDocument::Compact);

	//qDebug() << qbaa;





}


void JsonDemo::on_pushButton_3_clicked() {
	QJsonParseError jsonError;
	qDebug() << qba;
	QJsonDocument doc = QJsonDocument::fromJson(qba, &jsonError);  // 转化为 JSON 文档
	if (!doc.isNull() && (jsonError.error == QJsonParseError::NoError))   // 解析未发生错误
		{
		if (doc.isObject()) {
			QJsonObject json = doc.object(); //转化为对象
			qDebug() << json.value("Seat").toString();
			qDebug() << json.value("Sip").toString();
			qDebug() << json.value("Name").toString();
			qDebug() << json.value("pic").toString();
			}
		}
}

void JsonDemo::on_pushButton_4_clicked() {

	QList<userinfo> test[3];
	QJsonParseError jsonError;

	if (qbaa.contains("ALLSTULIST")) {
		QJsonDocument doc = QJsonDocument::fromJson(qbaa, &jsonError);  // 转化为 JSON 文档
		if (!doc.isNull() && (jsonError.error == QJsonParseError::NoError))   // 解析未发生错误
		{
			QJsonObject obj = doc.object();

			QJsonValue STULIST = obj.value("STULIST");
			QJsonValue TEACHERINFO = obj.value("TEACHERINFO");
			QJsonValue CLASSNAME = obj.value("CLASSNAME");

			QJsonArray Stulist = STULIST.toArray();
			QJsonObject TeacherInfo = TEACHERINFO.toObject();
			QJsonObject ClassName = CLASSNAME.toObject();

			qDebug() << Stulist << endl;
			qDebug() << TeacherInfo << endl;
			qDebug() << ClassName << endl;

	
			


		}
	}
	
	//QJsonDocument doc = QJsonDocument::fromJson(qbaa, &jsonError);  // 转化为 JSON 文档
	//if (!doc.isNull() && (jsonError.error == QJsonParseError::NoError))   // 解析未发生错误
	//{
	//	QJsonObject obj = doc.object();
	//	QJsonArray Seat = obj.value("Seat").toArray();
	//	QJsonArray Sip = obj.value("Sip").toArray();
	//	QJsonArray Name = obj.value("Name").toArray();

	//	for (int i = 0; i < Seat.size(); i++) {
	//		userinfo temp;
	//		temp.name = Name.at(i).toString();
	//		temp.seat = Seat.at(i).toString();
	//		temp.sip = Sip.at(i).toString();
	//	}
	//	//此为解析得到的数据
	//	temp;
	//	

	//}

}