//
//  variables.cpp
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "variables.h"
#include "ui_variables.h"

Variables::Variables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Variables)
{
    ui->setupUi(this);
}

Variables::~Variables()
{
    delete ui;
}
