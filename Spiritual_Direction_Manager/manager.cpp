#include "manager.h"
#include "ui_manager.h"

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

void Manager::on_pushButtonNewStudent_clicked()
{
    studentdialog = new StudentDialog();
    studentdialog->setFixedSize(400, 420);
    studentdialog->exec();

    Student someone = studentdialog->getStudent();
    qDebug(someone.first_name.toLatin1());
}
