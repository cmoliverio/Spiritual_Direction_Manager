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

    // Load students
    loadStudents();
}

Manager::~Manager()
{
    delete ui;
}

/**
 * @brief Manager::loadStudents
 *
 * At application launch, finds file describing
 * dictionary of student information and loads them
 * into the app.
 */
void Manager::loadStudents(){
    QFile dictionary(QDir::currentPath() + "/" + "dictionary.json");
    dictionary.open(QIODevice::ReadOnly);

    QString string_doc = dictionary.readAll();
    QJsonDocument student_doc = QJsonDocument::fromJson(string_doc.toUtf8());

    if(student_doc.array().size() > 0){
        // Parse students
        for(int i = 0; i < student_doc.array().size(); i++){
            // Student to get
            QJsonValue value = student_doc.array().at(i);

            // Student info
            QString first_name = value.toObject().find("First Name")->toString();
            QString last_name = value.toObject().find("Last Name")->toString();
            QString spiritual_advisor = value.toObject().find("Spiritual Advisor")->toString();
            QString frequency = value.toObject().find("Frequency")->toString();
            QDate last_visit = QDate::fromString(value.toObject().find("Last Visit")->toString(), "yyyy-MM-dd");

            // Creating student from file object
            Student *student = new Student();
            student->setFirst_name(first_name);
            student->setLast_name(last_name);
            student->setFrequency(frequency);
            student->setLast_visit(last_visit);
            student->setSpiritual_advisor(spiritual_advisor);

            QList<Event> events;
            QJsonArray event_objects = value.toObject().find("Events")->toArray();
            for(int j = 0; j < event_objects.size(); j++){
                Event single_event;

                // Retrieve data from json file
                QString day_of_week = event_objects[j].toObject().find("Day of Week")->toString();
                QString description = event_objects[j].toObject().find("Description")->toString();
                QTime time_start = QTime::fromString(event_objects[j].toObject().find("Time Start")->toString(), "hh:mm:ss.zzz");
                QTime time_end = QTime::fromString(event_objects[j].toObject().find("Time End")->toString(), "hh:mm:ss.zzz");

                // Assign data to single event object
                single_event.setDay_of_week(day_of_week);
                single_event.setDescription(description);
                single_event.setTime_start(time_start);
                single_event.setTime_end(time_end);

                // Add event to list for student
                events.append(single_event);
            }

            student->setEvents(events);

            appendStudent(*student);
        }
    }
}

/**
 * @brief Manager::appendStudent
 * @param new_student
 *
 * Helper function that uses the student from the paramters
 * to add to global list and then add to TableWidget.
 */
