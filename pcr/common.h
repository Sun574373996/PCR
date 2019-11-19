#ifndef COMMON_H
#define COMMON_H

#include <QDebug>
#include <QList>
#include <QFont>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QByteArray>
#include "communicate.h"

#define NEXT_PAGE   0
#define PRE_PAGE    1

#define CHECK_BTN   0
#define CLICK_BTN   1
#define TOGGLE_BTN  2

#define BTN_RELEASE_STAT     0
#define BTN_PRESS_STAT       1

#define NO_EDIT     0
#define NUM_EDIT    1
#define QWERT_EDIT  2


extern int top_view_x;
extern int top_view_y;



extern PortCtrl *ctrl_com;



#endif // COMMON_H
