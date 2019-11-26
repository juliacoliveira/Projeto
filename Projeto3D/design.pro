#-------------------------------------------------
#
# Project created by QtCreator 2019-11-18T23:04:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = design
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
        mainwindow.cpp \
        sculptor.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    sculptor.h \
    voxel.h

FORMS    += mainwindow.ui \
    dialog.ui

