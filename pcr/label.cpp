#include "label.h"

Label::Label(QWidget *parent)
    :QLabel(parent)
{
    edit_mod=NO_EDIT;
}

void Label::mousePressEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev);
    qDebug()<<"rename press";
    emit send_edit_label(this,edit_mod);
}

