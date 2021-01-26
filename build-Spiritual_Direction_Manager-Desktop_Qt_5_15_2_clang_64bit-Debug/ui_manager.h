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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manager
{
public:
    QWidget *centralwidget;
    QPushButton *buttonNewStudent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Manager)
    {
        if (Manager->objectName().isEmpty())
            Manager->setObjectName(QString::fromUtf8("Manager"));
        Manager->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Manager->sizePolicy().hasHeightForWidth());
        Manager->setSizePolicy(sizePolicy);
        Manager->setMinimumSize(QSize(800, 600));
        Manager->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(Manager);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonNewStudent = new QPushButton(centralwidget);
        buttonNewStudent->setObjectName(QString::fromUtf8("buttonNewStudent"));
        buttonNewStudent->setGeometry(QRect(30, 20, 113, 32));
        Manager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Manager);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Manager->setMenuBar(menubar);
        statusbar = new QStatusBar(Manager);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Manager->setStatusBar(statusbar);

        retranslateUi(Manager);

        QMetaObject::connectSlotsByName(Manager);
    } // setupUi

    void retranslateUi(QMainWindow *Manager)
    {
        Manager->setWindowTitle(QCoreApplication::translate("Manager", "Spiritual Direction Manager", nullptr));
        buttonNewStudent->setText(QCoreApplication::translate("Manager", "New Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manager: public Ui_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
