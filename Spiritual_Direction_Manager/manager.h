#ifndef MANAGER_H
#define MANAGER_H

#include "studentdialog.h"
#include "student.h"
#include "eventdialog.h"

#include <QMainWindow>
#include <QDialog>
#include <QDebug>
#include <QList>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Manager; }
QT_END_NAMESPACE

class Manager : public QMainWindow
{
    Q_OBJECT

public:
    Manager(QWidget *parent = nullptr);
    StudentDialog *studentdialog;
    EventDialog *eventdialog;
    ~Manager();

private slots:
    void on_pushButtonNewStudent_clicked();

    void on_pushButtonRemoveStudent_clicked();

private:
    int count = 0;
    void printCurrent_students();
    QList<Student> current_students;
    Ui::Manager *ui;
};
#endif // MANAGER_H
