#include "student.h"

Student::Student(){
    // Empty constructor
}

Student::Student(QString last_name, QString first_name, QString spiritual_advisor,  QString frequency, QDate last_visit)
{
    this->last_name = last_name;
    this->first_name = first_name;
    this->spiritual_advisor = spiritual_advisor;
    this->frequency = frequency;
    this->last_visit = last_visit;
}

QString Student::studentInfo(){
    //QString name = getFirst_name() + getLast_name().chopped(getLast_name().length() - 1) + ".";
    //return name + "\t: " + events.length() + "\t";
}

// Getters and setters
QString Student::getFirst_name() const
{
    return first_name;
}

void Student::setFirst_name(const QString &value)
{
    first_name = value;
}

QString Student::getLast_name() const
{
    return last_name;
}

void Student::setLast_name(const QString &value)
{
    last_name = value;
}

QString Student::getSpiritual_advisor() const
{
    return spiritual_advisor;
}

void Student::setSpiritual_advisor(const QString &value)
{
    spiritual_advisor = value;
}

QString Student::getFrequency() const
{
    return frequency;
}

void Student::setFrequency(const QString &value)
{
    frequency = value;
}

QDate Student::getLast_visit() const
{
    return last_visit;
}

void Student::setLast_visit(const QDate &value)
{
    last_visit = value;
}

QList<Event> Student::getEvents() const
{
    return events;
}

void Student::setEvents(const QList<Event> &value)
{
    events = value;
}
