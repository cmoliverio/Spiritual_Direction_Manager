#include "event.h"

Event::Event()
{

}

Event::Event(QTime time_start, QTime time_end, QString day_of_week, QString description){
    this->time_start = time_start;
    this->time_end = time_end;
    this->day_of_week = day_of_week;
    this->description = description;
}

QString Event::eventInfo(){
    QString event_info = getDay_of_week().chopped(3) + "\t" + getTime_start().toString("hh:mm ap")
            + "\t" + getTime_end().toString("hh:mm ap") + "\t";
    if(getDescription().length() >=9){
        event_info = event_info + getDescription().chopped(getDescription().length() - 8) + "..";
    }else{
        event_info = event_info + getDescription();
    }
    return event_info;
}

QTime Event::getTime_start() const
{
    return time_start;
}

void Event::setTime_start(const QTime &value)
{
    time_start = value;
}

QTime Event::getTime_end() const
{
    return time_end;
}

void Event::setTime_end(const QTime &value)
{
    time_end = value;
}

QString Event::getDay_of_week() const
{
    return day_of_week;
}

void Event::setDay_of_week(const QString &value)
{
    day_of_week = value;
}

QString Event::getDescription() const
{
    return description;
}

void Event::setDescription(const QString &value)
{
    description = value;
}
