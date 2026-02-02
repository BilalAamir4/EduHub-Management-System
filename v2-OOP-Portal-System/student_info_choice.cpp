#include "student_info_choice.h"
#include "ui_student_info_choice.h"

student_info_choice::student_info_choice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::student_info_choice)
{
    ui->setupUi(this);
}

student_info_choice::~student_info_choice()
{
    delete ui;
}

void student_info_choice::on_Academic_info_clicked()
{
    Student_semester_view = new student_academic(this);
    Student_semester_view->show();
}


void student_info_choice::on_Personal_info_clicked()
{

    Finalstudentscreen = new finalstudentscreen(this);
    Finalstudentscreen->show();
}

