#include "Module/Module.hpp"
#include "UserInterface/mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Module* module = new Module();
    int x = module->add(1, 2);

    return a.exec();
}
