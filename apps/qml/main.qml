import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "Hello, World!"

    Text {
        anchors.centerIn: parent
        text: "Hello, World!"
        font.pixelSize: 24
    }
}