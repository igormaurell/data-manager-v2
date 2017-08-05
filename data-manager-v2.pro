#-------------------------------------------------
#
# Project created by QtCreator 2017-07-18T14:35:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = data-manager-v2
TEMPLATE = app

INCLUDEPATH += vision-manager \
               feedback-manager \
               entities \
               proto-lib
LIBS += -L/proto-lib -lproto

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
           mainwindow.cpp \
           entities/robot.cpp \
           entities/ball.cpp \
           feedback-manager/feedbackManager.cpp \
           vision-manager/visionManager.cpp \
           entities/teamRobot.cpp \
           entities/enemyRobot.cpp

HEADERS += mainwindow.h \
           entities/robot.h \
           entities/ball.h \
           feedback-manager/feedbackManager.h \
           vision-manager/visionManager.h \
           definitions.h \
           entities/teamRobot.h \
           entities/enemyRobot.h

LIBS += -lprotobuf `pkg-config --libs --cflags opencv`

FORMS    += mainwindow.ui
