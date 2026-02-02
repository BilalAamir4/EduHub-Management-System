#ifndef ACADEMIC_BEST_WORST_H
#define ACADEMIC_BEST_WORST_H

#include <QDialog>

namespace Ui {
class academic_best_worst;
}

class academic_best_worst : public QDialog
{
    Q_OBJECT

public:
    explicit academic_best_worst(QWidget *parent = nullptr);
    ~academic_best_worst();

private:
    Ui::academic_best_worst *ui;
};

#endif // ACADEMIC_BEST_WORST_H
