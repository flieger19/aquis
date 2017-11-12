//
//  processing.h
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef PROCESSING_H
#define PROCESSING_H

#include <QObject>

class Processing : public QObject
{
    Q_OBJECT
public:
    explicit Processing(QObject *parent = nullptr);

signals:

public slots:
};

#endif // PROCESSING_H
