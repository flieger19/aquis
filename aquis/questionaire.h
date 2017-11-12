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