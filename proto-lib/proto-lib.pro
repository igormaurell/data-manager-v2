#-------------------------------------------------
#
# Project created by QtCreator 2014-07-08T22:48:07
#
#-------------------------------------------------

QT       -= gui

TARGET = proto
TEMPLATE = lib
CONFIG += staticlib console link_pkgconfig
PKGCONFIG += protobuf

SOURCES += \
    ai_variables.pb.cc \
    messages_robocup_ssl_wrapper.pb.cc \
    messages_robocup_ssl_referee.pb.cc \
    messages_robocup_ssl_refbox_log.pb.cc \
    messages_robocup_ssl_geometry.pb.cc \
    messages_robocup_ssl_detection.pb.cc \
    messages_ai_2Dsimulator.pb.cc \
    messages_ai_data_manager.pb.cc \
    messages_vision_manager.pb.cc \
    messages_data_manager.pb.cc \
    messages_control.pb.cc \
    grSim_Replacement.pb.cc \
    grSim_Packet.pb.cc \
    grSim_Commands.pb.cc

HEADERS +=\
    ProtoCPP_global.h \
    ai_variables.pb.h \
    messages_robocup_ssl_wrapper.pb.h \
    messages_robocup_ssl_referee.pb.h \
    messages_robocup_ssl_refbox_log.pb.h \
    messages_robocup_ssl_geometry.pb.h \
    messages_robocup_ssl_detection.pb.h \
    messages_ai_2Dsimulator.pb.h \
    messages_ai_data_manager.pb.h \
    messages_vision_manager.pb.h \
    messages_data_manager.pb.h \
    messages_control.pb.h \
    grSim_Replacement.pb.h \
    grSim_Packet.pb.h \
    grSim_Commands.pb.h
