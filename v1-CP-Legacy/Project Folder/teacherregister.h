#ifndef TEACHERREGISTER_H
#define TEACHERREGISTER_H
#include <QDialog>
#include <QPixmap>
#include <QLabel>



namespace Ui {
class TeacherRegister;
}

class TeacherRegister : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherRegister(QWidget *parent = nullptr);
    ~TeacherRegister();

private slots:


    void on_Createteacheracc_clicked();

private:
    Ui::TeacherRegister *ui;
    QLabel *createIconLabel(const QPixmap &pixmap);

};

#endif // TEACHERREGISTER_H
