#ifndef TEACHERCHOICE_H
#define TEACHERCHOICE_H

#include <QDialog>
#include <QPixmap>
#include <QLabel>
#include "teacherregister.h"
#include "teacherloginn.h"

namespace Ui {
class TeacherChoice;
}

class TeacherChoice : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherChoice(QWidget *parent = nullptr);
    ~TeacherChoice();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::TeacherChoice *ui;
    Loginteacher *loginteacher;
    TeacherRegister *teacherregister;
};

#endif // TEACHERCHOICE_H
