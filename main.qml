import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 1000
    height: 480
    title: qsTr("Hello World")

    Loader{
        id : pageLoader
    }

    Component.onCompleted : {
        pageLoader.source = "Airport.qml"
    }

}
