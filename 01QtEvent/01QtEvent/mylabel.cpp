#include "mylabel.h"
#include<QDebug>

myLabel::myLabel(QWidget *parent) : QLabel(parent)
{

}

//鼠标进入事件
 void myLabel::enterEvent(QEvent *)
{

 //qDebug()<<"鼠标进入了";
 }

 //鼠标离开事件
 void myLabel::leaveEvent(QEvent *)
 {
     //qDebug()<<"鼠标离开了";
 }

 //鼠标的按下
 void  myLabel::mousePressEvent(QMouseEvent * e){
     if(e->button()==Qt::LeftButton)
     {
     QString str= QString("鼠标按下了 x=%1 y=%2 globalX=%3 globalY = %4 ").arg(e->x()).arg(e->y()).arg(e->globalX()).arg(e->globalY());
     qDebug()<<str;
     }
 }
 //鼠标的释放
 void  myLabel::mouseReleaseEvent(QMouseEvent *e){
     qDebug()<<"鼠标释放了";
 }
 //鼠标的移动
 void  myLabel::mouseMoveEvent(QMouseEvent *e){
     if(e->buttons() & Qt::LeftButton)
     {
     QString str= QString("鼠标移动了 x=%1 y=%2 globalX=%3 globalY = %4 ").arg(e->x()).arg(e->y()).arg(e->globalX()).arg(e->globalY());
     qDebug()<<str;
     }
 }
 //通过事件分发器拦截 鼠标按下事件
 bool myLabel::event(QEvent *e)
 {

     if(e->type()==QEvent::MouseButtonPress)
     {
         QMouseEvent *ev= static_cast<QMouseEvent*>(e);
         QString str= QString("Event 中：：鼠标按下了 x=%1 y=%2 globalX=%3 globalY = %4 ").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
         qDebug()<<str;
     }
     //其他事件交给父类 默认处理
     return QLabel::event(e);
 }

