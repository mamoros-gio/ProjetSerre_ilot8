# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = VuePrincipaleTesteur
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ClientMeteo.cpp Superviseur.cpp VuePrincipale.cpp.cc main.cpp ../VueMeteoTesteur/VueMeteo.cpp.cc VuePrincipale.cpp.cc main.cpp
HEADERS += ClientMeteo.h Superviseur.h VuePrincipale.h ../VueMeteoTesteur/VueMeteo.h VuePrincipale.h
FORMS += VuePrincipale.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
