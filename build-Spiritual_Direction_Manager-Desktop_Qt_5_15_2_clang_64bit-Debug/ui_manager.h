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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QAction *actionSave;
    QAction *actionOpen;
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
    QTableWidget *tableWidgetStudents;
    QPushButton *pushButtonSave;
    QMenuBar *menubar;
    QMenu *menuFile;
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
        actionSave = new QAction(Manager);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionOpen = new QAction(Manager);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
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
        timeStart->setGeometry(QRect(205, 222, 100, 22));
        timeEnd = new QTimeEdit(centralwidget);
        timeEnd->setObjectName(QString::fromUtf8("timeEnd"));
        timeEnd->setGeometry(QRect(205, 272, 100, 22));
        labelTimeStart = new QLabel(centralwidget);
        labelTimeStart->setObjectName(QString::fromUtf8("labelTimeStart"));
        labelTimeStart->setGeometry(QRect(80, 220, 71, 32));
        labelTimeEnd = new QLabel(centralwidget);
        labelTimeEnd->setObjectName(QString::fromUtf8("labelTimeEnd"));
        labelTimeEnd->setGeometry(QRect(80, 270, 60, 32));
        comboBoxDayOfWeek = new QComboBox(centralwidget);
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->addItem(QString());
        comboBoxDayOfWeek->setObjectName(QString::fromUtf8("comboBoxDayOfWeek"));
        comboBoxDayOfWeek->setGeometry(QRect(195, 172, 180, 32));
        labelDayOfWeek = new QLabel(centralwidget);
        labelDayOfWeek->setObjectName(QString::fromUtf8("labelDayOfWeek"));
        labelDayOfWeek->setGeometry(QRect(80, 170, 81, 32));
        labelSpiritualAdvisor = new QLabel(centralwidget);
        labelSpiritualAdvisor->setObjectName(QString::fromUtf8("labelSpiritualAdvisor"));
        labelSpiritualAdvisor->setGeometry(QRect(80, 120, 110, 32));
        comboBoxSpiritualAdvisor = new QComboBox(centralwidget);
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->setObjectName(QString::fromUtf8("comboBoxSpiritualAdvisor"));
        comboBoxSpiritualAdvisor->setGeometry(QRect(195, 122, 180, 32));
        pushButtonMatchStudents = new QPushButton(centralwidget);
        pushButtonMatchStudents->setObjectName(QString::fromUtf8("pushButtonMatchStudents"));
        pushButtonMatchStudents->setGeometry(QRect(125, 322, 150, 32));
        labelDetails = new QLabel(centralwidget);
        labelDetails->setObjectName(QString::fromUtf8("labelDetails"));
        labelDetails->setGeometry(QRect(170, 80, 60, 21));
        labelDetails->setAlignment(Qt::AlignCenter);
        labelList = new QLabel(centralwidget);
        labelList->setObjectName(QString::fromUtf8("labelList"));
        labelList->setGeometry(QRect(530, 80, 71, 21));
        labelList->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(425, 120, 281, 221));
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
        pushButtonEditStudent->setGeometry(QRect(590, 460, 151, 32));
        pushButtonNewStudent = new QPushButton(centralwidget);
        pushButtonNewStudent->setObjectName(QString::fromUtf8("pushButtonNewStudent"));
        pushButtonNewStudent->setEnabled(true);
        pushButtonNewStudent->setGeometry(QRect(590, 560, 151, 32));
        pushButtonNewStudent->setAutoDefault(false);
        pushButtonNewStudent->setFlat(false);
        pushButtonRemoveStudent = new QPushButton(centralwidget);
        pushButtonRemoveStudent->setObjectName(QString::fromUtf8("pushButtonRemoveStudent"));
        pushButtonRemoveStudent->setGeometry(QRect(590, 510, 151, 32));
        tableWidgetStudents = new QTableWidget(centralwidget);
        if (tableWidgetStudents->columnCount() < 6)
            tableWidgetStudents->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetStudents->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetStudents->setObjectName(QString::fromUtf8("tableWidgetStudents"));
        tableWidgetStudents->setGeometry(QRect(60, 400, 501, 191));
        pushButtonSave = new QPushButton(centralwidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(590, 410, 151, 32));
        Manager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Manager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Manager->setMenuBar(menubar);
        statusbar = new QStatusBar(Manager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Manager->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(Manager);

        pushButtonMatchStudents->setDefault(true);
        pushButtonNewStudent->setDefault(true);


        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QCoreApplication::translate("Manager", "Spiritual Direction Manager", nullptr));
        actionSave->setText(QCoreApplication::translate("Manager", "Save", nullptr));
        actionOpen->setText(QCoreApplication::translate("Manager", "Open", nullptr));
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
        QTableWidgetItem *___qtablewidgetitem = tableWidgetStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Manager", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Manager", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Manager", "Advisor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetStudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Manager", "Last Visit", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetStudents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Manager", "Frequency", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetStudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Manager", "# of Events", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("Manager", "Save", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Manager", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
