#include "manager.h"
#include "ui_manager.h"
#include "student.h"

Manager::Manager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Manager)
{
    ui->setupUi(this);
}

Manager::~Manager()
{
    delete ui;
}


void Manager::on_buttonNewStudent_clicked()
{
    Student student;
    student.setModal(true);
    student.setFixedSize(QSize{400, 300});
    student.exec();
}
