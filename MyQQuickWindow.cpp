#include "MyQQuickWindow.h"
#include <QDebug>

MyQQuickWindow::MyQQuickWindow(QWindow* parent)
    : QQuickWindow(parent)
{
}

bool MyQQuickWindow::event(QEvent* ev)
{
    //    qDebug() << "event:" << ev->type();
    return QQuickWindow::event(ev);
}
