/********************************************************************************
** Form generated from reading UI file 'academic_best_worst.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACADEMIC_BEST_WORST_H
#define UI_ACADEMIC_BEST_WORST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_academic_best_worst
{
public:

    void setupUi(QDialog *academic_best_worst)
    {
        if (academic_best_worst->objectName().isEmpty())
            academic_best_worst->setObjectName("academic_best_worst");
        academic_best_worst->resize(1095, 599);

        retranslateUi(academic_best_worst);

        QMetaObject::connectSlotsByName(academic_best_worst);
    } // setupUi

    void retranslateUi(QDialog *academic_best_worst)
    {
        academic_best_worst->setWindowTitle(QCoreApplication::translate("academic_best_worst", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class academic_best_worst: public Ui_academic_best_worst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACADEMIC_BEST_WORST_H
