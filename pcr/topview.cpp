#include "topview.h"

TopView::TopView(QWidget *parent)
    : QGraphicsView(parent)
{
}

TopView::~TopView()
{

}
void TopView::moveEvent(QMoveEvent *event)
{
    Q_UNUSED(event);
 //   qDebug()<<"move event";
}
