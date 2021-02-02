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

/**
 * @brief StudentDialog::studentEditSetup
 * @param student_info
 * @param last_visit
 * @param events
 *
 * In the student_info array, data (QStrings) is organized in this order:
 * 0 = student_first_name
 * 1 = student_last_name
 * 2 = student_spiritual_advisor
 * 3 = student_visit_frequency
 */
void StudentDialog::studentEditSetup(QString student_info[], QDate last_visit){
    // Change window label to "Student Edit" instead of "New Student"
    ui->labelNewStudent->setText("Edit Student");

    // Sets the name of text edits to the student name
    ui->lineEditFirstName->setText(student_info[0]);
    ui->lineEditLastName->setText(student_info[1]);

    // Sets up combo box to select the spiritual advisor the student
    int combo_box_advisor_index = ui->comboBoxSpiritualAdvisor->findText(student_info[2]);
    ui->comboBoxSpiritualAdvisor->setCurrentIndex(combo_box_advisor_index);

    // Sets up combo box to select the visit frequency of the student being edited
    int combo_box_visit_frequency_index = ui->comboBoxVisitFrequency->findText(student_info[3]);
    ui->comboBoxVisitFrequency->setCurrentIndex(combo_box_visit_frequency_index);

    // Sets up QDate to be equal to student's last visit
    ui->dateEdit->setDate(last_visit);
}

/**
 * @brief StudentDialog::on_buttonBox_accepted
 *
 * When user hits "Ok", retrieve student data from UI
 * and then apply to student object.
 */
void StudentDialog::on_buttonBox_accepted()
{
    student.setFirst_name(ui->lineEditFirstName->text());
    student.setLast_name(ui->lineEditLastName->text());
    student.setFrequency(ui->comboBoxVisitFrequency->currentText());
    student.setSpiritual_advisor(ui->comboBoxSpiritualAdvisor->currentText());
    student.setLast_visit(ui->dateEdit->date());
}

/**
 * @brief StudentDialog::getStudent
 * @return Student
 *
 * Retrieves the global student object with all data.
 */
Student StudentDialog::getStudent(){
    return student;
}
