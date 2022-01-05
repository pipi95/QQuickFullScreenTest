#ifndef MYQQUICKWINDOW_H
#define MYQQUICKWINDOW_H

#include <QQuickWindow>

class MyQQuickWindow : public QQuickWindow
{
    Q_OBJECT
public:
    MyQQuickWindow(QWindow *parent = nullptr);

signals:
protected:
    bool event(QEvent *ev) override;

};

#endif // MYQQUICKWINDOW_H
