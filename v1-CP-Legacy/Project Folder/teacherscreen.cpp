#include "teacherscreen.h"
#include "ui_teacherscreen.h"

TeacherScreen::TeacherScreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TeacherScreen)
{
    ui->setupUi(this);
}

TeacherScreen::~TeacherScreen()
{
    delete ui;
}
