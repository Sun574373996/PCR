#ifndef PRenameFile_H
#define PRenameFile_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include "common.h"
#include "popups.h"
#include "button.h"
#include "label.h"
class PRenameFile : public Popups
{
    Q_OBJECT
public:
    explicit PRenameFile(QWidget *parent = 0);
    Label *name_edit;
    Button *rename_btn;
    Button *cancel_btn;
signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // PMoveFile_H