void Manager::appendStudent(Student new_student){
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

    // Adds student to widget list and to global list.
    appendStudent(new_student);
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

/**
 * @brief Manager::on_pushButtonSave_clicked
 *
 * See void Manager::on_actionSave_triggered
 */
void Manager::on_pushButtonSave_clicked()
{
    on_actionSave_triggered();
}

/**
 * @brief Manager::on_actionSave_triggered
 *
 *  When pushed, will rewrite list of students from
 *  TableWidget and global list to a json QFile.
 *  Must be performed.
 */
void Manager::on_actionSave_triggered()
{
    // Creates file in same directory as executable.
    QFile dictionary(QDir::currentPath() + "/" + "dictionary.json");
    dictionary.open(QIODevice::WriteOnly);

    QJsonDocument students_document(getJsonArray());
    dictionary.write(students_document.toJson());
}

/**
 * @brief Manager::getJsonArray
 * @return
 *
 * Returns the listing of students that will be
 * written to JsonDocument. See loadStudents() for
 * reading from JsonDocument.
 */
QJsonArray Manager::getJsonArray(){
    QJsonValue value;
    QJsonArray listing;

    for (int i = 0; i < current_students.length(); i++){
        QJsonObject student;
        QJsonArray events;
        QJsonObject event;

        // Events are stored into an event array
        for(int j = 0; j < current_students[i].getEvents().length();j++){
            event.insert("Time Start", value.fromVariant(current_students[i].getEvents().at(j).getTime_start()));
            event.insert("Time End", value.fromVariant(current_students[i].getEvents().at(j).getTime_end()));
            event.insert("Day of Week", value.fromVariant(current_students[i].getEvents().at(j).getDay_of_week()));
            event.insert("Description", value.fromVariant(current_students[i].getEvents().at(j).getDescription()));
            // Then added to list of events
            events.push_back(event);
        }

        // Student details, order in Json file is not the same as written.
        student.insert("First Name", value.fromVariant(current_students[i].getFirst_name()));
        student.insert("Last Name", value.fromVariant(current_students[i].getLast_name()));
        student.insert("Spiritual Advisor", value.fromVariant(current_students[i].getSpiritual_advisor()));
        student.insert("Frequency", value.fromVariant(current_students[i].getFrequency()));
        student.insert("Last Visit", value.fromVariant(current_students[i].getLast_visit()));
        student.insert("Events", events);

        listing.push_back(student);
    }

    return listing;
}

/**
 * @brief Manager::on_pushButtonMatchStudents_clicked
 *
 * Sorts through all existing students to see if specifications
 * of meeting are met for individual student.  For students
 * that fit meeting criteria, they are added to the visible list.
 */
void Manager::on_pushButtonMatchStudents_clicked()
{
    ui->listWidget->clear();

    QString day_of_week = ui->comboBoxDayOfWeek->currentText();
    QString spiritual_advisor = ui->comboBoxSpiritualAdvisor->currentText();
    QTime time_start = ui->timeStart->time();
    QTime time_end = ui->timeEnd->time();

    for(int i = 0; i < current_students.size(); i++){

        bool has_correct_advisor = false;
        bool overdue;

        if(current_students[i].getSpiritual_advisor() == spiritual_advisor) { has_correct_advisor = true; }
        overdue = isOverdue(current_students[i].getFrequency(), current_students[i].getLast_visit());

        // When advisor and overdue match, check events to see if they conflict
        if(overdue && has_correct_advisor){
            bool conflicts = false;
            for(int j = 0; j < current_students[i].getEvents().size(); j++){
                if(current_students[i].getEvents().at(j).getDay_of_week() == day_of_week){
                    QTime student_event_start = current_students[i].getEvents().at(j).getTime_start();
                    QTime student_event_end = current_students[i].getEvents().at(j).getTime_end();

                    // This complicated mess of a boolean statement
                    // checks to see if the time that spiritual direction starts
                    // takes place during an event. It also checks if the time end
                    // of spiritual direction takes place during an event.
                    // REMEMBER:: times LATER in the day return a GREATER value:
                    // such that: 5:00PM < 6:00PM is TRUE
                    // e.g. 7:00 PM > 3:00 AM is TRUE
                    // e.g. 12:00 PM < 10:00 AM is FALSE
                    if((student_event_start < time_end && student_event_end > time_start)
                            || (student_event_end > time_start && student_event_end < time_end)){
                        conflicts = true;
                    }
                }
            }

            if(conflicts == false){
                ui->listWidget->addItem(current_students[i].getFirst_name()
                                        + " " + current_students[i].getLast_name());
            }
        }
    }
}


bool Manager::isOverdue(QString frequency, QDate last_visit){
    // Visit frequencies can be
    // Every Week
    // Every 2 Weeks
    // Every 3 Weeks
    // Every Month
    // Every 2 Months

    if(frequency == "Every Week" && last_visit.daysTo(QDate::currentDate()) > 7){
        return true;
    }

    if(frequency == "Every 2 Weeks" && last_visit.daysTo(QDate::currentDate()) > 14){
        return true;
    }

    if(frequency == "Every 3 Weeks" && last_visit.daysTo(QDate::currentDate()) > 21){
        return true;
    }

    if(frequency == "Every Month" && last_visit.daysTo(QDate::currentDate()) > 30){
        return true;
    }

    if(frequency == "Every 2 Months" && last_visit.daysTo(QDate::currentDate()) > 60){
        return true;
    }

    return false;
}

void Manager::compareDateTime(Student student, QTime time_start, QTime time_end){

}
