//
//  main.cpp
//  aquis
//
//  Created by Constantin Dullo on 11.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char * argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
