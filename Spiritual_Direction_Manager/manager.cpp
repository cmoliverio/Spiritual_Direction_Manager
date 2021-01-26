#include "manager.h"
#include "ui_manager.h"


Manager::Manager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Manager)
{
    ui->setupUi(this);
    connect(ui->pushButtonNewStudent,SIGNAL(clicked()),this,SLOT(on_pushButtonNewStudent_clicked()));
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_pushButtonNewStudent_clicked()
{
    studentdialog = new StudentDialog();
    studentdialog->setModal(true);
    studentdialog->exec();
}
