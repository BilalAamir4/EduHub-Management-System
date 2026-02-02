/********************************************************************************
** Form generated from reading UI file 'studentchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTCHOICE_H
#define UI_STUDENTCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentChoice
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *StudentChoice)
    {
        if (StudentChoice->objectName().isEmpty())
            StudentChoice->setObjectName("StudentChoice");
        StudentChoice->resize(1259, 720);
        StudentChoice->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255, 255);\n"
"\n"
""));
        pushButton_2 = new QPushButton(StudentChoice);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(530, 260, 171, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"gridline-color: rgb(255, 255, 240);\n"
"border-color: rgb(255, 255, 240);\n"
"background-color: rgb(255, 253, 237);\n"
"color: rgb(255,255, 255);\n"
""));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        pushButton = new QPushButton(StudentChoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 380, 161, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"gridline-color: rgb(255, 253, 237);\n"
"border-color: rgb(255, 253, 237);\n"
"background-color: rgb(255, 249, 235);\n"
"color: rgb(255,255, 255);\n"
""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        label = new QLabel(StudentChoice);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 0, 1280, 720));
        label->setStyleSheet(QString::fromUtf8("image: url(:/student_choice.png);"));
        label->raise();
        pushButton_2->raise();
        pushButton->raise();

        retranslateUi(StudentChoice);

        QMetaObject::connectSlotsByName(StudentChoice);
    } // setupUi

    void retranslateUi(QDialog *StudentChoice)
    {
        StudentChoice->setWindowTitle(QCoreApplication::translate("StudentChoice", "Dialog", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("StudentChoice", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentChoice: public Ui_StudentChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTCHOICE_H
