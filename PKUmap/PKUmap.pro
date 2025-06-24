QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    introduce.cpp \
    introduce_or_review.cpp \
    login_or_register.cpp \
    main.cpp \
    mainwindow.cpp \
    regist.cpp \
    review.cpp

HEADERS += \
    introduce.h \
    introduce_or_review.h \
    login_or_register.h \
    mainwindow.h \
    regist.h \
    review.h

FORMS += \
    introduce.ui \
    introduce_or_review.ui \
    login_or_register.ui \
    mainwindow.ui \
    regist.ui \
    review.ui

TRANSLATIONS += \
    PKUmap_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resources/PKU.png

RESOURCES += \
    resources.qrc
