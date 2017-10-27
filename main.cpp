#include <QtGui/QApplication>
#include "ventanaprincipal.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ventanaPrincipal w;

    w.show();

    return a.exec();
}
