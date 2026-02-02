QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

include(QXlsx-master/QXlsx-master/QXlsx/QXlsx.pri)



SOURCES += \
    Person.cpp \
    Student.cpp \
    Teacher.cpp \
    academic_best_worst.cpp \
    criteria.cpp \
    finalstudentscreen.cpp \
    finalteacherscreen.cpp \
    selectteacherorstudent.cpp \
    main.cpp \
    student_info_choice.cpp \
    student_semester_view.cpp \
    studentchoice.cpp \
    studentloginn.cpp \
    studentregister.cpp \
    teacher_info_choice.cpp \
    teacher_semester_entry.cpp \
    teacher_semester_view.cpp \
    teacherchoice.cpp \
    teacherloginn.cpp \
    teacherregister.cpp

HEADERS += \
    Person.h \
    Student.h \
    Teacher.h \
    academic_best_worst.h \
    criteria.h \
    finalstudentscreen.h \
    finalteacherscreen.h \
    selectteacherorstudent.h \
    student_info_choice.h \
    student_semester_view.h \
    studentchoice.h \
    studentloginn.h \
    studentregister.h \
    teacher_info_choice.h \
    teacher_semester_entry.h \
    teacher_semester_view.h \
    teacherchoice.h \
    teacherloginn.h \
    teacherregister.h

FORMS +=\
    academic_best_worst.ui \
    criteria.ui \
    finalstudentscreen.ui \
    finalteacherscreen.ui \
    selectteacherorstudent.ui \
    student_info_choice.ui \
    student_semester_view.ui \
    studentchoice.ui \
    studentloginn.ui \
    studentregister.ui \
    teacher_info_choice.ui \
    teacher_semester_entry.ui \
    teacher_semester_view.ui \
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

RESOURCES += \
    img.qrc
