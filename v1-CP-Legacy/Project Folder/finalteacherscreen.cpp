#include "finalteacherscreen.h"
#include "ui_finalteacherscreen.h"
#include "xlsxdocument.h"

finalteacherscreen::finalteacherscreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::finalteacherscreen)
{
    ui->setupUi(this);

    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Set the number of rows and columns in the table
    ui->tableWidget->setRowCount(xlsx.dimension().rowCount());
    int columnCount = qMin(8, xlsx.dimension().columnCount());
    ui->tableWidget->setColumnCount(columnCount);

    // Fill the table with data from the Excel file (first 8 columns)
    for (int row = 0; row < xlsx.dimension().rowCount(); ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row + 1, col + 1).toString());
            ui->tableWidget->setItem(row, col, item);
        }
    }

    // Set horizontal header labels
    QStringList headerLabels;
    for (int col = 1; col <= columnCount; ++col) {
        headerLabels << xlsx.read(1, col).toString();
    }
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    // Resize columns and rows to fit the contents
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}

finalteacherscreen::~finalteacherscreen()
{
    delete ui;
}



void finalteacherscreen::on_addbtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Find the first available empty row
    int newRow = 1;
    while (!xlsx.read(newRow, 1).isNull() && xlsx.read(newRow, 1).toString() != "") {
        ++newRow;
    }

    // Update values in the Excel file based on the user input
    if (!ui->stdname->text().isEmpty() || !ui->cgpa->text().isEmpty() || !ui->matricmarks->text().isEmpty() ||
        !ui->fthrname->text().isEmpty() || !ui->stdmail->text().isEmpty() || !ui->stddpt->text().isEmpty() || !ui->fscmarks->text().isEmpty()) {

        xlsx.write(newRow, 1, QString::number(newRow));  // ID in the 1st column
        xlsx.write(newRow, 2, ui->stdname->text());      // stddname in the 2nd column
        xlsx.write(newRow, 8, ui->cgpa->text());         // cggpa in the 8th column
        xlsx.write(newRow, 6, ui->matricmarks->text());  // matrcmarks in the 6th column
        xlsx.write(newRow, 3, ui->fthrname->text());     // fathername in the 3rd column
        xlsx.write(newRow, 4, ui->stdmail->text());      // email in the 4th column
        xlsx.write(newRow, 5, ui->stddpt->text());       // department in the 5th column
        xlsx.write(newRow, 7, ui->fscmarks->text());     // fsccmarks in the 7th column
    }

    // Save the changes to the Excel file
    xlsx.saveAs("C:/Users/death/Desktop/CP.xlsx");

    // Refresh the table to display the updated data
    int rowCount = xlsx.dimension().rowCount();
    ui->tableWidget->setRowCount(rowCount);

    // Display all rows, including those with empty strings
    for (int row = 1; row <= rowCount; ++row) {
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row, col + 1).toString());
            ui->tableWidget->setItem(row - 1, col, item);
        }
    }

    // Resize columns and rows to fit the contents
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}



