#include "mywidget.h"
#include <QPushButton>

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton* btn = new QPushButton;
    btn->show();//show以顶层方式弹出
    btn->setParent(this);//btn对象，以来在widget中

    //xian's显示文本
    btn->setText("第一个按钮");
}

myWidget::~myWidget()
{
}

