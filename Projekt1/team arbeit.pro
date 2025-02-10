TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_LFLAGS += -static
SOURCES += \
        Statemachine.cpp \
        Vehicle.cpp \
        main.cpp

HEADERS += \
    Statemachine.h \
    Vehicle.h
