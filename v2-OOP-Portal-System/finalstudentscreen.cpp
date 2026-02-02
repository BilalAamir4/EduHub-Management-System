#include "finalstudentscreen.h"
#include "ui_finalstudentscreen.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QRegularExpression>
#include "xlsxdocument.h"

finalstudentscreen::finalstudentscreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finalstudentscreen)
{
    ui->setupUi(this);

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");
    ui->std_name->hide();
    ui->fthr_name->hide();
    ui->std_email->hide();
    ui->std_dpt->hide();
    ui->matric->hide();
    ui->fsc->hide();
    ui->cgpa->hide();
}

finalstudentscreen::~finalstudentscreen()
{
    delete ui;
}

void finalstudentscreen::on_submitbtn_clicked()
{
    QString rollno = ui->roll_no->text().trimmed();

    if (rollno.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter a roll number.");
        return;
    }

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");

    int rowToDisplay = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row)
    {
        QString currentRollNo = xlsx.read(row, 1).toString();
        if (currentRollNo == rollno)
        {
            rowToDisplay = row;
            break;
        }
    }

    if (rowToDisplay != -1) {
        QString studentName = xlsx.read(rowToDisplay, 2).toString();
        QString fatherName = xlsx.read(rowToDisplay, 3).toString();
        QString studentEmail = xlsx.read(rowToDisplay, 4).toString();
        QString departmentName = xlsx.read(rowToDisplay, 5).toString();
        QString matricMarks = xlsx.read(rowToDisplay, 6).toString();
        QString fscMarks = xlsx.read(rowToDisplay, 7).toString();
        QString cgpa = xlsx.read(rowToDisplay, 8).toString();

        ui->std_name->setText(studentName);
        ui->fthr_name->setText(fatherName);
        ui->std_email->setText(studentEmail);
        ui->std_dpt->setText(departmentName);
        ui->matric->setText(matricMarks);
        ui->fsc->setText(fscMarks);
        ui->cgpa->setText(cgpa);

        ui->std_name->show();
        ui->fthr_name->show();
        ui->std_email->show();
        ui->std_dpt->show();
        ui->matric->show();
        ui->fsc->show();
        ui->cgpa->show();
    } else {
        QMessageBox::warning(this, "Warning", "Roll number not found in Database.");
    }
}
