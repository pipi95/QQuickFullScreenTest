#include "Helper.h"
#include <QDebug>
#include <QMetaMethod>

Helper::Helper(QObject* parent)
    : QObject(parent)
{
}

void Helper::do1(QObject* pt, QObject* pt2)
{
    if (pt->parent() == nullptr) {
        qDebug() << "parent is null.";
        qDebug() << QString("%1,%2,%3")
                        .arg(pt->metaObject()->className())
                        .arg(pt->metaObject()->superClass()->className())
                        .arg("no");
        //        pt2->metaObject()->constructor(0).invoke()
        return;
    }
    qDebug() << "parent:" << pt->parent()->metaObject()->className();
}
