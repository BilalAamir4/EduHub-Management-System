#ifndef FINALTEACHERSCREEN_H
#define FINALTEACHERSCREEN_H

#include <QDialog>

namespace Ui {
class finalteacherscreen;
}

class finalteacherscreen : public QDialog
{
    Q_OBJECT

public:
    explicit finalteacherscreen(QWidget *parent = nullptr);
    ~finalteacherscreen();

private slots:
    void on_addbtn_clicked();

    void on_deletebtn_clicked();

    void on_updatebtn_clicked();

    void on_searchbtn_clicked();

    void on_resetbtn_clicked();

private:
    Ui::finalteacherscreen *ui;

};

#endif // FINALTEACHERSCREEN_H
