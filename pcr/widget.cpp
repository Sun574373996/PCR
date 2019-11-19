#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{

}
void Widget::enable_all_activex(QObject *parent_object)
{
    QList<QWidget *> child_widget = parent_object->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly);
    for (int i=0;i<child_widget.size();i++)
    {
        child_widget.at(i)->setEnabled(true);
    }
}
void Widget::disable_all_activex(QObject *parent_object)
{
    QList<QWidget *> child_widget = parent_object->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly);
    for (int i=0;i<child_widget.size();i++)
    {
        child_widget.at(i)->setEnabled(false);
    }
}
void Widget::open_keyboard(Label *label,int type)
{
    qDebug()<< "keyboard type" << type;
    edit_label=label;
    keyboard_type=type;
    if(keyboard_type==NUM_EDIT)
    {

    }
    else if(keyboard_type==QWERT_EDIT)
    {

        qwert_kb=new PQwertKb();
        qwert_kb->setParent(this);
      //  connect(prenamefile->rename_btn,SIGNAL(clicked()),this,SLOT(rename_file_confirm()));
      //  connect(prenamefile->cancel_btn,SIGNAL(clicked()),this,SLOT(rename_file_cancel()));
      //  connect(prenamefile->name_edit,SIGNAL(send_edit_label(QWidget*,int)),this,SLOT(open_keyboard(QWidget*,int)));
        qwert_kb->show();
        qwert_kb->dis_line->setEnabled(true);
        qwert_kb->dis_line->setFocus();
        connect(qwert_kb,SIGNAL(finish_input(QString)),this,SLOT(close_keyboard(QString)));
    }
    else{}
}
void Widget::close_keyboard(QString str)
{
    if(keyboard_type==NUM_EDIT)
    {

    }
    else if(keyboard_type==QWERT_EDIT)
    {
        qDebug() << str;
        qwert_kb->deleteLater();
    }
    else{}
}
