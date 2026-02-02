#include "finalteacherscreen.h"
#include "ui_finalteacherscreen.h"
#include "xlsxdocument.h"
#include <QMessageBox>

finalteacherscreen::finalteacherscreen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::finalteacherscreen)
{
    ui->setupUi(this);

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");

    ui->tableWidget->setRowCount(xlsx.dimension().rowCount());
    int columnCount = qMin(8, xlsx.dimension().columnCount());
    ui->tableWidget->setColumnCount(columnCount);

    // Set the header labels
    QStringList headers;
    headers << "Enrollment" << "Student Name" << "Father Name" << "Email"
            << "Department" << "Matric Marks" << "FSC Marks" << "CGPA";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < xlsx.dimension().rowCount(); ++row)
    {
        for (int col = 0; col < columnCount; ++col)
        {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row + 1, col + 1).toString());
            ui->tableWidget->setItem(row, col, item);
        }
    }
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();

}

finalteacherscreen::~finalteacherscreen()
{
    delete ui;
}

void finalteacherscreen::on_addbtn_clicked()
{

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");

    if (ui->roll_no->text().isEmpty()) {
        QMessageBox::warning(this, "Warning", " Enrollment is empty. Please enter a valid enrollment.");
        return;
    }

    int newRow = 1;
    while (!xlsx.read(newRow, 1).isNull() && xlsx.read(newRow, 1).toString() != "")
    {
        ++newRow;
    }

    bool allConditionsMet = true;

    QRegularExpression emailPattern("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
    if (!emailPattern.match(ui->stdmail->text()).hasMatch()) {
        QMessageBox::warning(this, "Warning", "Please enter a valid email address.");
        allConditionsMet = false;
    }

    if (ui->stdname->text().isEmpty() || ui->stddpt->text().isEmpty() || ui->stdmail->text().isEmpty() ||
        ui->fthrname->text().isEmpty() || ui->fscmarks->text().isEmpty() || ui->matricmarks->text().isEmpty() ||
        ui->cgpa->text().isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Please fill in all required fields.");
        allConditionsMet = false;
    }

    if (!isAlphabetic(ui->stdname->text())) {
        QMessageBox::warning(this, "Warning", "Please enter a valid Student Name.");
        allConditionsMet = false;
    }


    if (!isAlphabetic(ui->stddpt->text())) {
        QMessageBox::warning(this, "Warning", "Please enter a valid Department Name .");
        allConditionsMet = false;
    }


    if (!isAlphabetic(ui->fthrname->text()))
    {
        QMessageBox::warning(this, "Warning", "Please enter a valid Father Name.");
        allConditionsMet = false;
    }


    if (!isNumeric(ui->cgpa->text())) {
        QMessageBox::warning(this, "Warning", "Please enter a valid  value for CGPA.");
        allConditionsMet = false;
    }

    if (!isNumeric(ui->matricmarks->text())) {
        QMessageBox::warning(this, "Warning", "Please enter a valid value for Matric Marks.");
        allConditionsMet = false;
    }

    if (!isNumeric(ui->fscmarks->text())) {
        QMessageBox::warning(this, "Warning", "Please enter a valid value for FSC Marks.");
        allConditionsMet = false;
    }


    if (allConditionsMet)
    {
        xlsx.write(newRow, 1, ui->roll_no->text());      // ID in the 1st column
        xlsx.write(newRow, 2, ui->stdname->text());      // stddname in the 2nd column
        xlsx.write(newRow, 8, ui->cgpa->text());         // cggpa in the 8th column
        xlsx.write(newRow, 6, ui->matricmarks->text());  // matrcmarks in the 6th column
        xlsx.write(newRow, 3, ui->fthrname->text());     // fathername in the 3rd column
        xlsx.write(newRow, 4, ui->stdmail->text());      // email in the 4th column
        xlsx.write(newRow, 5, ui->stddpt->text());       // department in the 5th column
        xlsx.write(newRow, 7, ui->fscmarks->text());     // fsccmarks in the 7th column


        xlsx.saveAs("C:/Users/death/Desktop/Project/CP.xlsx");

        // Refresh the table to display the updated data
        ui->tableWidget->clearContents();
        int rowCount = xlsx.dimension().rowCount();
        ui->tableWidget->setRowCount(rowCount);
        for (int row = 0; row < rowCount; ++row)
        {
            for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row + 1, col + 1).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

        // Resize columns and rows to fit the contents
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
}


void finalteacherscreen::on_deletebtn_clicked()
{
    QString enrollmentToDelete = ui->roll_no->text().trimmed();

    if (enrollmentToDelete.isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Please enter the Enrollment to be deleted.");
        return;
    }

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");

    int rowToDelete = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row)
    {
        QString currentEnrollment = xlsx.read(row, 1).toString();
        if (currentEnrollment == enrollmentToDelete)
        {
            rowToDelete = row;
            break;
        }
    }

    if (rowToDelete != -1)
    {
        int lastRow = xlsx.dimension().rowCount();
        for (int row = rowToDelete; row < lastRow; ++row)
        {
            for (int col = 1; col <= xlsx.dimension().columnCount(); ++col)
            {
                xlsx.write(row, col, xlsx.read(row + 1, col));
            }
        }

        for (int col = 1; col <= xlsx.dimension().columnCount(); ++col)
        {
            xlsx.write(lastRow, col, QVariant());
        }

        xlsx.saveAs("C:/Users/death/Desktop/Project/CP.xlsx");

        ui->tableWidget->clearContents();
        ui->tableWidget->setRowCount(0);

        int rowCount = xlsx.dimension().rowCount();
        int colCount = qMin(8, xlsx.dimension().columnCount());
        ui->tableWidget->setRowCount(rowCount - 1);

        for (int row = 0; row < rowCount - 1; ++row)
        {
            for (int col = 0; col < colCount; ++col)
            {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row + 1, col + 1).toString());
                ui->tableWidget->setItem(row, col, item);
            }
        }

        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else
    {
        QMessageBox::warning(this, "Warning", "Enrollment not found. Please enter a valid Enrollment.");
    }
}

