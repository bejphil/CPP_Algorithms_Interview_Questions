TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

QMAKE_CXXFLAGS += -fopenmp
QMAKE_LFLAGS +=  -fopenmp

HEADERS += \
    run_time_pi.h \
    meta_pi.h \
    test_run_time_pi.h \
    test_meta_pi.h
