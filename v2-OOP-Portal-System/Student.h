#ifndef STUDENT_H
#define STUDENT_H
#include"person.h"

#include <QString>
#include <QFont>
#include <QLabel>

class student :public person{


public:
    using person::read;
    using person::processSemesterData;
    using person::updateLabel;
    using person::hideSpecificLabels;

};

#endif // STUDENT_H
