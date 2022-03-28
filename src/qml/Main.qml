import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: _root

    title: qsTr("Kape Test")
    width: 400
    height: 250
    visible: true

    Column {
        spacing: 20
        anchors.centerIn: parent

        Row {
            spacing: 20

            Label {
                text: "Input: "
                font.pixelSize: 20
            }

            TextField {
                id: tfinput
                text: ""
                font.pixelSize: 20
            }

            Button {
               text: "Sort"
                onClicked: {
                    var arr = backend.sort_numbers(tfinput.text)
                    tfout.text = arr.toString()
                }
            }
        }


        Row
        {
            spacing: 20

            Label {
                text: "Output:"
                font.pixelSize: 20
            }

            TextField {
                id: tfout
                text: ""
                font.pixelSize: 20
            }
        }
    }



}
