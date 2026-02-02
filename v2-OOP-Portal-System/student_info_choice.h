#ifndef STUDENT_INFO_CHOICE_H
#define STUDENT_INFO_CHOICE_H
#include "student_semester_view.h"
#include "finalstudentscreen.h"

#include <QDialog>

namespace Ui {
class student_info_choice;
}

class student_info_choice : public QDialog
{
    Q_OBJECT

public:
    explicit student_info_choice(QWidget *parent = nullptr);
    ~student_info_choice();

private slots:
    void on_Personal_info_clicked();

    void on_Academic_info_clicked();

private:
    Ui::student_info_choice *ui;
    student_academic* Student_semester_view;
    finalstudentscreen *Finalstudentscreen;
};

#endif // STUDENT_INFO_CHOICE_H
