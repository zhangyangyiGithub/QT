#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
 #include <QMouseEvent>
 #include <QEvent>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);
    //鼠标进入事件
     void enterEvent(QEvent *);

     //鼠标离开事件
     void leaveEvent(QEvent *);
     //鼠标的按下
      void mousePressEvent(QMouseEvent *e);
     //鼠标的释放
      void mouseReleaseEvent(QMouseEvent *e);
     //鼠标的移动
       void mouseMoveEvent(QMouseEvent *e);

       //通过事件分发器拦截 鼠标按下事件
       bool event(QEvent *e);

signals:

public slots:
};

#endif // MYLABEL_H
