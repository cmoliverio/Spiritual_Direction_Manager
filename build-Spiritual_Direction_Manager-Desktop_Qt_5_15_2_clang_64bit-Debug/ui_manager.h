/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QTimeEdit *timeStart;
    QTimeEdit *timeEnd;
    QLabel *labelTimeStart;
    QLabel *labelTimeEnd;
    QComboBox *comboBoxDayOfWeek;
    QLabel *labelDayOfWeek;
    QLabel *labelSpiritualAdvisor;
    QComboBox *comboBoxSpiritualAdvisor;
    QPushButton *pushButtonMatchStudents;
    QLabel *labelDetails;
    QLabel *labelList;
    QListWidget *listWidget;
    QFrame *lineSeparate;
    QFrame *lineSeparate_2;
    QPushButton *pushButtonEditStudent;
    QPushButton *pushButtonNewStudent;
    QPushButton *pushButtonRemoveStudent;
    QPushButton *pushButtonLoadStudents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QString::fromUtf8("Manager"));
        Manager->resize(800, 669);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Manager->sizePolicy().hasHeightForWidth());
        Manager->setSizePolicy(sizePolicy);
        Manager->setMinimumSize(QSize(0, 0));
        Manager->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(Manager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(250, 10, 301, 41));
        welcomeLabel->setFrameShape(QFrame::NoFrame);
        welcomeLabel->setFrameShadow(QFrame::Plain);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        timeStart = new QTimeEdit(centralwidget);
        timeStart->setObjectName(QString::fromUtf8("timeStart"));
        timeStart->setGeometry(QRect(180, 270, 100, 22));
        timeEnd = new QTimeEdit(centralwidget);
        timeEnd->setObjectName(QString::fromUtf8("timeEnd"));
        timeEnd->setGeometry(QRect(180, 220, 100, 22));
        labelTimeStart = new QLabel(centralwidget);
        labelTimeStart->setObjectName(QString::fromUtf8("labelTimeStart"));
        labelTimeStart->setGeometry(QRect(55, 218, 71, 32));
        labelTimeEnd = new QLabel(centralwidget);
        labelTimeEnd->setObjectName(QString::fromUtf8("labelTimeEnd"));
        labelTimeEnd->setGeometry(QRect(55, 268, 60, 32));
        comboBoxDayOfWeek = new QComboBox(centralwidget);
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->setObjectName(QString::fromUtf8("comboBoxDayOfWeek"));
        comboBoxDayOfWeek->setGeometry(QRect(170, 170, 180, 32));
        labelDayOfWeek = new QLabel(centralwidget);
        labelDayOfWeek->setObjectName(QString::fromUtf8("labelDayOfWeek"));
        labelDayOfWeek->setGeometry(QRect(55, 168, 81, 32));
        labelSpiritualAdvisor = new QLabel(centralwidget);
        labelSpiritualAdvisor->setObjectName(QString::fromUtf8("labelSpiritualAdvisor"));
        labelSpiritualAdvisor->setGeometry(QRect(55, 118, 110, 32));
        comboBoxSpiritualAdvisor = new QComboBox(centralwidget);
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->setObjectName(QString::fromUtf8("comboBoxSpiritualAdvisor"));
        comboBoxSpiritualAdvisor->setGeometry(QRect(170, 120, 180, 32));
        pushButtonMatchStudents = new QPushButton(centralwidget);
        pushButtonMatchStudents->setObjectName(QString::fromUtf8("pushButtonMatchStudents"));
        pushButtonMatchStudents->setGeometry(QRect(100, 320, 150, 32));
        labelDetails = new QLabel(centralwidget);
        labelDetails->setObjectName(QString::fromUtf8("labelDetails"));
        labelDetails->setGeometry(QRect(160, 80, 60, 16));
        labelList = new QLabel(centralwidget);
        labelList->setObjectName(QString::fromUtf8("labelList"));
        labelList->setGeometry(QRect(500, 80, 71, 21));
        labelList->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(365, 120, 341, 231));
        lineSeparate = new QFrame(centralwidget);
        lineSeparate->setObjectName(QString::fromUtf8("lineSeparate"));
        lineSeparate->setGeometry(QRect(50, 380, 700, 3));
        lineSeparate->setFrameShape(QFrame::HLine);
        lineSeparate->setFrameShadow(QFrame::Sunken);
        lineSeparate_2 = new QFrame(centralwidget);
        lineSeparate_2->setObjectName(QString::fromUtf8("lineSeparate_2"));
        lineSeparate_2->setGeometry(QRect(50, 60, 700, 3));
        lineSeparate_2->setFrameShape(QFrame::HLine);
        lineSeparate_2->setFrameShadow(QFrame::Sunken);
        pushButtonEditStudent = new QPushButton(centralwidget);
        pushButtonEditStudent->setObjectName(QString::fromUtf8("pushButtonEditStudent"));
        pushButtonEditStudent->setGeometry(QRect(530, 460, 151, 32));
        pushButtonNewStudent = new QPushButton(centralwidget);
        pushButtonNewStudent->setObjectName(QString::fromUtf8("pushButtonNewStudent"));
        pushButtonNewStudent->setEnabled(true);
        pushButtonNewStudent->setGeometry(QRect(530, 560, 151, 32));
        pushButtonNewStudent->setAutoDefault(false);
        pushButtonNewStudent->setFlat(false);
        pushButtonRemoveStudent = new QPushButton(centralwidget);
        pushButtonRemoveStudent->setObjectName(QString::fromUtf8("pushButtonRemoveStudent"));
        pushButtonRemoveStudent->setGeometry(QRect(530, 510, 151, 32));
        pushButtonLoadStudents = new QPushButton(centralwidget);
        pushButtonLoadStudents->setObjectName(QString::fromUtf8("pushButtonLoadStudents"));
        pushButtonLoadStudents->setGeometry(QRect(530, 410, 151, 32));
        Manager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Manager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Manager->setMenuBar(menubar);
        statusbar = new QStatusBar(Manager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Manager->setStatusBar(statusbar);

        retranslateUi(Manager);

        pushButtonMatchStudents->setDefault(true);
        pushButtonNewStudent->setDefault(true);


        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QCoreApplication::translate("Manager", "Spiritual Direction Manager", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Manager", "Welcome to Spiritual Direction Manager", nullptr));
        labelTimeStart->setText(QCoreApplication::translate("Manager", "Time Start", nullptr));
        labelTimeEnd->setText(QCoreApplication::translate("Manager", "Time End", nullptr));
        comboBoxDayOfWeek->setItemText(0, QCoreApplication::translate("Manager", "Sunday", nullptr));
        comboBoxDayOfWeek->setItemText(1, QCoreApplication::translate("Manager", "Monday", nullptr));
        comboBoxDayOfWeek->setItemText(2, QCoreApplication::translate("Manager", "Tuesday", nullptr));
        comboBoxDayOfWeek->setItemText(3, QCoreApplication::translate("Manager", "Wednesday", nullptr));
        comboBoxDayOfWeek->setItemText(4, QCoreApplication::translate("Manager", "Thursday", nullptr));
        comboBoxDayOfWeek->setItemText(5, QCoreApplication::translate("Manager", "Friday", nullptr));
        comboBoxDayOfWeek->setItemText(6, QCoreApplication::translate("Manager", "Saturday", nullptr));

        labelDayOfWeek->setText(QCoreApplication::translate("Manager", "Day of Week", nullptr));
        labelSpiritualAdvisor->setText(QCoreApplication::translate("Manager", "Spiritual Advisor", nullptr));
        comboBoxSpiritualAdvisor->setItemText(0, QCoreApplication::translate("Manager", "Fr. Scott Woods", nullptr));
        comboBoxSpiritualAdvisor->setItemText(1, QCoreApplication::translate("Manager", "Fr. Stephen Wyble", nullptr));
        comboBoxSpiritualAdvisor->setItemText(2, QCoreApplication::translate("Manager", "William Bolin", nullptr));

        pushButtonMatchStudents->setText(QCoreApplication::translate("Manager", "Match Students", nullptr));
        labelDetails->setText(QCoreApplication::translate("Manager", "Details", nullptr));
        labelList->setText(QCoreApplication::translate("Manager", "Listing", nullptr));
        pushButtonEditStudent->setText(QCoreApplication::translate("Manager", "Edit Student", nullptr));
        pushButtonNewStudent->setText(QCoreApplication::translate("Manager", "New Student", nullptr));
        pushButtonRemoveStudent->setText(QCoreApplication::translate("Manager", "Remove Student", nullptr));
        pushButtonLoadStudents->setText(QCoreApplication::translate("Manager", "Load Students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
