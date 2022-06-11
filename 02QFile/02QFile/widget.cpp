#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QFile>
#include<QTextCodec>
#include<QFileInfo>
#include<QDateTime>
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //点击选取文件按钮，弹出文件对话框
    connect(ui->btnWenjian,&QPushButton::clicked,[=](){
       QString path= QFileDialog::getOpenFileName(this,"打开文件","E:\\QTCode\\02QFile");
       //将路径放入到lineEdit中
       ui->lineEdit->setText(path);

       //编码格式类
       QTextCodec * codec = QTextCodec::codecForName("gbk");

       //读取内容 ，放入到textEdit中
       QFile file(path);
       //设置打开方式
       file.open(QIODevice::ReadOnly);
       QByteArray array= file.readAll();
       //ui->textEdit->setText(array);
       ui->textEdit->setText(codec->toUnicode(array));

       //QFileInfo 文件信息类
       QFileInfo info(path);
       qDebug()<<"大小，"<<info.size()<<"后缀名："<<info.suffix()<<"文件名："<<info.fileName();
       qDebug()<<"创建日期，"<<info.created().toString("yyyy-MM-dd hh:mm:ss");
       qDebug()<<"最后修改日期，"<<info.lastModified().toString("yyyy-MM-dd hh:mm:ss");


    });
}

Widget::~Widget()
{
    delete ui;
}

