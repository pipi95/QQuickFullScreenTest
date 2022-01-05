#ifndef HELPER_H
#define HELPER_H

#include <QObject>

class Helper : public QObject {
    Q_OBJECT
public:
    Helper(QObject* parent = nullptr);
    Q_INVOKABLE void do1(QObject* pt, QObject* pt2);

signals:
};

#endif // HELPER_H