void finalteacherscreen::on_updatebtn_clicked()
{
    QString enrollmentToUpdate = ui->roll_no->text().trimmed();
    if (enrollmentToUpdate.isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Please enter the Enrollment which needs to be updated.");
        return;
    }

    QString rollno = ui->roll_no->text().trimmed();
    QString stdName = ui->stdname->text().trimmed();
    QString stdDept = ui->stddpt->text().trimmed();
    QString stdMail = ui->stdmail->text().trimmed();
    QString fthrName = ui->fthrname->text().trimmed();
    QString fscMarks = ui->fscmarks->text().trimmed();
    QString matricMarks = ui->matricmarks->text().trimmed();
    QString cgpa = ui->cgpa->text().trimmed();

    // Input validation
    if (!stdName.isEmpty() && !isAlphabetic(stdName)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid Student Name.");
        return;
    }

    if (!rollno.isEmpty() && !isNumeric(rollno)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid roll number.");
        return;
    }

    if (!stdDept.isEmpty() && !isAlphabetic(stdDept)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid Department Name.");
        return;
    }

    if (!fthrName.isEmpty() && !isAlphabetic(fthrName)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid Father Name.");
        return;
    }

    if (!cgpa.isEmpty() && !isNumeric(cgpa)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid value for CGPA.");
        return;
    }

    if (!matricMarks.isEmpty() && !isNumeric(matricMarks)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid value for Matric Marks.");
        return;
    }

    if (!fscMarks.isEmpty() && !isNumeric(fscMarks)) {
        QMessageBox::warning(this, "Warning", "Please enter a valid value for FSC Marks.");
        return;
    }

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx");

    int rowToUpdate = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row)
    {
        QString currentEnrollment = xlsx.read(row, 1).toString();
        if (currentEnrollment == enrollmentToUpdate)
        {
            rowToUpdate = row;
            break;
        }
    }

    if (rowToUpdate != -1)
    {
        // Update values based on the user input (if provided)
        if (!stdName.isEmpty()) xlsx.write(rowToUpdate, 2, stdName);
        if (!cgpa.isEmpty()) xlsx.write(rowToUpdate, 8, cgpa);
        if (!matricMarks.isEmpty()) xlsx.write(rowToUpdate, 6, matricMarks);
        if (!fthrName.isEmpty()) xlsx.write(rowToUpdate, 3, fthrName);
        if (!stdMail.isEmpty()) xlsx.write(rowToUpdate, 4, stdMail);
        if (!stdDept.isEmpty()) xlsx.write(rowToUpdate, 5, stdDept);
        if (!fscMarks.isEmpty()) xlsx.write(rowToUpdate, 7, fscMarks);

        xlsx.saveAs("C:/Users/death/Desktop/Project/CP.xlsx");

        // Refresh the table to display the updated data
        int rowCount = xlsx.dimension().rowCount();
        ui->tableWidget->setRowCount(rowCount);
        for (int row = 1; row <= rowCount; ++row) {
            for (int col = 0; col < ui->tableWidget->columnCount(); ++col)
            {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row, col + 1).toString());
                ui->tableWidget->setItem(row - 1, col, item);
            }
        }

        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else
    {
        QMessageBox::warning(this, "Warning", "Enrollment not found. No data updated.");
    }
}


