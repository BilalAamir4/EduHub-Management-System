#include "criteria.h"
#include "ui_criteria.h"
#include "xlsxdocument.h"

Criteria::Criteria(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Criteria)
{
    ui->setupUi(this);


    model = new QStandardItemModel(this);
    ui->tableWidget->setModel(model);
}

Criteria::~Criteria()
{
    delete ui;
}

void Criteria::on_generatebtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");


    model->clear();


    double lowerLimit = ui->lowerlimit->text().toDouble();
    double upperLimit = ui->upperlimit->text().toDouble();

    // Get the number of rows in the Excel file
    int rowCount = xlsx.dimension().rowCount();

    // Set the number of rows and columns in the table
    model->setRowCount(rowCount);
    int columnCount = qMin(8, xlsx.dimension().columnCount());
    model->setColumnCount(columnCount);

    // Fill the table with data from the Excel file (8th column)
    int visibleRowCount = 0;
    for (int row = 0; row < rowCount; ++row)
    {
        // Get the value from the 8th column (assuming it contains numeric values)
        double cellValue = xlsx.read(row + 1, 8).toDouble();

        // Check if the value is within the specified limits
        if (cellValue >= lowerLimit && cellValue <= upperLimit)
        {
            for (int col = 0; col < columnCount; ++col)
            {
                QStandardItem *item = new QStandardItem(xlsx.read(row + 1, col + 1).toString());
                model->setItem(visibleRowCount, col, item);
            }
            ++visibleRowCount;
        }
    }

    // Resize columns and rows to fit the contents
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}
