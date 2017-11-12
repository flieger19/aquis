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