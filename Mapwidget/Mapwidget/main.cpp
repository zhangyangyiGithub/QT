#include "mainwindow.h"

#include <QApplication>
#include "MapWidget.h"
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("ARPL KaitiM GB", 12);
    font.setBold(true);
    a.setFont(font);

    MapWidget mapWidget;
    mapWidget.show();

//    MainWindow w;
//    w.show();
    return a.exec();
}


