#ifndef STUDENTLOGINN_H
#define STUDENTLOGINN_H
#include "student_info_choice.h"
#include <QDialog>
#include <QPixmap>
#include <QLabel>

namespace Ui {
class Loginstudent;
}

class Loginstudent : public QDialog
{
    Q_OBJECT

public:
    explicit Loginstudent(QWidget *parent = nullptr);
    ~Loginstudent();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Loginstudent *ui;
    student_info_choice *Student_info_choice;
    QLabel *createIconLabel(const QPixmap &pixmap);
};

#endif // STUDENTLOGINN_H
