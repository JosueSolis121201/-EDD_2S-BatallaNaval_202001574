QT += core
QT -= gui

CONFIG += c++11

TARGET = BatallaNaval
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    listacirculardoble.cpp \
    nodo.cpp

HEADERS += \
    listacirculardoble.h \
    nodo.h
