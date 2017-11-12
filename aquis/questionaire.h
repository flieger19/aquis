//
//  questionaire.h
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef QUESTIONAIRE_H
#define QUESTIONAIRE_H

#include <QObject>

class Questionaire : public QObject
{
    Q_OBJECT
public:
    explicit Questionaire(QObject *parent = nullptr);

signals:

public slots:
};

#endif // QUESTIONAIRE_H
