#ifndef LABEL_H
#define LABEL_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include "common.h"

class Label : public QLabel
{
    Q_OBJECT
public:
    Label(QWidget *parent = 0);
    int max_val;
    int min_val;
    int edit_mod;

protected:
    void mousePressEvent(QMouseEvent *ev);
private:

signals:
    void send_edit_label(Label *label,int type);
};

#endif // LABEL_H
