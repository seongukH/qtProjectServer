#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <thread.h>
#include <globaldata.h>

#include <Network/udpnetwork.h>

//using namespace std;

int main(int argc, char *argv[])
{

    Thread thread;
    //thread.run();

    thread.start();


    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;




    return app.exec();
}
