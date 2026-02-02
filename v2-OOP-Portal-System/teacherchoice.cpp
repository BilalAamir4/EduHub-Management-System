#include "teacherchoice.h"
#include "ui_teacherchoice.h"

TeacherChoice::TeacherChoice(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::TeacherChoice)
{
    ui->setupUi(this);
}

TeacherChoice::~TeacherChoice()
{
    delete ui;
}

void TeacherChoice::on_pushButton_2_clicked()
{
    teacherregister = new TeacherRegister(this);
    teacherregister->show();
}

void TeacherChoice::on_pushButton_clicked()
{
    loginteacher = new Loginteacher(this);
    loginteacher->show();
}


