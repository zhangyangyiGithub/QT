#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(2);
    //栈控件进行修改
    connect(ui->btnWeb,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });
    connect(ui->btnTool,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btn_tabWidget,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //下拉框

    ui->comboBox->addItem("未确认");
    ui->comboBox->addItem("确认");
    ui->comboBox->addItem("新增");

    connect(ui->btnSeletQueren,&QPushButton::clicked,[=](){
        //ui->comboBox->setCurrentIndex(1);
        ui->comboBox->setCurrentText("新增");
    });

    //利用Qlable显示图片
    ui->labelImage->setPixmap(QPixmap(":/Image/screenshot-20220609-172643.png"));
}

Widget::~Widget()
{
    delete ui;
}

