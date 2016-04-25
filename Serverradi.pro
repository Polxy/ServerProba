#-------------------------------------------------
#
# Project created by QtCreator 2016-04-25T15:28:55
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Serverradi
TEMPLATE = app


SOURCES += main.cpp \
    UDPServer.cpp

HEADERS  += \
    UDPServer.h

FORMS    += mainwindow.ui
