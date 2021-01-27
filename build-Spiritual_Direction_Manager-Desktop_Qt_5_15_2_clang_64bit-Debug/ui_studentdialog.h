/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelFirstName;
    QLabel *labelLastName;
    QLabel *labelLastVisit;
    QLabel *labelVisitFrequency;
    QLabel *labelAdvisor;
    QComboBox *comboBoxSpiritualAdvisor;
    QDateEdit *dateEdit;
    QComboBox *comboBoxVisitFrequency;
    QLineEdit *lineEditFirstName;
    QLineEdit *lineEditLastName;
    QLabel *labelNewStudent;
    QFrame *line;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QString::fromUtf8("StudentDialog"));
        StudentDialog->resize(400, 420);
        buttonBox = new QDialogButtonBox(StudentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 350, 200, 41));
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setAutoFillBackground(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        labelFirstName = new QLabel(StudentDialog);
        labelFirstName->setObjectName(QString::fromUtf8("labelFirstName"));
        labelFirstName->setGeometry(QRect(50, 100, 81, 16));
        labelLastName = new QLabel(StudentDialog);
        labelLastName->setObjectName(QString::fromUtf8("labelLastName"));
        labelLastName->setGeometry(QRect(50, 150, 71, 16));
        labelLastVisit = new QLabel(StudentDialog);
        labelLastVisit->setObjectName(QString::fromUtf8("labelLastVisit"));
        labelLastVisit->setGeometry(QRect(50, 300, 71, 16));
        labelVisitFrequency = new QLabel(StudentDialog);
        labelVisitFrequency->setObjectName(QString::fromUtf8("labelVisitFrequency"));
        labelVisitFrequency->setGeometry(QRect(50, 200, 101, 16));
        labelAdvisor = new QLabel(StudentDialog);
        labelAdvisor->setObjectName(QString::fromUtf8("labelAdvisor"));
        labelAdvisor->setGeometry(QRect(50, 250, 60, 16));
        comboBoxSpiritualAdvisor = new QComboBox(StudentDialog);
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->addItem(QString());
        comboBoxSpiritualAdvisor->setObjectName(QString::fromUtf8("comboBoxSpiritualAdvisor"));
        comboBoxSpiritualAdvisor->setGeometry(QRect(200, 250, 171, 32));
        dateEdit = new QDateEdit(StudentDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(200, 300, 111, 22));
        comboBoxVisitFrequency = new QComboBox(StudentDialog);
        comboBoxVisitFrequency->addItem(QString());
        comboBoxVisitFrequency->addItem(QString());
        comboBoxVisitFrequency->addItem(QString());
        comboBoxVisitFrequency->addItem(QString());
        comboBoxVisitFrequency->addItem(QString());
        comboBoxVisitFrequency->setObjectName(QString::fromUtf8("comboBoxVisitFrequency"));
        comboBoxVisitFrequency->setGeometry(QRect(200, 200, 171, 32));
        lineEditFirstName = new QLineEdit(StudentDialog);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));
        lineEditFirstName->setGeometry(QRect(200, 100, 171, 21));
        lineEditLastName = new QLineEdit(StudentDialog);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));
        lineEditLastName->setGeometry(QRect(200, 150, 171, 21));
        labelNewStudent = new QLabel(StudentDialog);
        labelNewStudent->setObjectName(QString::fromUtf8("labelNewStudent"));
        labelNewStudent->setGeometry(QRect(150, 20, 101, 16));
        labelNewStudent->setAlignment(Qt::AlignCenter);
        line = new QFrame(StudentDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 60, 300, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(StudentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StudentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StudentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QCoreApplication::translate("StudentDialog", "Dialog", nullptr));
        labelFirstName->setText(QCoreApplication::translate("StudentDialog", "First Name", nullptr));
        labelLastName->setText(QCoreApplication::translate("StudentDialog", "Last Name", nullptr));
        labelLastVisit->setText(QCoreApplication::translate("StudentDialog", "Last Visit", nullptr));
        labelVisitFrequency->setText(QCoreApplication::translate("StudentDialog", "Visit Frequency", nullptr));
        labelAdvisor->setText(QCoreApplication::translate("StudentDialog", "Advisor", nullptr));
        comboBoxSpiritualAdvisor->setItemText(0, QCoreApplication::translate("StudentDialog", "Fr. Scott Woods", nullptr));
        comboBoxSpiritualAdvisor->setItemText(1, QCoreApplication::translate("StudentDialog", "Fr. Stephen Wyble", nullptr));
        comboBoxSpiritualAdvisor->setItemText(2, QCoreApplication::translate("StudentDialog", "William Bolin", nullptr));

        comboBoxVisitFrequency->setItemText(0, QCoreApplication::translate("StudentDialog", "Every Week", nullptr));
        comboBoxVisitFrequency->setItemText(1, QCoreApplication::translate("StudentDialog", "Every 2 Weeks", nullptr));
        comboBoxVisitFrequency->setItemText(2, QCoreApplication::translate("StudentDialog", "Every 3 Weeks", nullptr));
        comboBoxVisitFrequency->setItemText(3, QCoreApplication::translate("StudentDialog", "Every Month", nullptr));
        comboBoxVisitFrequency->setItemText(4, QCoreApplication::translate("StudentDialog", "Every 2 Months", nullptr));

        labelNewStudent->setText(QCoreApplication::translate("StudentDialog", "New Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
