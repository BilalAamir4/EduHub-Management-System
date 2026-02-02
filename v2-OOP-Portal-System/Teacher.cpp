#include "teacher.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

void teacher::write(const QString &enrollment, const QString &semesterKey, const QString &updatedDetails)
{
    QString directoryPath = "C:/Users/death/Desktop"; // Use the specified absolute path
    QString filePath = directoryPath + "/" + enrollment + ".txt";

    qDebug() << "File path: " << filePath;

    QFile file(filePath);

    if (!file.exists()) {
        qDebug() << "File does not exist. Creating a new file.";
    }

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::critical(nullptr, "Error", "Unable to create or open the file for writing.");
            qDebug() << "Error opening file for writing: " << file.errorString();
            return;
        }
        qDebug() << "File created successfully.";
    } else {
        qDebug() << "File opened successfully for reading.";
    }

    QTextStream in(&file);
    QString data = in.readAll();
    file.close();

    QStringList lines = data.split("\n", Qt::SkipEmptyParts);

    QFile outfile(directoryPath + "/temp.txt");
    if (!outfile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, "Error", "Unable to open 'temp.txt' for writing.");
        qDebug() << "Error opening temp file for writing: " << outfile.errorString();
        return;
    }
    QTextStream out(&outfile);

    bool semesterFound = false;

    for (int i = 0; i < lines.size(); ++i) {
        QString line = lines[i];
        if (line.startsWith(semesterKey)) {
            out << semesterKey << "\n" << updatedDetails << "\n";
            semesterFound = true;
            // Skip the old details of the current semester
            while (++i < lines.size() && !lines[i].startsWith("Semester")) {}
            --i;
        } else {
            out << line << "\n";
        }
    }

    if (!semesterFound) {
        out << semesterKey << "\n" << updatedDetails << "\n";
    }

    outfile.close();

    // Remove the original file and rename the temporary file
    if (!QFile::remove(filePath)) {
        QMessageBox::critical(nullptr, "Error", "Unable to remove the original file.");
        qDebug() << "Error removing original file: " << filePath;
        return;
    }
    if (!QFile::rename(directoryPath + "/temp.txt", filePath)) {
        QMessageBox::critical(nullptr, "Error", "Unable to rename the temporary file to the original file.");
        qDebug() << "Error renaming temp file to: " << filePath;
    } else {
        qDebug() << "File write operation completed successfully.";
    }
}
