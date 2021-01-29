#ifndef EVENTDIALOG_H
#define EVENTDIALOG_H

#include "student.h"
#include "event.h"

#include <QDebug>
#include <QDialog>
#include <QList>

namespace Ui {
class EventDialog;
}

class EventDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EventDialog(QWidget *parent = nullptr);
    void setStudentNameLabel(QString first_name, QString last_name);
    QList<Event> returnEvents();
    ~EventDialog();

private slots:
    void on_pushButtonAddEvent_clicked();

    void on_pushButtonRemoveEvent_clicked();

    void on_buttonBox_accepted();

private:
    void printEvents();
    QList<Event> events;
    Student current_student;
    Ui::EventDialog *ui;
};

#endif // EVENTDIALOG_H
