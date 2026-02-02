#include "teacher_semester_entry.h"
#include "ui_teacher_semester_entry.h"
#include "teacher.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QLineEdit>
#include <QMap>


academic_screen_entry::academic_screen_entry(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::academic_screen_entry)
{
    ui->setupUi(this);
}

academic_screen_entry::~academic_screen_entry()
{
    delete ui;
}

void academic_screen_entry::on_pushButton_clicked()
{
    showSpecificLineEdits();
    QString enrollment = ui->enrollment->text();
    QString courseName = ui->course1->text();
    QString semesterKey = get_semester(courseName);
    QString updatedSemesterDetails = generateSemesterDetails();

    qDebug() << "Enrollment: " << enrollment;
    qDebug() << "Course Name: " << courseName;
    qDebug() << "Semester Key: " << semesterKey;
    qDebug() << "Updated Semester Details: " << updatedSemesterDetails;

    teacher t1;
    t1.write(enrollment, semesterKey, updatedSemesterDetails);

    clearInputFields();
}

void academic_screen_entry::on_semester2_clicked()
{
    ui->course1->setText("Digital Design");
    ui->course2->setText("Object Oriented Programming");
    ui->course3->setText("Probability and Statistics");
    ui->course4->setText("Functional English");
    ui->course5->setText("Pakistan Studies");
    ui->course6->setText("Calculus");
    ui->course5->show();
    ui->course6->show();
    showSpecificLineEdits();

}

void academic_screen_entry::on_semester3_clicked()
{
    ui->course1->setText("Civic and Community Engagement");
    ui->course2->setText("Linear Algebra");
    ui->course3->setText("Multivariable Calculus");
    ui->course4->setText("Computer Communication & Networks");
    ui->course5->setText("Data Structure & Algorithm");
    ui->course6->setText("Communication Skills");
    ui->course5->show();
    ui->course6->show();
    showSpecificLineEdits();
}

void academic_screen_entry::on_semester4_clicked()
{
    ui->course1->setText("Social Sciences");
    ui->course2->setText("Computer Organization and Assembly Language");
    ui->course3->setText("Expository Writing");
    ui->course4->setText("Database Management Systems");
    ui->course5->setText("Entrepreneurship");
    ui->course6->setText("Software Engineering");
    ui->course5->show();
    ui->course6->show();
    showSpecificLineEdits();
}

void academic_screen_entry::on_semester5_clicked()
{
    ui->course1->setText("Operating Systems");
    ui->course2->setText("Theory of Automata");
    ui->course3->setText("Design and Analysis of Algorithms");
    ui->course4->setText("Computer Architecture");
    ui->course5->setText("Artificial Intelligence");
    ui->course6->setText("Artificial Intelligence Lab");
    ui->course5->show();
    ui->course6->show();
    showSpecificLineEdits();
}

void academic_screen_entry::on_semester6_clicked()
{
    ui->course1->setText("Compiler Construction");
    ui->course2->setText("Human Computer Interaction");
    ui->course3->setText("Human Computer Interaction Lab");
    ui->course4->setText("Information Technology Infrastructure");
    ui->course5->setText("System and Network Administration");
    ui->course6->setText("System and Network Administration Lab");
    ui->course5->show();
    ui->course6->show();
    showSpecificLineEdits();
}

void academic_screen_entry::on_semester7_clicked()
{
    ui->course1->setText("Cyber Security");
    ui->course2->setText("Database Administration and Management");
    ui->course3->setText("Database Administration and Management lab");
    ui->course4->setText("Final Year Project");

    ui->course5->hide();
    ui->course6->hide();
    hideSpecificLineEdits();
}

void academic_screen_entry::on_semester8_clicked()
{
    ui->course1->setText("Final Year Project");
    ui->course2->setText("Parallel and Distributed Computing");
    ui->course3->setText("Parallel and Distributed Computing lab");
    ui->course4->setText("Seerah-II");

    ui->course5->hide();
    ui->course6->hide();
    hideSpecificLineEdits();
}

void academic_screen_entry::clearInputFields()
{

    for (int i = 1; i <= 6; ++i) {
        QLineEdit* quizEdit = findChild<QLineEdit*>("quiz" + QString::number(i));
        QLineEdit* assignEdit = findChild<QLineEdit*>("assign" + QString::number(i));
        QLineEdit* midEdit = findChild<QLineEdit*>("mids" + QString::number(i));
        QLineEdit* finalEdit = findChild<QLineEdit*>("finals" + QString::number(i));

        if (quizEdit) quizEdit->clear();
        if (assignEdit) assignEdit->clear();
        if (midEdit) midEdit->clear();
        if (finalEdit) finalEdit->clear();
    }
    ui->enrollment->clear();
}

QString academic_screen_entry::generateSemesterDetails()
{

    QString details;
    for (int i = 1; i <= 6; ++i) {
        QLineEdit* quizEdit = findChild<QLineEdit*>("quiz" + QString::number(i));
        QLineEdit* assignEdit = findChild<QLineEdit*>("assign" + QString::number(i));
        QLineEdit* midEdit = findChild<QLineEdit*>("mids" + QString::number(i));
        QLineEdit* finalEdit = findChild<QLineEdit*>("finals" + QString::number(i));

        if (quizEdit) details += "Quiz " + QString::number(i) + ": " + quizEdit->text() + "\n";
        if (assignEdit) details += "Assignment " + QString::number(i) + ": " + assignEdit->text() + "\n";
        if (midEdit) details += "Midterm " + QString::number(i) + ": " + midEdit->text() + "\n";
        if (finalEdit) details += "Final " + QString::number(i) + ": " + finalEdit->text() + "\n";
    }
    return details;
}

QString academic_screen_entry::get_semester(const QString &courseName)
{
    // This function should return the correct semester based on the course name
    if (courseName == "Computer Programming") return "Semester 1";
    else if (courseName == "Digital Design") return "Semester 2";
    else if (courseName == "Civic and Community Management") return "Semester 3";
    else if (courseName == "Social Sciences") return "Semester 4";
    else if (courseName == "Operating Systems") return "Semester 5";
    else if (courseName == "Compiler Construction") return "Semester 6";
    else if (courseName == "Cyber Security") return "Semester 7";
    else if (courseName == "Final Year Project") return "Semester 8";
    else return "Unknown Semester";  // Default case
}
void academic_screen_entry::hideSpecificLineEdits() {
    // List of line edit names to hide
    QStringList lineEditNames = {
        "quiz5", "quiz6",
        "assign5", "assign6",
        "mids5", "mids6",
        "finals5", "finals6",
        "total5","total6"
    };

    // Iterate through the list of line edits and hide each one
    foreach (const QString &lineEditName, lineEditNames) {
        QLineEdit *lineEdit = findChild<QLineEdit*>(lineEditName);
        if (lineEdit) {
            lineEdit->hide();
        } else {
            qDebug() << "Line edit not found:" << lineEditName;
        }
    }
}
void academic_screen_entry::showSpecificLineEdits() {
    // List of line edit names to hide
    QStringList lineEditNames = {
        "quiz5", "quiz6",
        "assign5", "assign6",
        "mids5", "mids6",
        "finals5", "finals6",
        "total5","total6"
    };


    foreach (const QString &lineEditName, lineEditNames) {
        QLineEdit *lineEdit = findChild<QLineEdit*>(lineEditName);
        if (lineEdit) {
            lineEdit->show();
        } else {
            qDebug() << "Line edit not found:" << lineEditName;
        }
    }
}
