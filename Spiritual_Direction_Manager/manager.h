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
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QDir>

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
    void on_pushButtonNewStudent_clicked();
    void on_pushButtonRemoveStudent_clicked();
    void on_pushButtonEditStudent_clicked();
    void on_actionSave_triggered();

    void on_pushButtonSave_clicked();

    void on_pushButtonMatchStudents_clicked();

private:
    StudentDialog *studentdialog;
    EventDialog *eventdialog;
    QList<Student> current_students;    // Running list of students
    Ui::Manager *ui;

    bool isOverdue(QString frequency, QDate last_visit);
    void compareDateTime(Student student, QTime time_start, QTime time_end);
    void appendStudent(Student new_student);
    void loadStudents();
    QJsonArray getJsonArray();
};
#endif // MANAGER_H
