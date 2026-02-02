#ifndef FINALTEACHERSCREEN_H
#define FINALTEACHERSCREEN_H
#include "criteria.h"
#include <QDialog>
#include <QRegularExpression>

namespace Ui {
class finalteacherscreen;
}

class finalteacherscreen : public QDialog
{
    Q_OBJECT

public:
    explicit finalteacherscreen(QWidget *parent = nullptr);
    ~finalteacherscreen();
    bool isAlphabetic(const QString& str);
    bool isNumeric(const QString& str);

private slots:
    void on_addbtn_clicked();

    void on_deletebtn_clicked();

    void on_updatebtn_clicked();

    void on_searchbtn_clicked();

    void on_resetbtn_clicked();

    void on_criteria_clicked();

private:
    Ui::finalteacherscreen *ui;
    Criteria *criteria;

};

#endif // FINALTEACHERSCREEN_H
