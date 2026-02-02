#ifndef SELECTTEACHERORSTUDENT_H
#define SELECTTEACHERORSTUDENT_H

#include "teacherchoice.h"
#include "studentchoice.h"
#include <QDialog>
#include <QLabel>

namespace Ui {
class Selectteacherorstudent;
}

class Selectteacherorstudent : public QDialog
{
    Q_OBJECT

public:
    explicit Selectteacherorstudent(QWidget *parent = nullptr);
    ~Selectteacherorstudent();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::Selectteacherorstudent *ui;
    TeacherChoice *teacherchoice;
    StudentChoice *studentChoice;

    // Declaration for createIconLabel
    QLabel *createIconLabel(const QPixmap &pixmap);
};

#endif // SELECTTEACHERORSTUDENT_H
