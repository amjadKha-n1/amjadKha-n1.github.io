QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20
CONFIG += sdk_no_version_check

# Include Eigen library
INCLUDEPATH += /usr/include/eigen3

# Set custom directories
OBJECTS_DIR = ../out
MOC_DIR = ../inc
RCC_DIR = ../inc
UI_DIR = ../inc
DESTDIR = .

# Uncomment to disable deprecated APIs before Qt 6.0.0
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    additivemathelements.cpp \
    illuminantplacechooser.cpp \
    main.cpp \
    mainwindow.cpp \
    movechooser.cpp \
    objectchanger.cpp \
    objecthangman.cpp \
    objects.cpp \
    placechooser.cpp \
    sizechooser.cpp \
    specialgraphicsview.cpp \
    usagefacade.cpp

HEADERS += \
    ../inc/additivemathelements.hpp \
    ../inc/config.hpp \
    ../inc/illuminantplacechooser.hpp \
    ../inc/mainwindow.h \
    ../inc/movechooser.hpp \
    ../inc/objectchanger.hpp \
    ../inc/objecthangman.hpp \
    ../inc/objects.hpp \
    ../inc/placechooser.h \
    ../inc/sizechooser.hpp \
    ../inc/specialgraphicsview.hpp \
    ../inc/usagefacade.hpp

FORMS += \
    illuminantplacechooser.ui \
    mainwindow.ui \
    movechooser.ui \
    objectchanger.ui \
    objecthangman.ui \
    placecarсhooser.ui \
    placehousechooser.ui \
    placeroadсhooser.ui \
    placetreechooser.ui \
    sizechooser.ui

# Default rules for deployment
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \

