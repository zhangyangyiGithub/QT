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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *page_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QWidget *page_7;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_4;
    QWidget *page_3;
    QPushButton *pushButton_14;
    QPushButton *btn_tabWidget;
    QPushButton *btnTool;
    QPushButton *btnWeb;
    QComboBox *comboBox;
    QPushButton *btnSeletQueren;
    QLabel *labelImage;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(100, 40, 281, 141));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        tabWidget = new QTabWidget(page_5);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 50, 451, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        scrollArea = new QScrollArea(page_6);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(100, 50, 95, 288));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 93, 389));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_13 = new QPushButton(scrollAreaWidgetContents);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(scrollAreaWidgetContents);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        toolBox = new QToolBox(page_7);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(220, 150, 121, 251));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 121, 147));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 121, 147));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        toolBox->addItem(page_4, QString::fromUtf8("\351\241\265"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pushButton_14 = new QPushButton(page_3);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 30, 75, 23));
        toolBox->addItem(page_3, QString::fromUtf8("\351\241\265"));
        stackedWidget->addWidget(page_7);
        btn_tabWidget = new QPushButton(Widget);
        btn_tabWidget->setObjectName(QString::fromUtf8("btn_tabWidget"));
        btn_tabWidget->setGeometry(QRect(510, 40, 75, 23));
        btnTool = new QPushButton(Widget);
        btnTool->setObjectName(QString::fromUtf8("btnTool"));
        btnTool->setGeometry(QRect(500, 90, 75, 23));
        btnWeb = new QPushButton(Widget);
        btnWeb->setObjectName(QString::fromUtf8("btnWeb"));
        btnWeb->setGeometry(QRect(500, 150, 75, 23));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 330, 69, 22));
        btnSeletQueren = new QPushButton(Widget);
        btnSeletQueren->setObjectName(QString::fromUtf8("btnSeletQueren"));
        btnSeletQueren->setGeometry(QRect(150, 400, 75, 23));
        labelImage = new QLabel(Widget);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setGeometry(QRect(430, 350, 91, 51));

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "baidu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "\351\241\265", nullptr));
        pushButton->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_10->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_13->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_12->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_11->setText(QApplication::translate("Widget", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("Widget", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("Widget", "Page 2", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("Widget", "\351\241\265", nullptr));
        pushButton_14->setText(QApplication::translate("Widget", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Widget", "\351\241\265", nullptr));
        btn_tabWidget->setText(QApplication::translate("Widget", "tab", nullptr));
        btnTool->setText(QApplication::translate("Widget", "tool", nullptr));
        btnWeb->setText(QApplication::translate("Widget", "web", nullptr));
        btnSeletQueren->setText(QApplication::translate("Widget", "\351\200\211\347\241\256\350\256\244", nullptr));
        labelImage->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
