/********************************************************************************
** Form generated from reading UI file 'teacherchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERCHOICE_H
#define UI_TEACHERCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeacherChoice
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *TeacherChoice)
    {
        if (TeacherChoice->objectName().isEmpty())
            TeacherChoice->setObjectName("TeacherChoice");
        TeacherChoice->resize(1250, 710);
        TeacherChoice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(TeacherChoice);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(690, 370, 131, 21));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(21, 44, 57);\n"
"gridline-color: rgb(252, 249, 239);\n"
"border-color: rgb(254, 250, 242);"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        pushButton = new QPushButton(TeacherChoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 370, 131, 21));
        pushButton->setFont(font);
        pushButton->setMouseTracking(false);
        pushButton->setTabletTracking(false);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 229, 205);\n"
"\n"
"gridline-color: rgb(98, 148, 183);\n"
"border-color: rgb(69, 123, 166);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        label = new QLabel(TeacherChoice);
        label->setObjectName("label");
        label->setGeometry(QRect(-320, -10, 1881, 720));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("image: url(:/teacher_choice.png);"));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(TeacherChoice);

        pushButton_2->setDefault(false);
        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(TeacherChoice);
    } // setupUi

    void retranslateUi(QDialog *TeacherChoice)
    {
        TeacherChoice->setWindowTitle(QCoreApplication::translate("TeacherChoice", "Dialog", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("TeacherChoice", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherChoice: public Ui_TeacherChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERCHOICE_H
