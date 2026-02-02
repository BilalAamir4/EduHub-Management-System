#ifndef CRITERIA_H
#define CRITERIA_H

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

private:
    Ui::Criteria *ui;
};

#endif // CRITERIA_H
