/********************************************************************************
** Form generated from reading UI file 'finalstudentscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALSTUDENTSCREEN_H
#define UI_FINALSTUDENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_finalstudentscreen
{
public:
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *submitbtn;
    QLabel *std_name;
    QLabel *fthr_name;
    QLabel *std_email;
    QLabel *std_dpt;
    QLabel *matric;
    QLabel *fsc;
    QLabel *cgpa;
    QLabel *label_11;
    QLineEdit *roll_no;

    void setupUi(QDialog *finalstudentscreen)
    {
        if (finalstudentscreen->objectName().isEmpty())
            finalstudentscreen->setObjectName("finalstudentscreen");
        finalstudentscreen->resize(1189, 765);
        label = new QLabel(finalstudentscreen);
        label->setObjectName("label");
        label->setGeometry(QRect(450, 10, 271, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label_6 = new QLabel(finalstudentscreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 400, 181, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_6->setFont(font1);
        label_5 = new QLabel(finalstudentscreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 310, 181, 31));
        label_5->setFont(font1);
        label_4 = new QLabel(finalstudentscreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 230, 181, 31));
        label_4->setFont(font1);
        label_10 = new QLabel(finalstudentscreen);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(470, 490, 111, 41));
        label_10->setFont(font1);
        label_7 = new QLabel(finalstudentscreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(680, 230, 241, 31));
        label_7->setFont(font1);
        label_9 = new QLabel(finalstudentscreen);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(680, 400, 241, 31));
        label_9->setFont(font1);
        label_8 = new QLabel(finalstudentscreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(680, 310, 241, 31));
        label_8->setFont(font1);
        submitbtn = new QPushButton(finalstudentscreen);
        submitbtn->setObjectName("submitbtn");
        submitbtn->setGeometry(QRect(510, 600, 181, 51));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        submitbtn->setFont(font2);
        submitbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        std_name = new QLabel(finalstudentscreen);
        std_name->setObjectName("std_name");
        std_name->setGeometry(QRect(330, 230, 181, 31));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(true);
        std_name->setFont(font3);
        fthr_name = new QLabel(finalstudentscreen);
        fthr_name->setObjectName("fthr_name");
        fthr_name->setGeometry(QRect(320, 310, 181, 31));
        fthr_name->setFont(font3);
        std_email = new QLabel(finalstudentscreen);
        std_email->setObjectName("std_email");
        std_email->setGeometry(QRect(320, 400, 321, 31));
        std_email->setFont(font3);
        std_dpt = new QLabel(finalstudentscreen);
        std_dpt->setObjectName("std_dpt");
        std_dpt->setGeometry(QRect(940, 230, 181, 31));
        std_dpt->setFont(font3);
        matric = new QLabel(finalstudentscreen);
        matric->setObjectName("matric");
        matric->setGeometry(QRect(880, 310, 181, 31));
        matric->setFont(font3);
        fsc = new QLabel(finalstudentscreen);
        fsc->setObjectName("fsc");
        fsc->setGeometry(QRect(860, 400, 181, 31));
        fsc->setFont(font3);
        cgpa = new QLabel(finalstudentscreen);
        cgpa->setObjectName("cgpa");
        cgpa->setGeometry(QRect(580, 490, 181, 41));
        cgpa->setFont(font3);
        label_11 = new QLabel(finalstudentscreen);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(380, 110, 151, 31));
        label_11->setFont(font1);
        roll_no = new QLineEdit(finalstudentscreen);
        roll_no->setObjectName("roll_no");
        roll_no->setGeometry(QRect(540, 110, 161, 41));
        roll_no->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));

        retranslateUi(finalstudentscreen);

        QMetaObject::connectSlotsByName(finalstudentscreen);
    } // setupUi

    void retranslateUi(QDialog *finalstudentscreen)
    {
        finalstudentscreen->setWindowTitle(QCoreApplication::translate("finalstudentscreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("finalstudentscreen", "Personal Details", nullptr));
        label_6->setText(QCoreApplication::translate("finalstudentscreen", "Student Email", nullptr));
        label_5->setText(QCoreApplication::translate("finalstudentscreen", "Father Name", nullptr));
        label_4->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        label_10->setText(QCoreApplication::translate("finalstudentscreen", "CGPA", nullptr));
        label_7->setText(QCoreApplication::translate("finalstudentscreen", "Student Department", nullptr));
        label_9->setText(QCoreApplication::translate("finalstudentscreen", "FSC Marks", nullptr));
        label_8->setText(QCoreApplication::translate("finalstudentscreen", "Matric Marks", nullptr));
        submitbtn->setText(QCoreApplication::translate("finalstudentscreen", "Submit", nullptr));
        std_name->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        fthr_name->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        std_email->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        std_dpt->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        matric->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        fsc->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        cgpa->setText(QCoreApplication::translate("finalstudentscreen", "Student Name", nullptr));
        label_11->setText(QCoreApplication::translate("finalstudentscreen", "Enrollment :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finalstudentscreen: public Ui_finalstudentscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALSTUDENTSCREEN_H
