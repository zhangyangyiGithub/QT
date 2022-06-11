#include "widget.h"
#include "ui_widget.h"
#include<QTimer>
#include<QDebug>
#include<QMouseEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //启动定时器
    id1=startTimer(1000);//毫秒

    id2=startTimer(2000);

    //定时器第二种方式
    QTimer * timer = new QTimer(this);
    //启动定时器
    timer->start(500);

    connect(timer,&QTimer::timeout,[=](){
        static int num =1;
        //每隔0.5毫米
        ui->label4->setText(QString::number(num++));
    });

    //点击暂停按钮，停止定时器
    connect(ui->btn1,&QPushButton::clicked,[=](){
        timer->stop();
    });

    //geilabel 安装事件过滤器
    //步骤一安装过滤器
    ui->label->installEventFilter(this);
}
//重新eventfilter事件
bool Widget::eventFilter(QObject*obj,QEvent *e)
{
    if(obj== ui->label)
    {

        if(e->type()==QEvent::MouseButtonPress)
        {
            QMouseEvent *ev= static_cast<QMouseEvent*>(e);
            QString str= QString("事件过滤器 中：：鼠标按下了 x=%1 y=%2 globalX=%3 globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug()<<str;
        }
    }
    //其他默认处理
    return QWidget::eventFilter(obj,e);
}
void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId()==id1)
    {
    static int num =1;
    ui->label2->setText(QString::number(num++));}

    if(event->timerId()==id2)
    {
    static int num =1;
    ui->label3->setText(QString::number(num++));}
}
Widget::~Widget()
{
    delete ui;
}

