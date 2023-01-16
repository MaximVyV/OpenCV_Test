#-------------------------------------------------
#
# Project created by QtCreator 2019-03-11T18:40:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCV_Test
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

CONFIG += c++11

SOURCES += \
        Form_VideoFrame.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        Form_VideoFrame.h \
        mainwindow.h

FORMS += \
        Form_VideoFrame.ui \
        mainwindow.ui

#INCLUDEPATH += C:/OpenCV/Build/install/include
#INCLUDEPATH += $$(OPENCV_SDK_DIR)/install/include

#LIBS += -L$$(OPENCV_SDK_DIR)/bin -llibopencv_core401 \
#                                 -llibopencv_highgui401 \
#                                 -llibopencv_imgproc401 \
#                                 -llibopencv_features2d401 \
#                                 -llibopencv_calib3d401 \
##                                 -llibopencv_video401 \
#                                 -llibopencv_videoio401 \
#                                 -llibopencv_imgcodecs401 \

INCLUDEPATH += C:/OpenCV/Build/install/include
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_core440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_highgui440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_imgproc440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_features2d440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_calib3d440
#LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_video440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_videoio440
LIBS += -L"C:/OpenCV/Build/bin" -llibopencv_imgcodecs440

#INCLUDEPATH += C:/OpenCV/opencv/build/include
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_core401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_highgui401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_imgproc401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_features2d401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_calib3d401
##LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_video401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_videoio401
#LIBS += -L"C:/OpenCV/opencv/build/bin" -llibopencv_imgcodecs401


#LIBS += -LD:\\OpenCV\\opencv\\build\\install\\x86\\mingw\\lib\\
#LIBS += -LC:/OpenCV/opencv/build/lib    \
#        -libopencv_core401              \
#        -libopencv_imgcodecs401         \
#        -libopencv_highgui401           \
#        -libopencv_imgproc401           \
#        -libopencv_features2d401        \
#        -libopencv_calib3d401           \
#        -libopencv_videoio401

#LIBS += C:\OpenCV\opencv\build\bin\libopencv_core401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_highgui401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_imgcodecs401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_imgproc401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_features2d401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_calib3d401.dll
#LIBS += C:\OpenCV\opencv\build\bin\libopencv_videoio401.dll

#INCLUDEPATH += "D:/OpenCV/opencv/build/include"

#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_core401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_highgui401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_imgcodecs401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_imgproc401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_features2d401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_calib3d401"
#LIBS += -L"C://OpenCV//opencv//build//bin//libopencv_videoio401"

win32:LIBS += -lIphlpapi

# more correct variant, how set includepath and libs for mingw
# add system variable: OPENCV_SDK_DIR=D:/opencv/build
# read http://doc.qt.io/qt-5/qmake-variable-reference.html#libs

#INCLUDEPATH += $$(OPENCV_SDK_DIR)/include

#LIBS += -L$$(OPENCV_SDK_DIR)/x86/mingw/lib \
#        -lopencv_core320        \
#        -lopencv_highgui320     \
#        -lopencv_imgcodecs320   \
#        -lopencv_imgproc320     \
#        -lopencv_features2d320  \
#        -lopencv_calib3d320

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