void finalteacherscreen::on_deletebtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Get the ID to be deleted from the line edit
    QString idToDelete = ui->id->text(); // Assuming the line edit is named 'id'

    // Find the row that matches the ID in the first column
    int rowToDelete = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row) {
        QString currentId = xlsx.read(row, 1).toString(); // ID is in the 1st column
        if (currentId == idToDelete) {
            rowToDelete = row;
            break;
        }
    }

    // Delete the entire row if ID is found
    if (rowToDelete != -1) {
        // Save the changes to the Excel file (excluding the row to be deleted)
        int lastRow = xlsx.dimension().rowCount();
        for (int row = rowToDelete; row < lastRow; ++row) {
            for (int col = 1; col <= 8; ++col) {
                xlsx.write(row, col, xlsx.read(row + 1, col).toString());
            }
        }

        // Clear the last row
        for (int col = 1; col <= 8; ++col) {
            xlsx.write(lastRow, col, "");
        }

        xlsx.saveAs("C:/Users/death/Desktop/CP.xlsx");

        // Hide the row in the QTableWidget
        ui->tableWidget->hideRow(rowToDelete - 1);

        // Clear the table
        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        // Load the updated data back into the table
        int rowCount = xlsx.dimension().rowCount();
        int colCount = qMin(8, xlsx.dimension().columnCount());
        ui->tableWidget->setRowCount(rowCount);

        for (int row = 0; row < rowCount; ++row) {
            for (int col = 0; col < colCount; ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row + 1, col + 1).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

        // Set horizontal header labels
        QStringList headerLabels;
        for (int col = 1; col <= colCount; ++col) {
            headerLabels << xlsx.read(1, col).toString();
        }
        ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

        // Resize columns and rows to fit the contents
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else {
        // Handle the case where the ID is not found (display an error message, etc.)
        qDebug() << "ID not found. No data deleted.";
    }
}


void finalteacherscreen::on_updatebtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Get the ID to be updated from the line edit
    QString idToUpdate = ui->id->text(); // Assuming the line edit is named 'id'

    // Find the row that matches the ID
    int rowToUpdate = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row) {
        QString currentId = xlsx.read(row, 1).toString(); // ID is in the 1st column
        if (currentId == idToUpdate) {
            rowToUpdate = row;
            break;
        }
    }

    // Update the data if ID is found
    if (rowToUpdate != -1) {
        // Read existing values in the specified row
        QString existingStdName = xlsx.read(rowToUpdate, 2).toString();
        QString existingCGPA = xlsx.read(rowToUpdate, 8).toString();
        QString existingMatricMarks = xlsx.read(rowToUpdate, 6).toString();
        QString existingFatherName = xlsx.read(rowToUpdate, 3).toString();
        QString existingEmail = xlsx.read(rowToUpdate, 4).toString();
        QString existingDept = xlsx.read(rowToUpdate, 5).toString();
        QString existingFSCCMarks = xlsx.read(rowToUpdate, 7).toString();

        // Update values based on the user input (if provided)
        xlsx.write(rowToUpdate, 2, ui->stdname->text().isEmpty() ? existingStdName : ui->stdname->text());
        xlsx.write(rowToUpdate, 8, ui->cgpa->text().isEmpty() ? existingCGPA : ui->cgpa->text());
        xlsx.write(rowToUpdate, 6, ui->matricmarks->text().isEmpty() ? existingMatricMarks : ui->matricmarks->text());
        xlsx.write(rowToUpdate, 3, ui->fthrname->text().isEmpty() ? existingFatherName : ui->fthrname->text());
        xlsx.write(rowToUpdate, 4, ui->stdmail->text().isEmpty() ? existingEmail : ui->stdmail->text());
        xlsx.write(rowToUpdate, 5, ui->stddpt->text().isEmpty() ? existingDept : ui->stddpt->text());
        xlsx.write(rowToUpdate, 7, ui->fscmarks->text().isEmpty() ? existingFSCCMarks : ui->fscmarks->text());

        // Save the changes to the Excel file
        xlsx.saveAs("C:/Users/death/Desktop/CP.xlsx");

        // Refresh the table to display the updated data
        int rowCount = xlsx.dimension().rowCount();
        ui->tableWidget->setRowCount(rowCount);
        for (int row = 1; row <= rowCount; ++row) {
            for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row, col + 1).toString());
                ui->tableWidget->setItem(row - 1, col, item);
            }
        }

        // Resize columns and rows to fit the contents
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else {
        // Handle the case where the ID is not found (display an error message, etc.)
        qDebug() << "ID not found. No data updated.";
    }
}



void finalteacherscreen::on_searchbtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Get the ID to be searched from the line edit
    QString idToSearch = ui->id->text(); // Assuming the line edit is named 'id'

    // Find the row that matches the ID
    int rowToDisplay = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row) {
        QString currentId = xlsx.read(row, 1).toString(); // ID is in the 1st column
        if (currentId == idToSearch) {
            rowToDisplay = row;
            break;
        }
    }

    // Clear the existing table contents
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    // Display the row if ID is found
    if (rowToDisplay != -1) {
        // Set the number of rows and columns in the table
        ui->tableWidget->setRowCount(1);
        int columnCount = qMin(8, xlsx.dimension().columnCount());
        ui->tableWidget->setColumnCount(columnCount);

        // Fill the table with data from the Excel file for the searched ID
        for (int col = 0; col < columnCount; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(rowToDisplay, col + 1).toString());
            ui->tableWidget->setItem(0, col, item);
        }

        // Set horizontal header labels
        QStringList headerLabels;
        for (int col = 1; col <= columnCount; ++col) {
            headerLabels << xlsx.read(1, col).toString();
        }
        ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

        // Resize columns and rows to fit the contents
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else {
        // Handle the case where the ID is not found (display an error message, etc.)
        qDebug() << "ID not found in Excel file. No data to display.";
    }
}





void finalteacherscreen::on_resetbtn_clicked()
{
    // Load Excel file
    QXlsx::Document xlsx("C:/Users/death/Desktop/CP.xlsx"); // Adjust the path accordingly

    // Clear the existing table contents
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    // Set the number of rows and columns in the table
    int rowCount = xlsx.dimension().rowCount();
    int columnCount = qMin(8, xlsx.dimension().columnCount());
    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(columnCount);

    // Fill the table with data from the Excel file for all records
    for (int row = 1; row <= rowCount; ++row) {
        for (int col = 0; col < columnCount; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row, col + 1).toString());
            ui->tableWidget->setItem(row - 1, col, item);
        }
    }

    // Set horizontal header labels
    QStringList headerLabels;
    for (int col = 1; col <= columnCount; ++col) {
        headerLabels << xlsx.read(1, col).toString();
    }
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    // Resize columns and rows to fit the contents
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}

