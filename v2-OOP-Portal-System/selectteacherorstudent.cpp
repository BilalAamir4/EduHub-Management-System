#include <QLabel>
#include "selectteacherorstudent.h"
#include "ui_selectteacherorstudent.h"

Selectteacherorstudent::Selectteacherorstudent(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Selectteacherorstudent)
{
    ui->setupUi(this);
}

Selectteacherorstudent::~Selectteacherorstudent()
{
    delete ui;
}

void Selectteacherorstudent::on_pushButton_2_clicked()
{
    studentChoice = new StudentChoice(this);
    studentChoice->show();
}

void Selectteacherorstudent::on_pushButton_clicked()
{

    teacherchoice = new TeacherChoice(this);
    teacherchoice->show();
}
