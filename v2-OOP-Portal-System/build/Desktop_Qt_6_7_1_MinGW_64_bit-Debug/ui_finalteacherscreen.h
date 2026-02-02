/********************************************************************************
** Form generated from reading UI file 'finalteacherscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINALTEACHERSCREEN_H
#define UI_FINALTEACHERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_finalteacherscreen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *roll_no;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *stdname;
    QLineEdit *fthrname;
    QLineEdit *stdmail;
    QLineEdit *stddpt;
    QLineEdit *matricmarks;
    QLineEdit *fscmarks;
    QLineEdit *cgpa;
    QPushButton *addbtn;
    QPushButton *deletebtn;
    QPushButton *resetbtn;
    QPushButton *updatebtn;
    QPushButton *searchbtn;
    QTableWidget *tableWidget;
    QPushButton *criteria;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;

    void setupUi(QDialog *finalteacherscreen)
    {
        if (finalteacherscreen->objectName().isEmpty())
            finalteacherscreen->setObjectName("finalteacherscreen");
        finalteacherscreen->resize(1321, 817);
        finalteacherscreen->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255,255, 255);"));
        label = new QLabel(finalteacherscreen);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 20, 541, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setPointSize(26);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(finalteacherscreen);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(11, 91, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setPointSize(18);
        font1.setBold(true);
        label_2->setFont(font1);
        roll_no = new QLineEdit(finalteacherscreen);
        roll_no->setObjectName("roll_no");
        roll_no->setGeometry(QRect(190, 90, 161, 41));
        roll_no->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        label_3 = new QLabel(finalteacherscreen);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 180, 81, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(finalteacherscreen);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 220, 181, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(finalteacherscreen);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 270, 181, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(finalteacherscreen);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 320, 181, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(finalteacherscreen);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 370, 261, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(finalteacherscreen);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 420, 241, 31));
        label_8->setFont(font1);
        label_9 = new QLabel(finalteacherscreen);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 480, 241, 31));
        label_9->setFont(font1);
        label_10 = new QLabel(finalteacherscreen);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 530, 241, 31));
        label_10->setFont(font1);
        stdname = new QLineEdit(finalteacherscreen);
        stdname->setObjectName("stdname");
        stdname->setGeometry(QRect(280, 220, 171, 41));
        fthrname = new QLineEdit(finalteacherscreen);
        fthrname->setObjectName("fthrname");
        fthrname->setGeometry(QRect(280, 270, 171, 41));
        stdmail = new QLineEdit(finalteacherscreen);
        stdmail->setObjectName("stdmail");
        stdmail->setGeometry(QRect(280, 320, 171, 41));
        stddpt = new QLineEdit(finalteacherscreen);
        stddpt->setObjectName("stddpt");
        stddpt->setGeometry(QRect(280, 370, 171, 41));
        matricmarks = new QLineEdit(finalteacherscreen);
        matricmarks->setObjectName("matricmarks");
        matricmarks->setGeometry(QRect(280, 420, 171, 41));
        fscmarks = new QLineEdit(finalteacherscreen);
        fscmarks->setObjectName("fscmarks");
        fscmarks->setGeometry(QRect(280, 470, 171, 41));
        cgpa = new QLineEdit(finalteacherscreen);
        cgpa->setObjectName("cgpa");
        cgpa->setGeometry(QRect(280, 520, 171, 41));
        addbtn = new QPushButton(finalteacherscreen);
        addbtn->setObjectName("addbtn");
        addbtn->setGeometry(QRect(10, 670, 131, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Georgia")});
        font2.setPointSize(16);
        font2.setBold(true);
        addbtn->setFont(font2);
        addbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        deletebtn = new QPushButton(finalteacherscreen);
        deletebtn->setObjectName("deletebtn");
        deletebtn->setGeometry(QRect(290, 671, 131, 41));
        deletebtn->setFont(font2);
        deletebtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        resetbtn = new QPushButton(finalteacherscreen);
        resetbtn->setObjectName("resetbtn");
        resetbtn->setGeometry(QRect(290, 751, 131, 41));
        resetbtn->setFont(font2);
        resetbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        updatebtn = new QPushButton(finalteacherscreen);
        updatebtn->setObjectName("updatebtn");
        updatebtn->setGeometry(QRect(11, 751, 131, 41));
        updatebtn->setFont(font2);
        updatebtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        searchbtn = new QPushButton(finalteacherscreen);
        searchbtn->setObjectName("searchbtn");
        searchbtn->setGeometry(QRect(1160, 90, 121, 41));
        searchbtn->setFont(font2);
        searchbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        tableWidget = new QTableWidget(finalteacherscreen);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(460, 170, 851, 641));
        criteria = new QPushButton(finalteacherscreen);
        criteria->setObjectName("criteria");
        criteria->setGeometry(QRect(100, 600, 231, 51));
        criteria->setFont(font2);
        criteria->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        line = new QFrame(finalteacherscreen);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 60, 1321, 20));
        line->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(finalteacherscreen);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 70, 1321, 16));
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_5 = new QFrame(finalteacherscreen);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(0, 140, 1321, 20));
        line_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(finalteacherscreen);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 0, 1321, 21));
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(finalteacherscreen);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 10, 1321, 16));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_7 = new QFrame(finalteacherscreen);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(840, 710, 461, 20));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_8 = new QFrame(finalteacherscreen);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(0, 150, 1331, 16));
        line_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_9 = new QFrame(finalteacherscreen);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(0, 570, 461, 21));
        line_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(finalteacherscreen);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(0, 580, 461, 16));
        line_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(finalteacherscreen);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(-10, 790, 471, 21));
        line_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_12 = new QFrame(finalteacherscreen);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(0, 800, 461, 16));
        line_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        label_2->raise();
        roll_no->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        stdname->raise();
        fthrname->raise();
        stdmail->raise();
        stddpt->raise();
        matricmarks->raise();
        fscmarks->raise();
        cgpa->raise();
        addbtn->raise();
        deletebtn->raise();
        resetbtn->raise();
        updatebtn->raise();
        searchbtn->raise();
        criteria->raise();
        line->raise();
        line_2->raise();
        line_5->raise();
        label->raise();
        line_3->raise();
        line_4->raise();
        line_7->raise();
        line_8->raise();
        line_9->raise();
        line_10->raise();
        line_11->raise();
        line_12->raise();
        tableWidget->raise();

        retranslateUi(finalteacherscreen);

        QMetaObject::connectSlotsByName(finalteacherscreen);
    } // setupUi

    void retranslateUi(QDialog *finalteacherscreen)
    {
        finalteacherscreen->setWindowTitle(QCoreApplication::translate("finalteacherscreen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("finalteacherscreen", "Student Management System", nullptr));
        label_2->setText(QCoreApplication::translate("finalteacherscreen", "Enrollment", nullptr));
        label_3->setText(QCoreApplication::translate("finalteacherscreen", "DATA", nullptr));
        label_4->setText(QCoreApplication::translate("finalteacherscreen", "Student Name", nullptr));
        label_5->setText(QCoreApplication::translate("finalteacherscreen", "Father Name", nullptr));
        label_6->setText(QCoreApplication::translate("finalteacherscreen", "Student Email", nullptr));
        label_7->setText(QCoreApplication::translate("finalteacherscreen", "Student Department", nullptr));
        label_8->setText(QCoreApplication::translate("finalteacherscreen", "Matric Marks", nullptr));
        label_9->setText(QCoreApplication::translate("finalteacherscreen", "FSC Marks", nullptr));
        label_10->setText(QCoreApplication::translate("finalteacherscreen", "CGPA", nullptr));
        addbtn->setText(QCoreApplication::translate("finalteacherscreen", "ADD", nullptr));
        deletebtn->setText(QCoreApplication::translate("finalteacherscreen", "DELETE", nullptr));
        resetbtn->setText(QCoreApplication::translate("finalteacherscreen", "RESET", nullptr));
        updatebtn->setText(QCoreApplication::translate("finalteacherscreen", "UPDATE", nullptr));
        searchbtn->setText(QCoreApplication::translate("finalteacherscreen", "SEARCH", nullptr));
        criteria->setText(QCoreApplication::translate("finalteacherscreen", "Search By Criteria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finalteacherscreen: public Ui_finalteacherscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINALTEACHERSCREEN_H
