QT       += core gui
QT       += sql
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clickablepathitem.cpp \
    clickablerectitem.cpp \
    detail_or_review.cpp \
    detailwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    review.cpp \
    signup.cpp

HEADERS += \
    GlobalData.h \
    clickablepathitem.h \
    clickablerectitem.h \
    detail_or_review.h \
    detailwindow.h \
    mainwindow.h \
    map.h \
    review.h \
    signup.h

FORMS += \
    detail_or_review.ui \
    mainwindow.ui \
    map.ui \
    review.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
