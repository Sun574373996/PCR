#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QButtonGroup>
#include "common.h"
#include "widget.h"
#include "button.h"
#include "pmovefile.h"
#include "prenamefile.h"
class Page2 : public Widget
{
    Q_OBJECT
public:
    explicit Page2(QWidget *parent = 0);
    Button *back_btn;
    Button *rename_btn;
    Button *copy_btn;
    QList<Button*> dir_btn_l;
    QButtonGroup *dir_btn_g;
    QList<QLabel*> dir_ico_l;
    QList<QLabel*> dir_name_l;
    QList<Button*> file_btn_l;
    int dir_num;
    int file_num;
    int dir_page_id;
    int file_page_id;
    int dir_id;
    int file_id;
    PMoveFile *pmovefile;
    PRenameFile *prenamefile;
signals:

public slots:
    void jump_page1(void);
    void dir_btn_change(int id);
    void copy_file(void);
    void move_file(void);
    void rename_file_open(void);
    void rename_file_confirm(void);
    void rename_file_cancel(void);


protected:
    void paintEvent(QPaintEvent *event);
};

#endif // WIDGET2_H
