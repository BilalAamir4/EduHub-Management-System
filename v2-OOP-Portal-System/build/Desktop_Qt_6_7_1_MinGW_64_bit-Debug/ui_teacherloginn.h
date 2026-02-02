/********************************************************************************
** Form generated from reading UI file 'teacherloginn.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERLOGINN_H
#define UI_TEACHERLOGINN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Loginteacher
{
public:
    QLineEdit *userlogin;
    QPushButton *pushButton;
    QLineEdit *passlogin;
    QLabel *label_2;

    void setupUi(QDialog *Loginteacher)
    {
        if (Loginteacher->objectName().isEmpty())
            Loginteacher->setObjectName("Loginteacher");
        Loginteacher->resize(1280, 1189);
        Loginteacher->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255, 255);\n"
""));
        userlogin = new QLineEdit(Loginteacher);
        userlogin->setObjectName("userlogin");
        userlogin->setGeometry(QRect(180, 190, 281, 61));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        userlogin->setFont(font);
        userlogin->setAutoFillBackground(false);
        userlogin->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        userlogin->setPlaceholderText(QString::fromUtf8(""));
        userlogin->setCursorMoveStyle(Qt::LogicalMoveStyle);
        userlogin->setClearButtonEnabled(false);
        pushButton = new QPushButton(Loginteacher);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 420, 241, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        passlogin = new QLineEdit(Loginteacher);
        passlogin->setObjectName("passlogin");
        passlogin->setGeometry(QRect(180, 290, 281, 61));
        passlogin->setFont(font);
        passlogin->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(Loginteacher);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1280, 720, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/student_choice.png);"));
        userlogin->raise();
        passlogin->raise();
        pushButton->raise();
        label_2->raise();

        retranslateUi(Loginteacher);

        QMetaObject::connectSlotsByName(Loginteacher);
    } // setupUi

    void retranslateUi(QDialog *Loginteacher)
    {
        Loginteacher->setWindowTitle(QCoreApplication::translate("Loginteacher", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Loginteacher", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("Loginteacher", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginteacher: public Ui_Loginteacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERLOGINN_H
