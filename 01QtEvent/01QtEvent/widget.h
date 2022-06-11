#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    //重写定时器事件
    void timerEvent(QTimerEvent *event);
    ~Widget();

    int id1;//定时器1的唯一标识
    int id2;//定时器2的唯一标识

    //重新eventfilter事件
    bool eventFilter(QObject*,QEvent *);
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
