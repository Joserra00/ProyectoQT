######################################################################
# Automatically generated by qmake (3.1) Sun Feb 12 20:49:36 2023
######################################################################

TEMPLATE = app
TARGET = ProyectoQT
INCLUDEPATH += .

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += database.h \
           dlogin.h \
           jsonbuilder.h \
           mainwindow.h \
           controller/articulocontroller.h \
           controller/categoriacontroller.h \
           controller/mensajecontroller.h \
           controller/valoracioncontroller.h \
           dialogos/dcategoria.h \
           model/articulo.h \
           model/categoria.h \
           model/globalvariable.h \
           model/mensaje.h \
           model/valoracion.h \
           modelotabla/modelotablaarticulo.h \
           modelotabla/modelotablacategoria.h \
           modelotabla/modelotablamensaje.h \
           modelotabla/modelotablavaloracion.h
FORMS += dlogin.ui mainwindow.ui dialogos/dcategoria.ui
SOURCES += database.cpp \
           dlogin.cpp \
           jsonbuilder.cpp \
           main.cpp \
           mainwindow.cpp \
           controller/articulocontroller.cpp \
           controller/categoriacontroller.cpp \
           controller/mensajecontroller.cpp \
           controller/valoracioncontroller.cpp \
           dialogos/dcategoria.cpp \
           model/articulo.cpp \
           model/categoria.cpp \
           model/mensaje.cpp \
           model/valoracion.cpp \
           modelotabla/modelotablaarticulo.cpp \
           modelotabla/modelotablacategoria.cpp \
           modelotabla/modelotablamensaje.cpp \
           modelotabla/modelotablavaloracion.cpp
QT += widgets sql core
LIBS += -lpq 
QT += network
