#ifndef TEACHER_SEMESTER_VIEW_H
#define TEACHER_SEMESTER_VIEW_H
#include "teacher_semester_entry.h"
#include <QDialog>
#include <QTextBrowser>

namespace Ui {
class academic_screen;
}

class academic_screen : public QDialog
{
    Q_OBJECT

public:
    explicit academic_screen(QWidget *parent = nullptr);
    void updateLabel(const QString &labelName, const QString &data, QFont &font);
    void processSemesterData(QTextStream &in, QFont &labelFont);
    void hideSpecificLabels();
    ~academic_screen();

private slots:

    void on_semester1_clicked();

    void on_semester2_clicked();

    void on_semester3_clicked();

    void on_semester4_clicked();

    void on_semester5_clicked();

    void on_semester6_clicked();

    void on_semester7_clicked();

    void on_semester8_clicked();

    void on_edit_details_clicked();

private:
    Ui::academic_screen *ui;
    academic_screen_entry *Academic_screen_entry;
};

#endif
