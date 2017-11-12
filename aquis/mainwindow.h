//
//  mainwindow.h
//  aquis
//
//  Created by Constantin Dullo on 11.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// qt
#include <QMainWindow>

#ifdef __APPLE__ || __MACH__
    #include <QtMacExtras>
#endif

// cv
#include <opencv/highgui.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
