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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonCloud;
    QRadioButton *radioButtonPCV;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonMap;
    QRadioButton *radioButtonCar;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBoxCompanyGood;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(915, 601);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 79, 70));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonCloud = new QRadioButton(groupBox);
        radioButtonCloud->setObjectName(QString::fromUtf8("radioButtonCloud"));

        verticalLayout->addWidget(radioButtonCloud);

        radioButtonPCV = new QRadioButton(groupBox);
        radioButtonPCV->setObjectName(QString::fromUtf8("radioButtonPCV"));

        verticalLayout->addWidget(radioButtonPCV);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 60, 91, 70));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonMap = new QRadioButton(groupBox_2);
        radioButtonMap->setObjectName(QString::fromUtf8("radioButtonMap"));

        verticalLayout_2->addWidget(radioButtonMap);

        radioButtonCar = new QRadioButton(groupBox_2);
        radioButtonCar->setObjectName(QString::fromUtf8("radioButtonCar"));

        verticalLayout_2->addWidget(radioButtonCar);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 79, 114));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_3->addWidget(checkBox_3);

        checkBoxCompanyGood = new QCheckBox(groupBox_3);
        checkBoxCompanyGood->setObjectName(QString::fromUtf8("checkBoxCompanyGood"));
        checkBoxCompanyGood->setTristate(true);

        verticalLayout_3->addWidget(checkBoxCompanyGood);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(310, 80, 391, 341));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\226\271\345\220\221", nullptr));
        radioButtonCloud->setText(QApplication::translate("Widget", "\347\202\271\344\272\221", nullptr));
        radioButtonPCV->setText(QApplication::translate("Widget", "\347\237\242\351\207\217\345\214\226", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\344\270\232\345\212\241", nullptr));
        radioButtonMap->setText(QApplication::translate("Widget", "\345\234\260\345\233\276", nullptr));
        radioButtonCar->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\351\251\276\351\251\266", nullptr));
        groupBox_3->setTitle(QApplication::translate("Widget", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        checkBox->setText(QApplication::translate("Widget", "\347\273\231\347\232\204\345\244\232", nullptr));
        checkBox_2->setText(QApplication::translate("Widget", "\344\272\272\345\245\275", nullptr));
        checkBox_3->setText(QApplication::translate("Widget", "\347\203\255\346\203\205", nullptr));
        checkBoxCompanyGood->setText(QApplication::translate("Widget", "\345\205\254\345\217\270\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
