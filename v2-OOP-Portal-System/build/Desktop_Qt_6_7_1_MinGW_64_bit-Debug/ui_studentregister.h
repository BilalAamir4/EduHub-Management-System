/********************************************************************************
** Form generated from reading UI file 'studentregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTREGISTER_H
#define UI_STUDENTREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *studentpass;
    QLabel *label_3;
    QLineEdit *studentuser;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(784, 498);
        Dialog->setAutoFillBackground(false);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255, 255);\n"
""));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 190, 141, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 290, 141, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_2->setAlignment(Qt::AlignCenter);
        studentpass = new QLineEdit(Dialog);
        studentpass->setObjectName("studentpass");
        studentpass->setGeometry(QRect(180, 290, 281, 61));
        studentpass->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 70, 341, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255,0);"));
        label_3->setAlignment(Qt::AlignCenter);
        studentuser = new QLineEdit(Dialog);
        studentuser->setObjectName("studentuser");
        studentuser->setGeometry(QRect(180, 190, 281, 61));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 390, 241, 51));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(false);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255,255, 255);\n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "USERNAME", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "PASSWORD", nullptr));
        studentpass->setInputMask(QString());
        label_3->setText(QCoreApplication::translate("Dialog", "REGISTER  STUDENT", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "CREATE ACCOUNT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREGISTER_H
