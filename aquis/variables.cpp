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
