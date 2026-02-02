/********************************************************************************
** Form generated from reading UI file 'criteria.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRITERIA_H
#define UI_CRITERIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Criteria
{
public:
    QLineEdit *upperlimit;
    QLineEdit *lowerlimit;
    QPushButton *generatebtn;
    QLabel *label_4;
    QLabel *label_5;
    QTableView *tableWidget;
    QLabel *label_6;

    void setupUi(QDialog *Criteria)
    {
        if (Criteria->objectName().isEmpty())
            Criteria->setObjectName("Criteria");
        Criteria->resize(951, 532);
        upperlimit = new QLineEdit(Criteria);
        upperlimit->setObjectName("upperlimit");
        upperlimit->setGeometry(QRect(220, 320, 171, 41));
        lowerlimit = new QLineEdit(Criteria);
        lowerlimit->setObjectName("lowerlimit");
        lowerlimit->setGeometry(QRect(220, 220, 171, 41));
        generatebtn = new QPushButton(Criteria);
        generatebtn->setObjectName("generatebtn");
        generatebtn->setGeometry(QRect(110, 450, 181, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        generatebtn->setFont(font);
        generatebtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));
        label_4 = new QLabel(Criteria);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 330, 181, 31));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label_4->setFont(font1);
        label_5 = new QLabel(Criteria);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 230, 181, 31));
        label_5->setFont(font1);
        tableWidget = new QTableView(Criteria);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(410, 30, 531, 491));
        label_6 = new QLabel(Criteria);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 80, 191, 31));
        label_6->setFont(font1);

        retranslateUi(Criteria);

        QMetaObject::connectSlotsByName(Criteria);
    } // setupUi

    void retranslateUi(QDialog *Criteria)
    {
        Criteria->setWindowTitle(QCoreApplication::translate("Criteria", "Dialog", nullptr));
        generatebtn->setText(QCoreApplication::translate("Criteria", "Generate", nullptr));
        label_4->setText(QCoreApplication::translate("Criteria", "Less Than", nullptr));
        label_5->setText(QCoreApplication::translate("Criteria", "Greater Than", nullptr));
        label_6->setText(QCoreApplication::translate("Criteria", "Based On GPA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Criteria: public Ui_Criteria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRITERIA_H
