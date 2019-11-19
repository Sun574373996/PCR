#ifndef PNumKb_H
#define PNumKb_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include "common.h"
#include "popups.h"
#include "button.h"
#include "label.h"
class PNumKb : public Popups
{
    Q_OBJECT
public:
    explicit PNumKb(QWidget *parent = 0);
    Label *name_edit;
    Button *rename_btn;
    Button *cancel_btn;
signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // PNumKb_H
