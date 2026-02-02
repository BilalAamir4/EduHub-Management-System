/********************************************************************************
** Form generated from reading UI file 'selectteacherorstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTTEACHERORSTUDENT_H
#define UI_SELECTTEACHERORSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Selectteacherorstudent
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Selectteacherorstudent)
    {
        if (Selectteacherorstudent->objectName().isEmpty())
            Selectteacherorstudent->setObjectName("Selectteacherorstudent");
        Selectteacherorstudent->resize(589, 589);
        Selectteacherorstudent->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255,255, 255);"));
        pushButton = new QPushButton(Selectteacherorstudent);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 400, 151, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        pushButton->setFont(font);
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 92, 112);"));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(Selectteacherorstudent);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 400, 161, 31));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 92, 112);"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        label = new QLabel(Selectteacherorstudent);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 589, 589));
        label->setStyleSheet(QString::fromUtf8("image: url(:/select.png);"));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(Selectteacherorstudent);

        QMetaObject::connectSlotsByName(Selectteacherorstudent);
    } // setupUi

    void retranslateUi(QDialog *Selectteacherorstudent)
    {
        Selectteacherorstudent->setWindowTitle(QCoreApplication::translate("Selectteacherorstudent", "Dialog", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("Selectteacherorstudent", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selectteacherorstudent: public Ui_Selectteacherorstudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTTEACHERORSTUDENT_H
