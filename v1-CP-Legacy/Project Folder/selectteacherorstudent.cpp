#include <QLabel>
#include "selectteacherorstudent.h"
#include "ui_selectteacherorstudent.h"

Selectteacherorstudent::Selectteacherorstudent(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Selectteacherorstudent)
{
    ui->setupUi(this);

    // Load the first icon
    QPixmap studentPixmap("C:/Users/death/Desktop/std.png");
    QLabel *studentIconLabel = createIconLabel(studentPixmap);
    studentIconLabel->setGeometry(450, 170, 120, 120);  // Adjust the position and size as needed

    // Load the second icon
    QPixmap teacherPixmap("C:/Users/death/Desktop/tchr.png");
    QLabel *teacherIconLabel = createIconLabel(teacherPixmap);

    // Set the position of the second icon (next to the first icon)
    teacherIconLabel->setGeometry(200, 170, 120, 120);  // Adjust the position and size as needed
}

Selectteacherorstudent::~Selectteacherorstudent()
{
    delete ui;
}

void Selectteacherorstudent::on_pushButton_2_clicked()
{
    teacherchoice = new TeacherChoice(this);
    teacherchoice->show();
}

void Selectteacherorstudent::on_pushButton_clicked()
{
    studentChoice = new StudentChoice(this);
    studentChoice->show();
}

QLabel *Selectteacherorstudent::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);  // Scale the pixmap to fit the label
    return iconLabel;
}
