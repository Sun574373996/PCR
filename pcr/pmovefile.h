#ifndef PMoveFile_H
#define PMoveFile_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include "common.h"
#include "popups.h"
#include "button.h"
class PMoveFile : public Popups
{
    Q_OBJECT
public:
    explicit PMoveFile(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // PMoveFile_H
