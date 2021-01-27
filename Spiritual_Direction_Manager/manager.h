#ifndef MANAGER_H
#define MANAGER_H

#include "studentdialog.h"
#include "student.h"

#include <QMainWindow>
#include <QDialog>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Manager; }
QT_END_NAMESPACE

class Manager : public QMainWindow
{
    Q_OBJECT

public:
    Manager(QWidget *parent = nullptr);
    StudentDialog *studentdialog;
    ~Manager();

private slots:
    void on_pushButtonNewStudent_clicked();

private:
    Ui::Manager *ui;
};
#endif // MANAGER_H
