#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //点击获取 获取控件当前值
    connect(ui->BtnGetValue,&QPushButton::clicked,[=](){
        qDebug()<< ui->widget->getNum();
    });

    //设置到一半
    connect(ui->BtnSetHalf,&QPushButton::clicked,[=](){
        ui->widget->setNum(50);
    });
}

Widget::~Widget()
{
    delete ui;
}

