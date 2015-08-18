#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T12:58:06
#
#-------------------------------------------------

VERSION = 0.1.0
TARGET = yasem-kde-integration
TEMPLATE = lib

include($${top_srcdir}/common.pri)

QT       += core gui widgets

DEFINES += KDEINTEGRATION_LIBRARY

SOURCES += \
    kdeintegrationobject.cpp \
    kdeintegrationplugin.cpp

HEADERS +=\
    kdeintegrationplugin.h \
    kdeintegration_global.h \
    kdeintegrationobject.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

OTHER_FILES += \
    metadata.json

RESOURCES +=
