#include "mywidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //应用程序对象，在QT有且仅有一个
    QApplication a(argc, argv);
    //窗口对象
    myWidget w;
    //窗口对象默认不会显示
    w.show();

    return a.exec();
}
