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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <smallwidget.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    SmallWidget *widget;
    QPushButton *BtnGetValue;
    QPushButton *BtnSetHalf;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new SmallWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 160, 451, 51));
        BtnGetValue = new QPushButton(Widget);
        BtnGetValue->setObjectName(QString::fromUtf8("BtnGetValue"));
        BtnGetValue->setGeometry(QRect(290, 280, 75, 23));
        BtnSetHalf = new QPushButton(Widget);
        BtnSetHalf->setObjectName(QString::fromUtf8("BtnSetHalf"));
        BtnSetHalf->setGeometry(QRect(290, 320, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        BtnGetValue->setText(QApplication::translate("Widget", "GetValue", nullptr));
        BtnSetHalf->setText(QApplication::translate("Widget", "SetHalf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
