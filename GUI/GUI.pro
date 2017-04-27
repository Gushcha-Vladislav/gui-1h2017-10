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
<<<<<<< HEAD
    recipte.cpp
=======
    addrecipe.cpp
>>>>>>> origin/master

HEADERS  += mainwindow.h \
    window.h \
    about.h \
<<<<<<< HEAD
    recipte.h
=======
    addrecipe.h
>>>>>>> origin/master

FORMS    += mainwindow.ui \
    window.ui \
    about.ui \
    addrecipe.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    resource.qrc

DISTFILES +=

