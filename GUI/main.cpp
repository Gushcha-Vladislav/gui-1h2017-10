#include "mainwindow.h"
#include "window.h"
#include "about.h"
#include "mainform.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainForm w;
    w.show();

    return a.exec();
}
