/********************************************************************************
** Form generated from reading UI file 'teacherregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERREGISTER_H
#define UI_TEACHERREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeacherRegister
{
public:
    QLineEdit *teacherpass;
    QLineEdit *teacheruser;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *Createteacheracc;

    void setupUi(QDialog *TeacherRegister)
    {
        if (TeacherRegister->objectName().isEmpty())
            TeacherRegister->setObjectName("TeacherRegister");
        TeacherRegister->resize(781, 498);
        TeacherRegister->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255, 255);\n"
""));
        teacherpass = new QLineEdit(TeacherRegister);
        teacherpass->setObjectName("teacherpass");
        teacherpass->setGeometry(QRect(180, 280, 281, 61));
        teacherpass->setEchoMode(QLineEdit::Password);
        teacheruser = new QLineEdit(TeacherRegister);
        teacheruser->setObjectName("teacheruser");
        teacheruser->setGeometry(QRect(180, 180, 281, 61));
        label_3 = new QLabel(TeacherRegister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 40, 341, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(TeacherRegister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 280, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(TeacherRegister);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 180, 141, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_4->setAlignment(Qt::AlignCenter);
        Createteacheracc = new QPushButton(TeacherRegister);
        Createteacheracc->setObjectName("Createteacheracc");
        Createteacheracc->setGeometry(QRect(150, 380, 241, 51));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        Createteacheracc->setFont(font3);
        Createteacheracc->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));

        retranslateUi(TeacherRegister);

        QMetaObject::connectSlotsByName(TeacherRegister);
    } // setupUi

    void retranslateUi(QDialog *TeacherRegister)
    {
        TeacherRegister->setWindowTitle(QCoreApplication::translate("TeacherRegister", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("TeacherRegister", "REGISTER  TEACHER", nullptr));
        label_2->setText(QCoreApplication::translate("TeacherRegister", "PASSWORD", nullptr));
        label_4->setText(QCoreApplication::translate("TeacherRegister", "USERNAME", nullptr));
        Createteacheracc->setText(QCoreApplication::translate("TeacherRegister", "CREATE ACCOUNT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherRegister: public Ui_TeacherRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERREGISTER_H
