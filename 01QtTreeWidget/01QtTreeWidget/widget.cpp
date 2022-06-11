#include "widget.h"
#include "ui_widget.h"
#include <QTreeWidgetItem>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置水平的头
    ui->treeWidget->setHeaderLabels(QStringList()<<"业务"<<"业务介绍");


    QTreeWidgetItem * moneyItem = new QTreeWidgetItem(QStringList()<<"Money");
     QTreeWidgetItem * menItem = new QTreeWidgetItem(QStringList()<<"Men");
      QTreeWidgetItem * fenwuItem = new QTreeWidgetItem(QStringList()<<"fenwen");

       ui->treeWidget->addTopLevelItem(moneyItem);
        ui->treeWidget->addTopLevelItem(menItem);
         ui->treeWidget->addTopLevelItem(fenwuItem);

         //添加子节点
         QTreeWidgetItem * moneyChildren = new QTreeWidgetItem(QStringList()<<"Moneychildren"<<"to do some to my son");
         moneyItem->addChild(moneyChildren);

}

Widget::~Widget()
{
    delete ui;
}

