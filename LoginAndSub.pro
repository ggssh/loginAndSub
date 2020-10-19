QT       += core gui network mqtt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mqttAction.cpp \
    mqttwindow.cpp \
    msgProcess.cpp \
    myregister.cpp \
    operations.cpp \
    regsuccess.cpp

HEADERS += \
    mainwindow.h \
    mqttAction.h \
    mqttwindow.h \
    msgProcess.h \
    myregister.h \
    operations.h \
    regsuccess.h

FORMS += \
    mainwindow.ui \
    mqttwindow.ui \
    myregister.ui \
    regsuccess.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/ -lQt5Mqtt
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/ -lQt5Mqttd
else:unix: LIBS += -L$$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/ -lQt5Mqtt

INCLUDEPATH += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/include
DEPENDPATH += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/libQt5Mqtt.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/libQt5Mqttd.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/Qt5Mqtt.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/Qt5Mqttd.lib
else:unix: PRE_TARGETDEPS += $$PWD/../_mqtt/build-qtmqtt-Desktop_Qt_5_14_2_MSVC2017_64bit-Release/lib/libQt5Mqtt.a
