/********************************************************************************
** Form generated from reading UI file 'student_info_choice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INFO_CHOICE_H
#define UI_STUDENT_INFO_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_student_info_choice
{
public:
    QPushButton *Academic_info;
    QPushButton *Personal_info;

    void setupUi(QDialog *student_info_choice)
    {
        if (student_info_choice->objectName().isEmpty())
            student_info_choice->setObjectName("student_info_choice");
        student_info_choice->resize(860, 599);
        Academic_info = new QPushButton(student_info_choice);
        Academic_info->setObjectName("Academic_info");
        Academic_info->setGeometry(QRect(500, 280, 241, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        Academic_info->setFont(font);
        Academic_info->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        Personal_info = new QPushButton(student_info_choice);
        Personal_info->setObjectName("Personal_info");
        Personal_info->setGeometry(QRect(150, 280, 241, 51));
        Personal_info->setFont(font);
        Personal_info->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));

        retranslateUi(student_info_choice);

        QMetaObject::connectSlotsByName(student_info_choice);
    } // setupUi

    void retranslateUi(QDialog *student_info_choice)
    {
        student_info_choice->setWindowTitle(QCoreApplication::translate("student_info_choice", "Dialog", nullptr));
        Academic_info->setText(QCoreApplication::translate("student_info_choice", "Academic Info", nullptr));
        Personal_info->setText(QCoreApplication::translate("student_info_choice", "Personal Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_info_choice: public Ui_student_info_choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFO_CHOICE_H
