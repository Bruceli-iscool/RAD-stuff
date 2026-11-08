#include "photoviewer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    photoviewer w;
    w.show();
    return QApplication::exec();
}
