#include "eventdialog.h"
#include "ui_eventdialog.h"

EventDialog::EventDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventDialog)
{
    ui->setupUi(this);
}

EventDialog::~EventDialog()
{
    delete ui;
}

void EventDialog::setStudentNameLabel(QString first_name, QString last_name){
    ui->labelStudentName->setText(first_name + " " + last_name);
}

void EventDialog::on_pushButtonAddEvent_clicked()
{
    Event event;
    event.setTime_start(ui->timeEditTimeStart->time());
    event.setTime_end(ui->timeEditTimeEnd->time());
    event.setDay_of_week(ui->comboBoxDayOfWeek->currentText());
    event.setDescription(ui->textEditEventDetails->toPlainText());

    events.append(event);
    ui->listWidgetStudentEventList->addItem(event.eventInfo());
    ui->textEditEventDetails->clear();
}

/**
 * @brief EventDialog::addEventsToTableWidget
 * @param events
 *
 * Takes list of events from student to be edited
 * and adds them to event list in UI where user can then
 * add or remove events.
 */
void EventDialog::addEventsToTableWidget(QList<Event> events){
    for(int i = 0; i < events.length(); i++){
        // Adds event to global list, and adds string of event to list widget.
        this->events.append(events[i]);
        ui->listWidgetStudentEventList->addItem(events[i].eventInfo());
    }
}

/**
 * @brief EventDialog::on_pushButtonRemoveEvent_clicked
 *
 * Method removes event both from list widget and
 * global list of events.
 */
void EventDialog::on_pushButtonRemoveEvent_clicked()
{
    int row = ui->listWidgetStudentEventList->currentRow();
    ui->listWidgetStudentEventList->takeItem(row);
    events.removeAt(row);
}

/**
 * @brief EventDialog::returnEvents
 * @return
 *
 * Global list of events retrieved.
 */
QList<Event> EventDialog::returnEvents(){
    return events;
}
