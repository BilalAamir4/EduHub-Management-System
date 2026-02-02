#include "studentchoice.h"
#include "ui_studentchoice.h"

StudentChoice::StudentChoice(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::StudentChoice)
{
    ui->setupUi(this);

}

StudentChoice::~StudentChoice()
{
    delete ui;
}

void StudentChoice::on_pushButton_2_clicked()
{
    loginstudent = new Loginstudent(this);
    loginstudent->show();
}

void StudentChoice::on_pushButton_clicked()
{
    dialog  = new Dialog(this);
    dialog->show();
}
