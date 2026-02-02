#include "person.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

void person::read(const QString &enrollment, QLabel *label, const QString &semesterKey, QFont &font, QWidget *parent)
{
    QString directoryPath = "C:/Users/death/Desktop"; // Use the specified absolute path
    QString filePath = directoryPath + "/" + enrollment + ".txt";

    qDebug() << "File path: " << filePath;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(nullptr, "Error", "Data for the student does not exist in the database.");
        qDebug() << "Failed to open file for reading: " << file.errorString();
        return;
    }

    QTextStream in(&file);
    QString line;
    bool semesterFound = false;

    while (!in.atEnd()) {
        line = in.readLine().trimmed();
        if (line == semesterKey) {
            semesterFound = true;
            break;
        }
    }

    if (semesterFound) {
        qDebug() << "Semester key found: " << semesterKey;
        processSemesterData(in, font, parent);
    } else {
        QMessageBox::critical(nullptr, "Error", semesterKey + " details not found for this student.");
        qDebug() << semesterKey << " details not found for this student.";
    }

    file.close();
}

void person::processSemesterData(QTextStream &in, QFont &labelFont, QWidget *parent)
{
    QString line;
    for (int i = 1; i <= 6; ++i) {
        line = in.readLine().trimmed();
        qDebug() << "Read data for Quiz" << i << ": " << line;
        updateLabel("Quiz" + QString::number(i), line, labelFont, parent);

        line = in.readLine().trimmed();
        qDebug() << "Read data for Assignment" << i << ": " << line;
        updateLabel("Assignment" + QString::number(i), line, labelFont, parent);

        line = in.readLine().trimmed();
        qDebug() << "Read data for mids" << i << ": " << line;
        updateLabel("mids" + QString::number(i), line, labelFont, parent);

        line = in.readLine().trimmed();
        qDebug() << "Read data for Finals" << i << ": " << line;
        updateLabel("Finals" + QString::number(i), line, labelFont, parent);
    }
}

void person::updateLabel(const QString &labelName, const QString &data, QFont &font, QWidget *parent)
{
    qDebug() << "Updating label" << labelName << "with data:" << data;

    QLabel *label = parent->findChild<QLabel*>(labelName);
    if (label) {
        QString marks = data.split(":").last().trimmed();
        label->setText(marks);
        label->setFont(font);
        qDebug() << "Label" << labelName << "updated with" << marks;
    } else {
        qDebug() << "Label not found for" << labelName;
    }
}
void person::hideSpecificLabels()
{
    QStringList labelNames =
        {
            "quiz5", "quiz6",
            "assign5", "assign6",
            "mids5", "mids6",
            "finals5", "finals6"
        };
}

