#include "pmovefile.h"

PMoveFile::PMoveFile(QWidget *parent) : Popups(parent)
{


}
void PMoveFile::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    qDebug()<<"painter PMoveFile";
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap(":/image/background/copy_page.jpg"),QRect());
}

