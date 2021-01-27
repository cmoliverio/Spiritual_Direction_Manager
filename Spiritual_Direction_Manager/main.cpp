#include "manager.h"

#include <QApplication>
#include <QSize>
#include <QList>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Manager w;
    w.setFixedSize(QSize{800, 650});
    w.show();
    return a.exec();
}
