import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.12

ApplicationWindow {
    id:root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Component.onCompleted: {
        helper.do1(root,mybutton)
    }

    Button{
        id:mybutton
        text: "MyButton"
        onClicked: {
            if(!(root.visibility & Qt.WindowFullScreen)) {
                root.showFullScreen()
            } else{
                root.showNormal()
            }
        }
    }
}
