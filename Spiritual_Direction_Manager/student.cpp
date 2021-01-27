#include "student.h"

Student::Student(){

}

Student::Student(QString last_name, QString first_name, QString spiritual_advisor,  QString frequency, QDate last_visit)
{
    this->last_name = last_name;
    this->first_name = first_name;
    this->spiritual_advisor = spiritual_advisor;
    this->frequency = frequency;
    this->last_visit = last_visit;
}
