#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置默认的状态;
   ui->radioButtonCloud->setChecked(true);

   //选中矢量化后打印信息
   connect(ui->radioButtonPCV,&QRadioButton::clicked,[=](){
       qDebug()<<"Select了矢量化！"; });

   //多选按钮 2是选中 0是未选中
       connect(ui->checkBoxCompanyGood,&QCheckBox::stateChanged,[=](int state){
           qDebug()<<state;});

    //listwidget写入东西
       QListWidgetItem * item = new QListWidgetItem("to do or not to do is a quest");

       ui->listWidget->addItem(item);
       item->setTextAlignment(Qt::AlignHCenter);

}

Widget::~Widget()
{
    delete ui;
}

