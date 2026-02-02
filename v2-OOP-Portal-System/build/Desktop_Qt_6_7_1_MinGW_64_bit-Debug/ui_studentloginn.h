/********************************************************************************
** Form generated from reading UI file 'studentloginn.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTLOGINN_H
#define UI_STUDENTLOGINN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Loginstudent
{
public:
    QLineEdit *password;
    QPushButton *pushButton;
    QLineEdit *username;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *Loginstudent)
    {
        if (Loginstudent->objectName().isEmpty())
            Loginstudent->setObjectName("Loginstudent");
        Loginstudent->setEnabled(true);
        Loginstudent->resize(850, 500);
        Loginstudent->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255, 255);\n"
""));
        password = new QLineEdit(Loginstudent);
        password->setObjectName("password");
        password->setGeometry(QRect(180, 290, 281, 61));
        password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Loginstudent);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 410, 241, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        username = new QLineEdit(Loginstudent);
        username->setObjectName("username");
        username->setGeometry(QRect(180, 190, 281, 61));
        label_3 = new QLabel(Loginstudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 40, 341, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Loginstudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 290, 141, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(Loginstudent);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 190, 141, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Loginstudent);

        QMetaObject::connectSlotsByName(Loginstudent);
    } // setupUi

    void retranslateUi(QDialog *Loginstudent)
    {
        Loginstudent->setWindowTitle(QCoreApplication::translate("Loginstudent", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Loginstudent", "LOGIN", nullptr));
        label_3->setText(QCoreApplication::translate("Loginstudent", "LOGIN  STUDENT", nullptr));
        label_2->setText(QCoreApplication::translate("Loginstudent", "PASSWORD", nullptr));
        label->setText(QCoreApplication::translate("Loginstudent", "USERNAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginstudent: public Ui_Loginstudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTLOGINN_H
