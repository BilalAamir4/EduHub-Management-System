#include "finalstudentscreen.h"
#include "ui_finalstudentscreen.h"
#include <QFile>
#include <QTextStream>

finalstudentscreen::finalstudentscreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::finalstudentscreen)
{
    ui->setupUi(this);
    QPixmap studentPixmap("C:/Users/death/Desktop/apply.png");
    QLabel *studentIconLabel = createIconLabel(studentPixmap);
    studentIconLabel->setGeometry(730, 10, 120, 120);
}

finalstudentscreen::~finalstudentscreen()
{
    delete ui;
}

void finalstudentscreen::on_submitbtn_clicked()
{
    QString name = ui->stdname->text();
    QString dpt  = ui->stddpt->text();
    QString mail = ui->stdmail->text();
    QString fthr = ui->fthrname->text();
    QString fsc  = ui->fscmarks->text();
    QString ssc  = ui->matricmarks->text();
    QString gpa  = ui->cgpa->text();

    // Open a text file with the name "studentsapplyingdata.txt" in write mode
    QFile file("studentsapplyingdata.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        // Write the strings to the file
        out << "Name: " << name << "\n";
        out << "Department: " << dpt << "\n";
        out << "Email: " << mail << "\n";
        out << "Father Name: " << fthr << "\n";
        out << "FSC Marks: " << fsc << "\n";
        out << "Matric Marks: " << ssc << "\n";
        out << "CGPA: " << gpa << "\n";

        // Close the file
        file.close();
    }
    else {
        // Handle the case where the file couldn't be opened
    }
}
QLabel *finalstudentscreen::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);  // Scale the pixmap to fit the label
    return iconLabel;
}
