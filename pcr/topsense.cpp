#include "topsense.h"
#include <QDebug>
TopSense::TopSense(QObject *parent)
    :QGraphicsScene(parent)
{
    page1=new Page1;
    page2=new Page2;
    connect(page1,SIGNAL(page_jump(int,int,int)),this,SLOT(change_page(int,int,int)));
    connect(page2,SIGNAL(page_jump(int,int,int)),this,SLOT(change_page(int,int,int)));
    pages.append(this->addWidget(page1));
    pages.append(this->addWidget(page2));
    for(int i;i<pages.size();i++)
    {
        pages.at(i)->setRotation(90);
    }
    pages[0]->setVisible(true);
    pages[1]->setVisible(false);
    cur_page=1;

}
TopSense::~TopSense()
{

}
void TopSense::change_page(int mod,int cur,int dst)
{
    qDebug()<<"change_page";

    if(NEXT_PAGE==mod)
    {
        pages[cur_page-1]->setVisible(false);
        pages[dst-1]->setVisible(true);
        pre_page=cur_page;
        cur_page=dst;
    }
    else if(PRE_PAGE==mod)
    {
        pages[cur-1]->setVisible(false);
        pages[pre_page-1]->setVisible(true);
        cur_page=pre_page;
        pre_page=cur;
    }
    else{}
}
