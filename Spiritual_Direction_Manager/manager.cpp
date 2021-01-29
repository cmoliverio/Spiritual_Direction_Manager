#include "manager.h"
#include "ui_manager.h"

Manager::Manager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Manager)
{
    ui->setupUi(this);
    ui->tableWidgetStudents->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetStudents->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Manager::~Manager()
{
    delete ui;
}

void Manager::on_pushButtonNewStudent_clicked()
{
    // New student dialog window
    studentdialog = new StudentDialog();
    studentdialog->setFixedSize(400, 420);
    studentdialog->exec();

    // Get student info
    Student new_student = studentdialog->getStudent();

    // New student events dialog window
    eventdialog = new EventDialog();
    eventdialog->setFixedSize(600, 450);
    eventdialog->setStudentNameLabel(new_student.getFirst_name(), new_student.getLast_name());
    eventdialog->exec();

    // Return event info for specified student
    new_student.setEvents(eventdialog->returnEvents());

    // Adds student to running list

    QString student_data[] = {new_student.getFirst_name(), new_student.getLast_name(),
                             new_student.getSpiritual_advisor(), new_student.getLast_visit().toString("dd MMM yyyy"),
                              new_student.getFrequency(), QString::number(new_student.getEvents().length())};

    current_students.append(new_student);

    int row_insert = ui->tableWidgetStudents->rowCount();
    ui->tableWidgetStudents->insertRow(row_insert);

    for(int i = 0; i < ui->tableWidgetStudents->columnCount(); i++){
        ui->tableWidgetStudents->setItem(row_insert,i,new QTableWidgetItem);
        ui->tableWidgetStudents->item(row_insert,i)->setText(student_data[i]);
    }
}

void Manager::on_pushButtonRemoveStudent_clicked()
{
    int row = ui->tableWidgetStudents->currentRow();
    ui->tableWidgetStudents->removeRow(row);
    current_students.removeAt(row);
}

void Manager::printCurrent_students(){
    for (int i = 0; i < current_students.length(); i++) {
        //Event student_event = current_students[i].getEvents().at(i);
        //qDebug() << current_students[i].getFirst_name();
    }
}

