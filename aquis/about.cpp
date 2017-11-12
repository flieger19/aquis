//
//  about.cpp
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}
