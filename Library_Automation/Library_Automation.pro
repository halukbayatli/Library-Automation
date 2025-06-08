QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    book.cpp \
    borrow.cpp \
    deliver.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    tum_2330.cpp

HEADERS += \
    book.h \
    borrow.h \
    deliver.h \
    mainwindow.h \
    member.h

FORMS += \
    book.ui \
    borrow.ui \
    deliver.ui \
    mainwindow.ui \
    member.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Icons.qrc
