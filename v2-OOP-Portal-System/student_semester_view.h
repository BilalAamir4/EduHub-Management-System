#ifndef STUDENT_SEMESTER_VIEW_H
#define STUDENT_SEMESTER_VIEW_H

#include <QDialog>

namespace Ui {
class student_academic;
}

class student_academic : public QDialog
{
    Q_OBJECT

public:
    explicit student_academic(QWidget *parent = nullptr);
    void updateLabel(const QString &labelName, const QString &data, QFont &font);
    void processSemesterData(QTextStream &in, QFont &labelFont);
    void hideSpecificLabels();
    QString semesterkeyy(const QString &courseName);
    ~student_academic();

private slots:
    void on_semester1_clicked();

    void on_semester2_clicked();

    void on_semester3_clicked();

    void on_semester4_clicked();

    void on_semester5_clicked();

    void on_semester6_clicked();

    void on_semester7_clicked();

    void on_semester8_clicked();

private:
    Ui::student_academic *ui;
};

#endif // STUDENT_SEMESTER_VIEW_H
