import QtQuick 2.4
import QtQuick.Controls 1.6

Item {
    width: 1000
    height: 480
    property alias textField: textField
    property alias button: button
    property alias textArea: textArea

    Image {
        id: image
        x: 0
        y: 0
        width: 674
        height: 480
        source: "airport.png"
    }

    Rectangle {
        id: rectangle
        x: 674
        y: 0
        width: 326
        height: 480
        color: "#cecccc"

        TextField {
            id: textField
            x: 57
            y: 296
            width: 133
            height: 23
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button
            x: 196
            y: 296
            text: qsTr("Button")
        }

        TextArea {
            id: textArea
            x: 55
            y: 90
            width: 216
            height: 192
            z: 1
        }

        Text {
            id: text1
            x: 57
            y: 56
            text: qsTr("Text")
            font.pixelSize: 12
        }

        Text {
            id: text2
            x: 112
            y: 44
            text: qsTr("Text")
            font.pixelSize: 12
        }

        Text {
            id: text3
            x: 112
            y: 62
            text: qsTr("Text")
            font.pixelSize: 12
        }
    }
}