void finalteacherscreen::on_searchbtn_clicked()
{
    QString enrollmentToSearch = ui->roll_no->text().trimmed(); // Assuming the line edit is named 'roll_no'

    // Check if the enrollment field is empty
    if (enrollmentToSearch.isEmpty())
    {
        QMessageBox::warning(this, "Warning", "Please enter an enrollment number.");
        return;
    }

    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx"); // Adjust the path accordingly

    int rowToDisplay = -1;
    for (int row = 1; row <= xlsx.dimension().rowCount(); ++row)
    {
        QString currentEnrollment = xlsx.read(row, 1).toString(); // Enrollment is in the 1st column
        if (currentEnrollment == enrollmentToSearch)
        {
            rowToDisplay = row;
            break;
        }
    }

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    if (rowToDisplay != -1) {
        ui->tableWidget->setRowCount(1);
        int columnCount = qMin(8, xlsx.dimension().columnCount());
        ui->tableWidget->setColumnCount(columnCount);

        for (int col = 0; col < columnCount; ++col)
        {
            QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(rowToDisplay, col + 1).toString());
            ui->tableWidget->setItem(0, col, item);
        }

        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
    else {
        QMessageBox::warning(this, "Warning", "Enrollment not found in Excel file. No data to display.");
    }
}


void finalteacherscreen::on_resetbtn_clicked()
{
    QXlsx::Document xlsx("C:/Users/death/Desktop/Project/CP.xlsx"); // Adjust the path accordingly

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    int rowCount = xlsx.dimension().rowCount();
    int columnCount = qMin(8, xlsx.dimension().columnCount());
    ui->tableWidget->setRowCount(rowCount);
    ui->tableWidget->setColumnCount(columnCount);

    int visibleRowCount = 0;
    for (int row = 1; row <= rowCount; ++row)
    {
        if (!ui->tableWidget->isRowHidden(row - 1))
        {
            for (int col = 0; col < columnCount; ++col)
            {
                QTableWidgetItem *item = new QTableWidgetItem(xlsx.read(row, col + 1).toString());
                ui->tableWidget->setItem(visibleRowCount, col, item);
            }
            ++visibleRowCount;
        }
    }

    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->resizeRowsToContents();
}
void finalteacherscreen::on_criteria_clicked()
{
    criteria = new Criteria(this);
    criteria->show();
}


// Function to check if a string contains only alphabetic characters
bool finalteacherscreen::isAlphabetic(const QString& str)
{
    QRegularExpression pattern(R"([A-Za-z]+)");
    return pattern.match(str).hasMatch();
}

// Function to check if a string contains only digits
bool finalteacherscreen::isNumeric(const QString& str)
{
    QRegularExpression pattern(R"(\d+)");
    return pattern.match(str).hasMatch();
}

