#ifndef TEACHER_INFO_CHOICE_H
#define TEACHER_INFO_CHOICE_H
#include "finalteacherscreen.h"
#include "teacher_semester_view.h"
#include <QDialog>

namespace Ui {
class teacher_info_choice;
}

class teacher_info_choice : public QDialog
{
    Q_OBJECT

public:
    explicit teacher_info_choice(QWidget *parent = nullptr);
    ~teacher_info_choice();

private slots:
    void on_Personal_info_clicked();

    void on_Academic_info_clicked();

private:
    Ui::teacher_info_choice *ui;
    finalteacherscreen *Finalteacherscreen;
    academic_screen *Academic_screen;

};

#endif // TEACHER_INFO_CHOICE_H \


