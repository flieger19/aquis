//
//  template.h
//  aquis
//
//  Created by Constantin Dullo on 12.11.17.
//  Copyright © 2017 Constantin Dullo. All rights reserved.
//

#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QObject>

class Template : public QObject
{
    Q_OBJECT
public:
    explicit Template(QObject *parent = nullptr);

signals:

public slots:
};

#endif // TEMPLATE_H
