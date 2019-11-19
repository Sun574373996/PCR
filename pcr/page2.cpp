#include "page2.h"

Page2::Page2(QWidget *parent) : Widget(parent)
{
    back_btn=new Button;
    back_btn->setParent(this);
    back_btn->setGeometry(44,6,50,50);
    back_btn->setStyleSheet("background-color:transparent");
    back_btn->set_press_color(QColor(0,0,0,20),CLICK_BTN);
    connect(back_btn,SIGNAL(clicked()),this,SLOT(jump_page1()));
    rename_btn=new Button;
    rename_btn->setParent(this);
    rename_btn->setGeometry(345,522,170,78);
    rename_btn->setStyleSheet("background-color:transparent");
    rename_btn->set_press_color(QColor(0,0,0,20),CLICK_BTN);
    connect(rename_btn,SIGNAL(clicked()),this,SLOT(rename_file_open()));
    copy_btn=new Button;
    copy_btn->setParent(this);
    copy_btn->setGeometry(691,522,173,78);
    copy_btn->setStyleSheet("background-color:transparent");
    copy_btn->set_press_color(QColor(0,0,0,20),CLICK_BTN);
    connect(copy_btn,SIGNAL(clicked()),this,SLOT(copy_file()));
    dir_num=6;
    dir_btn_g=new QButtonGroup;
    for(int i=0;i<dir_num;i++)
    {
        Button *btn=new Button;
        btn->setParent(this);
        btn->setGeometry(107,179+46*i,251,42);
        btn->setStyleSheet("background-color:transparent;");
        btn->set_press_color(QColor(0,155,255,255),CHECK_BTN);
        dir_btn_l.append(btn);
        dir_btn_g->addButton(btn,i);
        QLabel *name_label=new QLabel("hello world");
        name_label->setParent(btn);
        name_label->setGeometry(50,2,205,36);
        name_label->setStyleSheet("background-color:transparent;color:white;");
        dir_name_l.append(name_label);
        QLabel *ico_label =new QLabel;
        ico_label->setParent(btn);
        ico_label->setGeometry(10,2,36,36);
        ico_label->setPixmap(QPixmap(":/image/btn/dir_ico.png"));
        dir_ico_l.append(ico_label);
    }
    dir_id=0;
    connect(dir_btn_g,SIGNAL(buttonPressed(int)),this,SLOT(dir_btn_change(int)));
    this->resize(1024,600);
    QPixmap pixmap = QPixmap(":/image/background/file_manage.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);

}
void Page2::paintEvent(QPaintEvent *event)
{
  //  QWidget::paintEvent(event);
}
void Page2::jump_page1(void)
{
    qDebug()<<"jump_page1";
    emit page_jump(NEXT_PAGE,2,1);
}
void Page2::dir_btn_change(int id)
{
    qDebug()<<"dir_btn_change"<<id;
    if(id!=dir_id)
    {
        dir_btn_l[dir_id]->set_state(BTN_RELEASE_STAT);
        dir_btn_l[dir_id]->update();
        dir_id=id;
    }
}
void Page2::copy_file(void)
{
    qDebug()<<"jump to copy file";
    pmovefile=new PMoveFile(this);
    pmovefile->setGeometry(300,100,400,400);
    this->setEnabled(false);
    pmovefile->show();
}
void Page2::move_file(void)
{

}
void Page2::rename_file_open(void)
{
    qDebug()<<"jump to copy file";

    this->disable_all_activex(this);
    prenamefile=new PRenameFile();
    prenamefile->setParent(this);
    connect(prenamefile->rename_btn,SIGNAL(clicked()),this,SLOT(rename_file_confirm()));
    connect(prenamefile->cancel_btn,SIGNAL(clicked()),this,SLOT(rename_file_cancel()));
    connect(prenamefile->name_edit,SIGNAL(send_edit_label(Label*,int)),this,SLOT(open_keyboard(Label*,int)));
    prenamefile->show();
}
void Page2::rename_file_confirm(void)
{
    qDebug()<<"rename_file_confirm";
}
void Page2::rename_file_cancel(void)
{
    qDebug()<<"rename_file_cancel";
    prenamefile->deleteLater();
    this->enable_all_activex(this);
}
