#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //TableWidget控件
    //设置列数
    ui->tableWidget->setColumnCount(3);

    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"序列号"<<"状态"<<"场景");

    //设置行数
    ui->tableWidget->setRowCount(5);

    //设置正文
    QStringList zhuangtai;
    zhuangtai <<"低"<<"中"<<"低"<<"中"<<"高";

    QStringList changjing;
    changjing <<"作业"<<"入库"<<"低上传"<<"中删除"<<"作业";

    for (int i=0;i<5;i++) {
        int col =0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(zhuangtai.at(i)));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(changjing.at(i)));

    }


}

Widget::~Widget()
{
    delete ui;
}

