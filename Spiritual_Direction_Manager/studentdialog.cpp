#include "studentdialog.h"
#include "ui_studentdialog.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_buttonBox_accepted()
{
    QString first_name = ui->lineEditFirstName->text();
    QString last_name = ui->lineEditLastName->text();
    QString frequency = ui->comboBoxVisitFrequency->currentText();
    QString spiritual_advisor = ui->comboBoxSpiritualAdvisor->currentText();
    QDate last_visit = ui->dateEdit->date();

    student.first_name = first_name;
    student.last_name = last_name;
    student.frequency = frequency;
    student.spiritual_advisor = spiritual_advisor;
    student.last_visit = last_visit;
}

Student StudentDialog::getStudent(){
    return student;
}
