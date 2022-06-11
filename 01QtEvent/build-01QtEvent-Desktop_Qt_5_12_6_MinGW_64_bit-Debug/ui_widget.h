/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    myLabel *label;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QPushButton *btn1;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new myLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 20, 311, 91));
        label->setFrameShape(QFrame::Box);
        label2 = new QLabel(Widget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(190, 130, 271, 81));
        label2->setFrameShape(QFrame::Panel);
        label3 = new QLabel(Widget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(200, 240, 261, 91));
        label3->setFrameShape(QFrame::WinPanel);
        label4 = new QLabel(Widget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(210, 380, 251, 51));
        label4->setFrameShape(QFrame::Panel);
        label4->setFrameShadow(QFrame::Sunken);
        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(550, 390, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        label2->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        label3->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        label4->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        btn1->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
