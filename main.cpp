#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QThread>

#include <globaldata.h>

#include <Network/udpnetwork.h>

//using namespace std;

int main(int argc, char *argv[])
{

    UDPNetwork network;
    network.readyRead();


    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;




    return app.exec();
}
