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
SOURCES += ../VueMeteoTesteur/VueMeteo.cpp.cc ClientMeteo.cpp Superviseur.cpp VuePrincipale.cpp.cc main.cpp vueSerre.cpp
HEADERS += ../VueMeteoTesteur/VueMeteo.h ClientMeteo.h Superviseur.h VuePrincipale.h vueSerre.h
FORMS += ../VueMeteoTesteur/VueMeteo.ui VuePrincipale.ui
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
