#ifndef CRITERIA_H
#define CRITERIA_H
#include <QStandardItemModel>

#include <QDialog>

namespace Ui {
class Criteria;
}

class Criteria : public QDialog
{
    Q_OBJECT

public:
    explicit Criteria(QWidget *parent = nullptr);
    ~Criteria();

private slots:
    void on_generatebtn_clicked();

private:
    Ui::Criteria *ui;
    QStandardItemModel *model;

};

#endif // CRITERIA_H
