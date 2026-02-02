

#include "teacherchoice.h"
#include "ui_teacherchoice.h"

TeacherChoice::TeacherChoice(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::TeacherChoice)
{
    ui->setupUi(this);

    // Load the login icon
    QPixmap loginIconPixmap("C:/Users/death/Desktop/login.png");
    QLabel *loginIconLabel = createIconLabel(loginIconPixmap);
    loginIconLabel->setGeometry(300, 240, 50, 50);  // Adjust the position and size as needed

    // Load the register icon
    QPixmap registerIconPixmap("C:/Users/death/Desktop/register.png");
    QLabel *registerIconLabel = createIconLabel(registerIconPixmap);
    registerIconLabel->setGeometry(300, 370, 50, 50);  // Adjust the position and size as needed
}

TeacherChoice::~TeacherChoice()
{
    delete ui;
}

void TeacherChoice::on_pushButton_2_clicked()
{
    loginteacher = new Loginteacher(this);
    loginteacher->show();
}

void TeacherChoice::on_pushButton_clicked()
{
    teacherregister = new TeacherRegister(this);
    teacherregister->show();
}

QLabel *TeacherChoice::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);  // Scale the pixmap to fit the label
    return iconLabel;
}
