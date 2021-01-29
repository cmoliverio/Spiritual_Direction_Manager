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
    student.setFirst_name(ui->lineEditFirstName->text());
    student.setLast_name(ui->lineEditLastName->text());
    student.setFrequency(ui->comboBoxVisitFrequency->currentText());
    student.setSpiritual_advisor(ui->comboBoxSpiritualAdvisor->currentText());
    student.setLast_visit(ui->dateEdit->date());
}

Student StudentDialog::getStudent(){
    return student;
}
