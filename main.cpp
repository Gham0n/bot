#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    qDebug() << "Putain ça marche";

    w.show();
    return a.exec();
}
