#include "criteria.h"
#include "ui_criteria.h"

Criteria::Criteria(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Criteria)
{
    ui->setupUi(this);
}

Criteria::~Criteria()
{
    delete ui;
}
