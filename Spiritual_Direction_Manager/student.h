#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QDate>

class Student
{
public:
    QString first_name;
    QString last_name;
    QString spiritual_advisor;
    QString frequency;
    QDate last_visit;
    Student();
    Student(QString first_name, QString last_name, QString spiritual_advisor, QString frequency, QDate last_visit);
};

#endif // STUDENT_H
