#-------------------------------------------------
#
# Project created by QtCreator 2017-03-28T11:01:52
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    window.cpp \
    about.cpp \
    recipte.cpp \
    addrecipe.cpp \
    mainform.cpp
    addrecipe.cpp

HEADERS  += mainwindow.h \
    window.h \
    about.h \
    recipte.h \
    addrecipe.h \
    mainform.h
    addrecipe.h

FORMS    += mainwindow.ui \
    window.ui \
    about.ui \
    addrecipe.ui \
    mainform.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resource.qrc

DISTFILES += \
    icon.rc

win32:RC_FILE = icon.rc

