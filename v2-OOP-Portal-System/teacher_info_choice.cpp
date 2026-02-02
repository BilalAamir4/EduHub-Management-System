

#include "teacher_info_choice.h"
#include "ui_teacher_info_choice.h"

teacher_info_choice::teacher_info_choice(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacher_info_choice)
{
    ui->setupUi(this);
}

teacher_info_choice::~teacher_info_choice()
{
    delete ui;
}

void teacher_info_choice::on_Personal_info_clicked()
{
    Finalteacherscreen = new finalteacherscreen(this);
    Finalteacherscreen->show();
}


void teacher_info_choice::on_Academic_info_clicked()
{
    Academic_screen = new academic_screen(this);
    Academic_screen->show();
}

