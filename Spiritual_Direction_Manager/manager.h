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
    ~Manager();

private slots:
    // Functions for buttons in UI
    void on_pushButtonNewStudent_clicked();
    void on_pushButtonRemoveStudent_clicked();
    void on_pushButtonEditStudent_clicked();

private:
    // Global objects for Dialog Windows
    StudentDialog *studentdialog;
    EventDialog *eventdialog;
    //Running list of students
    QList<Student> current_students;
    Ui::Manager *ui;
};
#endif // MANAGER_H
