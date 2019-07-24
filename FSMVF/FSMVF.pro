#-------------------------------------------------
#
# Project created by QtCreator 2018-03-31T23:19:17
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FSMVF
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

INCLUDEPATH += C:\opencv\build\include

LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_calib3d340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_core340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_dnn340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_features2d340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_flann340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_highgui340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_imgcodecs340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_imgproc340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_ml340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_objdetect340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_photo340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_shape340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_stitching340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_superres340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_video340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_videoio340.dll
LIBS += C:\opencv\build\install\x86\mingw\bin\libopencv_videostab340.dll
