//
//  variables.h
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef VARIABLES_H
#define VARIABLES_H

#include <QDialog>

namespace Ui {
class Variables;
}

class Variables : public QDialog
{
    Q_OBJECT

public:
    explicit Variables(QWidget *parent = 0);
    ~Variables();

private:
    Ui::Variables *ui;
};

#endif // VARIABLES_H
