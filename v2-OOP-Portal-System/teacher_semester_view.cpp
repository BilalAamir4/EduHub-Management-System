#include "teacher_semester_view.h"
#include "ui_teacher_semester_view.h"
#include"teacher.h"
#include <QFile>
#include <QTextStream>
#include <QLineEdit>
#include <QMessageBox>


academic_screen::academic_screen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::academic_screen)
{
    ui->setupUi(this);
    ui->course1->hide();
    ui->course2->hide();
    ui->course3->hide();
    ui->course4->hide();
    ui->course5->hide();
    ui->course6->hide();
}

academic_screen::~academic_screen()
{
    delete ui;

}

void academic_screen::on_semester1_clicked()
{
    // Set the course titles for Semester 1
    ui->course1->setText("Computer Programming");
    ui->course2->setText("Introduction To Information Technology");
    ui->course3->setText("Applied Physics");
    ui->course4->setText("Professional Practices");
    ui->course5->setText("Islamic Studies");
    ui->course6->setText("Discrete Mathematics");

    // Show course fields
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->show();
    ui->course6->show();

    ui->Quiz1->show();

    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 1", labelFont, this);
}



void academic_screen::on_semester2_clicked()
{
    ui->course1->setText("Digital Design");
    ui->course2->setText("Object Oriented Programming");
    ui->course3->setText("Probability and Statistics");
    ui->course4->setText("Functional English");
    ui->course5->setText("Pakistan Studies");
    ui->course6->setText("Calculus");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->show();
    ui->course6->show();


    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 2 ", labelFont, this);
}

void academic_screen::on_semester3_clicked()
{
        ui->course1->setText("Civic and Community Engagement");
        ui->course2->setText("Linear Algebra");
        ui->course3->setText("Multivariable Calculus");
        ui->course4->setText("Computer Communication & Networks");
        ui->course5->setText("Data Structure & Algorithm");
        ui->course6->setText("Communication Skills");
        ui->course1->show();
        ui->course2->show();
        ui->course3->show();
        ui->course4->show();
        ui->course5->show();
        ui->course6->show();

        QString enrollment = ui->enrollment->text();
        QFont labelFont;
        labelFont.setPointSize(14);

        teacher t1;
        t1.read(enrollment, ui->course1, "Semester 3", labelFont, this);
}


void academic_screen::on_semester4_clicked()
{
    ui->course1->setText("Social Sciences");
    ui->course2->setText("Computer Organization and Assembly Language");
    ui->course3->setText("Expository Writing");
    ui->course4->setText("Database Management Systems");
    ui->course5->setText("Entrepreneurship");
    ui->course6->setText("Software Engineering");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->show();
    ui->course6->show();


    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 4", labelFont, this);
}

void academic_screen::on_semester5_clicked()
{
    ui->course1->setText("Operating Systems");
    ui->course2->setText("Theory of Automata");
    ui->course3->setText("Design and Analysis of Algorithms");
    ui->course4->setText("Computer Architecture");
    ui->course5->setText("Artificial Intelligence");
    ui->course6->setText("Artificial Intelligence Lab");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->show();
    ui->course6->show();


    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 5", labelFont,this);
}


void academic_screen::on_semester6_clicked()
{
    ui->course1->setText("Compiler Construction");
    ui->course2->setText("Human Computer Interaction");
    ui->course3->setText("Human Computer Interaction Lab");
    ui->course4->setText("Information Technology Infrastructure");
    ui->course5->setText("System and Network Administration");
    ui->course6->setText("System and Network Administration Lab");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->show();
    ui->course6->show();

    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 6", labelFont, this);
}


void academic_screen::on_semester7_clicked()
{
    ui->course1->setText("Cyber Security");
    ui->course2->setText("Database Administration and Management");
    ui->course3->setText("Database Administration and Management lab");
    ui->course4->setText("Final Year Project");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->hide();
    ui->course6->hide();


    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 7", labelFont, this);
    t1.hideSpecificLabels();
}


void academic_screen::on_semester8_clicked()
{
    ui->course1->setText("Final Year Project");
    ui->course2->setText("Parallel and Distributed Computing");
    ui->course3->setText("Parallel and Distributed Computing lab");
    ui->course4->setText("Seerah-II");
    ui->course1->show();
    ui->course2->show();
    ui->course3->show();
    ui->course4->show();
    ui->course5->hide();
    ui->course6->hide();


    QString enrollment = ui->enrollment->text();
    QFont labelFont;
    labelFont.setPointSize(14);

    teacher t1;
    t1.read(enrollment, ui->course1, "Semester 8", labelFont, this);
    t1.hideSpecificLabels();


}

void academic_screen::on_edit_details_clicked()
{
    Academic_screen_entry= new academic_screen_entry(this);
    Academic_screen_entry->show();
}

