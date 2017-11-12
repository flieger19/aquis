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

private slots:
    void on_pathTemplate_returnPressed();

    void on_selectTamplate_clicked();

    void on_backwarts_clicked();

    void on_forward_clicked();

    void on_pathQuestionaire_returnPressed();

    void on_selectQuestionaire_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
