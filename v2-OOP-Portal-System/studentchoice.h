#ifndef STUDENTCHOICE_H
#define STUDENTCHOICE_H
#include "studentregister.h"
#include "studentloginn.h"
#include <QDialog>
#include <QLabel>  // Include QLabel for the function declaration

namespace Ui {
class StudentChoice;
}

class StudentChoice : public QDialog
{
    Q_OBJECT

public:
    explicit StudentChoice(QWidget *parent = nullptr);
    ~StudentChoice();

private slots:

    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:

    Ui::StudentChoice *ui;
    Dialog *dialog;
    Loginstudent *loginstudent;
};
#endif // STUDENTCHOICE_H
