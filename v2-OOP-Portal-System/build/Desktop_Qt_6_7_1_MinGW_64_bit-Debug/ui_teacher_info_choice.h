/********************************************************************************
** Form generated from reading UI file 'teacher_info_choice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_INFO_CHOICE_H
#define UI_TEACHER_INFO_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teacher_info_choice
{
public:
    QPushButton *Personal_info;
    QPushButton *Academic_info;

    void setupUi(QDialog *teacher_info_choice)
    {
        if (teacher_info_choice->objectName().isEmpty())
            teacher_info_choice->setObjectName("teacher_info_choice");
        teacher_info_choice->resize(889, 625);
        Personal_info = new QPushButton(teacher_info_choice);
        Personal_info->setObjectName("Personal_info");
        Personal_info->setGeometry(QRect(130, 250, 241, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        Personal_info->setFont(font);
        Personal_info->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        Academic_info = new QPushButton(teacher_info_choice);
        Academic_info->setObjectName("Academic_info");
        Academic_info->setGeometry(QRect(480, 250, 241, 51));
        Academic_info->setFont(font);
        Academic_info->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));

        retranslateUi(teacher_info_choice);

        QMetaObject::connectSlotsByName(teacher_info_choice);
    } // setupUi

    void retranslateUi(QDialog *teacher_info_choice)
    {
        teacher_info_choice->setWindowTitle(QCoreApplication::translate("teacher_info_choice", "Dialog", nullptr));
        Personal_info->setText(QCoreApplication::translate("teacher_info_choice", "Personal Info", nullptr));
        Academic_info->setText(QCoreApplication::translate("teacher_info_choice", "Academic Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacher_info_choice: public Ui_teacher_info_choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_INFO_CHOICE_H
