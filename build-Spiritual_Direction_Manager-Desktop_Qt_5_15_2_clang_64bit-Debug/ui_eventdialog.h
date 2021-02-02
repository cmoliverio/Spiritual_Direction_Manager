/********************************************************************************
** Form generated from reading UI file 'eventdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTDIALOG_H
#define UI_EVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_EventDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonAddEvent;
    QLabel *labelTimeStart;
    QTimeEdit *timeEditTimeStart;
    QLabel *labelTimeEnd;
    QTimeEdit *timeEditTimeEnd;
    QLabel *labelDayOfWeek;
    QComboBox *comboBoxDayOfWeek;
    QTextEdit *textEditEventDetails;
    QPushButton *pushButtonRemoveEvent;
    QLabel *labelStudent;
    QLabel *labelStudentName;
    QLabel *labelDescription;
    QListWidget *listWidgetStudentEventList;

    void setupUi(QDialog *EventDialog)
    {
        if (EventDialog->objectName().isEmpty())
            EventDialog->setObjectName(QString::fromUtf8("EventDialog"));
        EventDialog->resize(600, 450);
        buttonBox = new QDialogButtonBox(EventDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(410, 380, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButtonAddEvent = new QPushButton(EventDialog);
        pushButtonAddEvent->setObjectName(QString::fromUtf8("pushButtonAddEvent"));
        pushButtonAddEvent->setGeometry(QRect(410, 240, 161, 32));
        labelTimeStart = new QLabel(EventDialog);
        labelTimeStart->setObjectName(QString::fromUtf8("labelTimeStart"));
        labelTimeStart->setGeometry(QRect(60, 80, 71, 16));
        timeEditTimeStart = new QTimeEdit(EventDialog);
        timeEditTimeStart->setObjectName(QString::fromUtf8("timeEditTimeStart"));
        timeEditTimeStart->setGeometry(QRect(180, 75, 121, 22));
        labelTimeEnd = new QLabel(EventDialog);
        labelTimeEnd->setObjectName(QString::fromUtf8("labelTimeEnd"));
        labelTimeEnd->setGeometry(QRect(60, 130, 71, 16));
        timeEditTimeEnd = new QTimeEdit(EventDialog);
        timeEditTimeEnd->setObjectName(QString::fromUtf8("timeEditTimeEnd"));
        timeEditTimeEnd->setGeometry(QRect(180, 125, 121, 22));
        labelDayOfWeek = new QLabel(EventDialog);
        labelDayOfWeek->setObjectName(QString::fromUtf8("labelDayOfWeek"));
        labelDayOfWeek->setGeometry(QRect(60, 180, 91, 16));
        comboBoxDayOfWeek = new QComboBox(EventDialog);
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->setObjectName(QString::fromUtf8("comboBoxDayOfWeek"));
        comboBoxDayOfWeek->setGeometry(QRect(170, 175, 141, 32));
        textEditEventDetails = new QTextEdit(EventDialog);
        textEditEventDetails->setObjectName(QString::fromUtf8("textEditEventDetails"));
        textEditEventDetails->setGeometry(QRect(350, 80, 221, 111));
        pushButtonRemoveEvent = new QPushButton(EventDialog);
        pushButtonRemoveEvent->setObjectName(QString::fromUtf8("pushButtonRemoveEvent"));
        pushButtonRemoveEvent->setGeometry(QRect(410, 310, 161, 32));
        labelStudent = new QLabel(EventDialog);
        labelStudent->setObjectName(QString::fromUtf8("labelStudent"));
        labelStudent->setGeometry(QRect(60, 30, 60, 16));
        labelStudentName = new QLabel(EventDialog);
        labelStudentName->setObjectName(QString::fromUtf8("labelStudentName"));
        labelStudentName->setGeometry(QRect(150, 30, 171, 16));
        labelStudentName->setAlignment(Qt::AlignCenter);
        labelDescription = new QLabel(EventDialog);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setGeometry(QRect(410, 40, 101, 16));
        labelDescription->setAlignment(Qt::AlignCenter);
        listWidgetStudentEventList = new QListWidget(EventDialog);
        listWidgetStudentEventList->setObjectName(QString::fromUtf8("listWidgetStudentEventList"));
        listWidgetStudentEventList->setGeometry(QRect(40, 250, 341, 161));
        listWidgetStudentEventList->setAlternatingRowColors(true);
        listWidgetStudentEventList->setSortingEnabled(false);

        retranslateUi(EventDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EventDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EventDialog, SLOT(reject()));

        pushButtonAddEvent->setDefault(true);
        pushButtonRemoveEvent->setDefault(false);
        listWidgetStudentEventList->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(EventDialog);
    } // setupUi

    void retranslateUi(QDialog *EventDialog)
    {
        EventDialog->setWindowTitle(QCoreApplication::translate("EventDialog", "Event Editor", nullptr));
        pushButtonAddEvent->setText(QCoreApplication::translate("EventDialog", "Add Event", nullptr));
        labelTimeStart->setText(QCoreApplication::translate("EventDialog", "Time Start", nullptr));
        labelTimeEnd->setText(QCoreApplication::translate("EventDialog", "Time End", nullptr));
        labelDayOfWeek->setText(QCoreApplication::translate("EventDialog", "Day of Week", nullptr));
        comboBoxDayOfWeek->setItemText(0, QCoreApplication::translate("EventDialog", "Sunday", nullptr));
        comboBoxDayOfWeek->setItemText(1, QCoreApplication::translate("EventDialog", "Monday", nullptr));
        comboBoxDayOfWeek->setItemText(2, QCoreApplication::translate("EventDialog", "Tuesday", nullptr));
        comboBoxDayOfWeek->setItemText(3, QCoreApplication::translate("EventDialog", "Wednesday", nullptr));
        comboBoxDayOfWeek->setItemText(4, QCoreApplication::translate("EventDialog", "Thursday", nullptr));
        comboBoxDayOfWeek->setItemText(5, QCoreApplication::translate("EventDialog", "Friday", nullptr));
        comboBoxDayOfWeek->setItemText(6, QCoreApplication::translate("EventDialog", "Saturday", nullptr));

        pushButtonRemoveEvent->setText(QCoreApplication::translate("EventDialog", "Remove Event", nullptr));
        labelStudent->setText(QCoreApplication::translate("EventDialog", "Student:", nullptr));
        labelStudentName->setText(QCoreApplication::translate("EventDialog", "Student Name", nullptr));
        labelDescription->setText(QCoreApplication::translate("EventDialog", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventDialog: public Ui_EventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTDIALOG_H
