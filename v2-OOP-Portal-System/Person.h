#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include <QFont>
#include <QLabel>

class person{

public:

    void hideSpecificLabels();
    void read(const QString &enrollment, QLabel *label, const QString &semesterKey, QFont &font, QWidget *parent);
    void processSemesterData(QTextStream &in, QFont &labelFont, QWidget *parent);
    void updateLabel(const QString &labelName, const QString &data, QFont &font, QWidget *parent);
};

#endif // PERSON_H
