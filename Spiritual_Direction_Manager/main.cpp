#include "manager.h"
#include "student.h"

#include <QApplication>
#include <QSize>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Manager w;
    w.setFixedSize(QSize{800, 600});
    w.show();
    return a.exec();
}