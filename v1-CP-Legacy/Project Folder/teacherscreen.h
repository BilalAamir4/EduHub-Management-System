#ifndef TEACHERSCREEN_H
#define TEACHERSCREEN_H

#include <QDialog>

namespace Ui {
class TeacherScreen;
}

class TeacherScreen : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherScreen(QWidget *parent = nullptr);
    ~TeacherScreen();

private:
    Ui::TeacherScreen *ui;
};

#endif // TEACHERSCREEN_H
