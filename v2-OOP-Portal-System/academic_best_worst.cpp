#include "academic_best_worst.h"
#include "ui_academic_best_worst.h"

academic_best_worst::academic_best_worst(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::academic_best_worst)
{
    ui->setupUi(this);
}

academic_best_worst::~academic_best_worst()
{
    delete ui;
}
