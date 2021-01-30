#include "manager.h"
#include "ui_manager.h"

Manager::Manager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Manager)
{
    ui->setupUi(this);
    // Makes items in QTableWidget uneditable via the UI.
    ui->tableWidgetStudents->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // When selecting an item in the QTableWitdget, selected the whole row instead.
    ui->tableWidgetStudents->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Manager::~Manager()
{
    delete ui;
}

/**
 * @brief Manager::on_pushButtonNewStudent_clicked
 *
 * Initalizes the StudentDialog class, where, after user
 * inputs information, retrieves a Student, temporarily stores
 * it, creates a new EventDialog, then allows user to create a
 * list of events. The list of events are then attributed to
 * the Student.
 */
void Manager::on_pushButtonNewStudent_clicked()
{
    // New student dialog window
    studentdialog = new StudentDialog();
    studentdialog->setFixedSize(400, 420);
    studentdialog->exec();

    // Retrieves student object from StudentDialog class.
    Student new_student = studentdialog->getStudent();

    // New student events dialog window
    eventdialog = new EventDialog();
    eventdialog->setFixedSize(600, 450);
    eventdialog->setStudentNameLabel(new_student.getFirst_name(), new_student.getLast_name());
    eventdialog->exec();

    // First, retrieves events from EventDialog window,
    // and then attributes them to the new student
    new_student.setEvents(eventdialog->returnEvents());

    // Copy student data before adding student to student list
    QString student_data[] = {new_student.getFirst_name(), new_student.getLast_name(),
                             new_student.getSpiritual_advisor(), new_student.getLast_visit().toString("dd MMM yyyy"),
                              new_student.getFrequency(), QString::number(new_student.getEvents().length())};

    // Add student to the global list
    current_students.append(new_student);

    // Inserts a new row into the QTableWidget
    // Before inserting the row, must check that
    // the row we are inserting is the last row in
    // the table.
    int row_insert = ui->tableWidgetStudents->rowCount();
    ui->tableWidgetStudents->insertRow(row_insert);

    // Next, takes copied student data from student_data[]
    // and lists them into the corresponding new row
    // on the QTableWidget.
    for(int i = 0; i < ui->tableWidgetStudents->columnCount(); i++){
        ui->tableWidgetStudents->setItem(row_insert,i,new QTableWidgetItem);
        ui->tableWidgetStudents->item(row_insert,i)->setText(student_data[i]);
    }
}

/**
 * @brief Manager::on_pushButtonEditStudent_clicked
 *
 * Edit student button opens a new student dialog and
 * event dialog for the selected student, pastes the
 * student data into the dialog windows, and allows for
 * editing as usual.  When editing is finished, replaces
 * old student object & with new student object & info.
 */
void Manager::on_pushButtonEditStudent_clicked()
{
    // Need to get student from selected row.
    int selected_row = ui->tableWidgetStudents->currentRow();
    // Student row position matches position in QList.
    Student selected_student = current_students[selected_row];

    // Student info for new StudentDialog.
    QString student_info[] = {selected_student.getFirst_name(), selected_student.getLast_name(),
                           selected_student.getSpiritual_advisor(), selected_student.getFrequency()};

    // Comapred to new student dialog, this function takes
    // data from the student that will be edited and sends
    // it to the Dialog window in order to be assigned to
    // UI labels and objects.
    StudentDialog *studentdialog = new StudentDialog();
    studentdialog->setFixedSize(400, 420);
    studentdialog->studentEditSetup(student_info, selected_student.getLast_visit());
    studentdialog->exec();

    // New student object will replace old one from list
    Student temp_student = studentdialog->getStudent();

    // New student events dialog window
    EventDialog *eventdialog = new EventDialog();
    eventdialog->setFixedSize(600, 450);
    eventdialog->setStudentNameLabel(temp_student.getFirst_name(), temp_student.getLast_name());
    eventdialog->addEventsToTableWidget(selected_student.getEvents());
    eventdialog->exec();

    // Student information fully replaced
    temp_student.setEvents(eventdialog->returnEvents());

    // Temporarily store data to add to TableWidget
    QString student_data[] = {temp_student.getFirst_name(), temp_student.getLast_name(),
                             temp_student.getSpiritual_advisor(), temp_student.getLast_visit().toString("dd MMM yyyy"),
                              temp_student.getFrequency(), QString::number(temp_student.getEvents().length())};

    // Assigns edited student into running list
    current_students[selected_row] = temp_student;

    // Loop replaces data in TableWidget
    for(int i = 0; i < ui->tableWidgetStudents->columnCount(); i++){
        ui->tableWidgetStudents->item(selected_row,i)->setText(student_data[i]);
    }
}

/**
 * @brief Manager::on_pushButtonRemoveStudent_clicked
 *
 * Method removes the selected student row from the
 * widget table and also removes the corresponding index from the
 * list current_students
 */
void Manager::on_pushButtonRemoveStudent_clicked()
{
    // Must retrieve the selected row before removing it
    int row = ui->tableWidgetStudents->currentRow();
    ui->tableWidgetStudents->removeRow(row);
    // Also removes student in the global list.
    current_students.removeAt(row);
}
