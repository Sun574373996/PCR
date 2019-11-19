#include "topview.h"
#include "topsense.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TopSense sense;
    TopView view;
    view.setScene(&sense);
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.resize(600,1024);
    view.show();
    top_view_x=view.x();
    top_view_y=view.y();
    ctrl_com=new PortCtrl;
    return a.exec();
}
