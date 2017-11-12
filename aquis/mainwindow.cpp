//
//  mainwindow.cpp
//  aquis
//
//  Created by Constantin Dullo on 11.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // setup view
    ui->setupUi(this);
    #ifdef __APPLE__ || __MACH__
        // special setup vor MacOS
    #endif
    
    // Create an OpenCV image.
    cv::Mat image(320, 240, CV_8UC3, cvScalar(0,0,0));
    
    // Convert it to QImage
    QImage qImage = QImage((const unsigned char*)(image.data),
                           image.cols,image.rows,
                           QImage::Format_RGB888).rgbSwapped();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pathTemplate_returnPressed()
{

}

void MainWindow::on_selectTamplate_clicked()
{

}

void MainWindow::on_backwarts_clicked()
{

}

void MainWindow::on_forward_clicked()
{

}

void MainWindow::on_pathQuestionaire_returnPressed()
{

}

void MainWindow::on_selectQuestionaire_clicked()
{

}
