#ifndef WIDGET1_H
#define WIDGET1_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include "button.h"
#include "widget.h"
#include "common.h"
class Page1 : public Widget
{
    Q_OBJECT
public:
    explicit Page1(QWidget *parent = 0);
    Button *btn_new;
    Button *btn_manage;
    Button *btn_set;

signals:

public slots:
    void jump_page2(void);
protected:
    void paintEvent(QPaintEvent *event);
};


#endif // WIDGET1_H
