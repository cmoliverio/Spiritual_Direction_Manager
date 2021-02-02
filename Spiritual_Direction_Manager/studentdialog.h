#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include <QDebug>
#include "student.h"

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = nullptr);
    void studentEditSetup(QString student_info[], QDate last_visit);
    Student getStudent();
    ~StudentDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Student student;
    Ui::StudentDialog *ui;
};

#endif // STUDENTDIALOG_H
