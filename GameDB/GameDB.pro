#-------------------------------------------------
#
# Project created by QtCreator 2015-05-05T14:41:00
#
#-------------------------------------------------

QT       += core gui \
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameDB
TEMPLATE = app


SOURCES += main.cpp \
           mainwindow.cpp \
    newgame.cpp \
    viewgames.cpp

HEADERS  += mainwindow.h \
    newgame.h \
    viewgames.h

FORMS    += mainwindow.ui \
    newgame.ui \
    viewgames.ui
