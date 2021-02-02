/********************************************************************************
** Form generated from reading UI file 'newstudentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSTUDENTDIALOG_H
#define UI_NEWSTUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_NewStudentDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewStudentDialog)
    {
        if (NewStudentDialog->objectName().isEmpty())
            NewStudentDialog->setObjectName(QString::fromUtf8("NewStudentDialog"));
        NewStudentDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(NewStudentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(NewStudentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewStudentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewStudentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewStudentDialog);
    } // setupUi

    void retranslateUi(QDialog *NewStudentDialog)
    {
        NewStudentDialog->setWindowTitle(QCoreApplication::translate("NewStudentDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewStudentDialog: public Ui_NewStudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSTUDENTDIALOG_H
