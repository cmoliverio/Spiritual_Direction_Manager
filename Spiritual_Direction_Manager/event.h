#ifndef EVENT_H
#define EVENT_H

#include <QTime>
#include <QTextBlock>

class Event
{
public:
    Event();
    Event(QTime time_start, QTime time_end, QString day_of_week, QString description);
    QString eventInfo();

    QTime getTime_start() const;
    void setTime_start(const QTime &value);

    QTime getTime_end() const;
    void setTime_end(const QTime &value);

    QString getDay_of_week() const;
    void setDay_of_week(const QString &value);

    QString getDescription() const;
    void setDescription(const QString &value);

private:
    QTime time_start;
    QTime time_end;
    QString day_of_week;
    QString description;
};

#endif // EVENT_H
