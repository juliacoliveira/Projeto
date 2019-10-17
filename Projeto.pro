TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    box.cpp \
    ellipsoid.cpp \
        main.cpp \
        sculptor.cpp \
    figurageometrica.cpp \
    sphere.cpp

HEADERS += \
    box.h \
    ellipsoid.h \
    sculptor.h \
    voxel.h \
    figurageometrica.h \
    sphere.h
