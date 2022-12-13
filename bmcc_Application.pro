QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    computerscience.cpp \
    digitalmarketing.cpp \
    engineeringscience.cpp \
    geographicinformationscience.cpp \
    main.cpp \
    loginwindow.cpp \
    mathematics.cpp \
    psychology.cpp \
    science.cpp \
    selectmajor.cpp \
    selectprogram.cpp

HEADERS += \
    about.h \
    computerscience.h \
    digitalmarketing.h \
    engineeringscience.h \
    geographicinformationscience.h \
    loginwindow.h \
    mathematics.h \
    psychology.h \
    science.h \
    selectmajor.h \
    selectprogram.h

FORMS += \
    about.ui \
    computerscience.ui \
    digitalmarketing.ui \
    engineeringscience.ui \
    geographicinformationscience.ui \
    loginwindow.ui \
    mathematics.ui \
    psychology.ui \
    science.ui \
    selectmajor.ui \
    selectprogram.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    about_BMCC.qrc
