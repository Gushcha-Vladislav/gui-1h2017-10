#-------------------------------------------------
#
# Project created by QtCreator 2017-03-28T11:01:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    window.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    window.h \
    about.h

FORMS    += mainwindow.ui \
    window.ui \
    about.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resource.qrc

DISTFILES +=

