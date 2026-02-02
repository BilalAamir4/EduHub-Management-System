QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Include Qt Xlsx library
include(C:/Users/death/Desktop/QXlsx-master/QXlsx-master/QXlsx/QXlsx.pri)



SOURCES += \
    criteria.cpp \
    finalstudentscreen.cpp \
    finalteacherscreen.cpp \
    selectteacherorstudent.cpp \
    main.cpp \
    studentchoice.cpp \
    studentloginn.cpp \
    studentregister.cpp \
    teacherchoice.cpp \
    teacherloginn.cpp \
    teacherregister.cpp

HEADERS += \
    criteria.h \
    finalstudentscreen.h \
    finalteacherscreen.h \
    selectteacherorstudent.h \
    studentchoice.h \
    studentloginn.h \
    studentregister.h \
    teacherchoice.h \
    teacherloginn.h \
    teacherregister.h

FORMS +=\
    criteria.ui \
    finalstudentscreen.ui \
    finalteacherscreen.ui \
    selectteacherorstudent.ui \
    studentchoice.ui \
    studentloginn.ui \
    studentregister.ui \
    teacherchoice.ui \
    teacherloginn.ui \
    teacherregister.ui

TRANSLATIONS += \
    untitled_en_GB.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
