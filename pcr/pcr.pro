#-------------------------------------------------
#
# Project created by QtCreator 2019-08-20T17:55:36
#
#-------------------------------------------------

QT       += core gui
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pcr
TEMPLATE = app


SOURCES += main.cpp \
    button.cpp \
    common.cpp \
    widget.cpp \
    topview.cpp \
    topsense.cpp \
    prenamefile.cpp \
    popups.cpp \
    page2.cpp \
    page1.cpp \
    label.cpp \
    key.cpp \
    pmovefile.cpp \
    pnumkb.cpp \
    pqwertkb.cpp \
    communicate.cpp

HEADERS  += \
    button.h \
    common.h \
    widget.h \
    topview.h \
    topsense.h \
    popups.h \
    pmovefile.h \
    page2.h \
    page1.h \
    label.h \
    prenamefile.h \
    key.h \
    pnumkb.h \
    pqwertkb.h \
    communicate.h

DISTFILES +=

RESOURCES += \
    picture.qrc

target.path=/home
INSTALLS += target
