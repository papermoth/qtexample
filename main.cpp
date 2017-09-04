#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "piechart.h"
#include "pieslice.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    //This is how you register your c++ qml extensions

    qmlRegisterType<PieChart>("Charts", 1, 0, "PieChart");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
