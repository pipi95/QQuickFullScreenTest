#include "Helper.h"
#include "MyQQuickWindow.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QtQml/qqml.h>

int main(int argc, char* argv[])
{
    //    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setAttribute(Qt::AA_DisableHighDpiScaling);
    //    QApplication::setAttribute(Qt::WA_NativeWindow);

    QApplication app(argc, argv);
    ::qmlRegisterType<Helper>("Helper", 1, 0, "Helper");

    QQmlApplicationEngine engine;
    Helper helper(&app);
    engine.rootContext()->setContextProperty("helper", &helper);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject* obj, const QUrl& objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
