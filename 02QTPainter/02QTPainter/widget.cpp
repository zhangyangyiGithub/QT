#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //点击移动按钮，移动图片
    connect(ui->btnMove,&QPushButton::clicked,[=](){
        posX+=60;
        //如果要手动调用绘图事件，用update更新
        update();
    });
}

Widget::~Widget()
{
    delete ui;
}

//实例化画家的类
void Widget::paintEvent(QPaintEvent *event)
{
//    //实例化画家对象，this指的是绘图设备
//    QPainter painter(this);

//    painter.drawLine(QPoint(0,0),QPoint(100,100));

//    //画园
//    painter.drawEllipse(QPoint(100,100),50,50);


    //-//////////////////////////利用画家 画资源图片///////////

    QPainter painter(this);

    //如果超出屏幕，从0开始
    if(posX>this->width())
    {
        posX=0;
    }

    painter.drawPixmap(posX,0,400,600,QPixmap(":/qtImage/lufei.jpeg"));

}
