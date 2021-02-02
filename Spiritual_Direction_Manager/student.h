#ifndef STUDENT_H
#define STUDENT_H

#include "event.h"

#include <QString>
#include <QDate>

class Student
{

public:
    Student();
    Student(QString first_name, QString last_name, QString spiritual_advisor, QString frequency, QDate last_visit);
    QString studentInfo();
    // Getters and setters
    QString getFirst_name() const;
    void setFirst_name(const QString &value);

    QString getLast_name() const;
    void setLast_name(const QString &value);

    QString getSpiritual_advisor() const;
    void setSpiritual_advisor(const QString &value);

    QString getFrequency() const;
    void setFrequency(const QString &value);

    QDate getLast_visit() const;
    void setLast_visit(const QDate &value);

    QList<Event> getEvents() const;
    void setEvents(const QList<Event> &value);

private:
    QString first_name;
    QString last_name;
    QString spiritual_advisor;
    QString frequency;
    QDate last_visit;
    QList<Event> events;
};

#endif // STUDENT_H
