#ifndef TEACHER_SEMESTER_ENTRY_H
#define TEACHER_SEMESTER_ENTRY_H

#include <QDialog>

namespace Ui {
class academic_screen_entry;
}

class academic_screen_entry : public QDialog
{
    Q_OBJECT

public:
    explicit academic_screen_entry(QWidget *parent = nullptr);
    ~academic_screen_entry();
    QString get_semester(const QString &courseName);
    QString generateSemesterDetails();
    void clearInputFields();
    void hideSpecificLineEdits();
    void showSpecificLineEdits();

private slots:
    void on_pushButton_clicked();

    void on_semester2_clicked();

    void on_semester3_clicked();

    void on_semester4_clicked();

    void on_semester5_clicked();

    void on_semester6_clicked();

    void on_semester7_clicked();

    void on_semester8_clicked();

private:
    Ui::academic_screen_entry *ui;

};

#endif // TEACHER_SEMESTER_ENTRY_H
