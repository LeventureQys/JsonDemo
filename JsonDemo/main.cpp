#include "JsonDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JsonDemo w;
    w.show();
    return a.exec();
}
