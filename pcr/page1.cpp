#include "page1.h"

Page1::Page1(QWidget *parent) : Widget(parent)
{
    btn_new=new Button;
    btn_new->setParent(this);
    btn_new->setGeometry(257,462,253,94);
    btn_new->set_press_color(QColor(0,0,0,20),CLICK_BTN);
    btn_new->setStyleSheet("background-color:transparent;color:white");
    btn_manage=new Button;
    btn_manage->setText(QString(tr("     文件管理")));
    btn_manage->setParent(this);
    btn_manage->setGeometry(512,462,256,94);
    btn_manage->set_press_color(QColor(0,0,0,20),CLICK_BTN);
    btn_manage->setStyleSheet("background-color:transparent;color:white");
    connect(btn_new,SIGNAL(clicked()),this,SLOT(jump_page2()));
    connect(btn_manage,SIGNAL(clicked()),this,SLOT(jump_page2()));
    this->resize(1024,600);
    QPixmap pixmap = QPixmap(":/image/background/main_page.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
}
void Page1::paintEvent(QPaintEvent *event)
{
  //  QWidget::paintEvent(event);
}

void Page1::jump_page2(void)
{
    qDebug()<<"jump_page2";
    emit page_jump(NEXT_PAGE,1,2);
}
