#include "studentchoice.h"
#include "ui_studentchoice.h"

StudentChoice::StudentChoice(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::StudentChoice)
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
    dialog = new Dialog(this);
    dialog->show();
}

QLabel *StudentChoice::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);
    return iconLabel;
}
