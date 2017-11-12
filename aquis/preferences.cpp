//
//  preferences.cpp
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#include "preferences.h"
#include "ui_preferences.h"

Preferences::Preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Preferences)
{
    ui->setupUi(this);
}

Preferences::~Preferences()
{
    delete ui;
}
