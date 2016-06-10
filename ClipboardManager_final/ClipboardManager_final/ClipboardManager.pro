#-------------------------------------------------
#
# Project created by QtCreator 2016-06-01T19:32:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ClipboardManager
TEMPLATE = app

CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    text.cpp \
    image.cpp

HEADERS  += mainwindow.h \
    text.h \
    image.h

FORMS    += mainwindow.ui

RESOURCES += \
    icon.qrc
