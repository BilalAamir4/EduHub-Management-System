#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"

class teacher:public person{

private:

public:
 void write(const QString &enrollment, const QString &semesterKey, const QString &updatedDetails);


};

#endif // TEACHER_H
