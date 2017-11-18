//
//  mainwindow.cpp
//  aquis
//
//  Created by Constantin Dullo on 11.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"

QFileInfoList fileInfoList;
int fileCounter = 0;

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
    //get a filename to open
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Tamplate Image"), QDir::homePath(), tr("Image Files (*.png *.jpg *.tiff *.bmp)"));
    this->ui->pathTemplate->setText(fileName);
    
    QPixmap templateImage(fileName);
    // get label dimensions
    int w = this->ui->templateImage->width();
    int h = this->ui->templateImage->height();
    this->ui->templateImage->setPixmap(templateImage.scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_backwarts_clicked()
{
    fileCounter = fileCounter - 1;
    if (fileCounter < 0) {
        fileCounter = 0;
    }
    
    this->ui->pathQuestionaire->setText(fileInfoList.at(fileCounter).absoluteFilePath());
    QPixmap questionairImage(fileInfoList.at(fileCounter).absoluteFilePath());
    // get label dimensions
    int w = this->ui->questionarImage->width();
    int h = this->ui->questionarImage->height();
    this->ui->questionarImage->setPixmap(questionairImage.scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_forward_clicked()
{
    fileCounter = fileCounter + 1;
    if (fileCounter >= fileInfoList.size()) {
        fileCounter = fileInfoList.size() -1;
    }
    
    this->ui->pathQuestionaire->setText(fileInfoList.at(fileCounter).absoluteFilePath());
    QPixmap questionairImage(fileInfoList.at(fileCounter).absoluteFilePath());
    // get label dimensions
    int w = this->ui->questionarImage->width();
    int h = this->ui->questionarImage->height();
    this->ui->questionarImage->setPixmap(questionairImage.scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_pathQuestionaire_returnPressed()
{

}

void MainWindow::on_selectQuestionaire_clicked()
{
    QDir dir(QFileDialog::getExistingDirectory(this, tr("Open Directory"), QDir::homePath(), QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks));
    
    QStringList filters;
    filters << "*.png" << "*.jpg" << "*.bmp";
    fileInfoList = dir.entryInfoList(filters, QDir::Files|QDir::NoDotAndDotDot);
    
    this->ui->pathQuestionaire->setText(fileInfoList.at(0).absoluteFilePath());
    QPixmap questionairImage(fileInfoList.at(0).absoluteFilePath());
    // get label dimensions
    int w = this->ui->questionarImage->width();
    int h = this->ui->questionarImage->height();
    this->ui->questionarImage->setPixmap(questionairImage.scaled(w,h,Qt::KeepAspectRatio));
}
