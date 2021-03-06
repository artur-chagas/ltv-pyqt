// Estamos usando o QT5
import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Layouts 1.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.14




ApplicationWindow{
    id:window
    visible: true
    minimumWidth: 600
    minimumHeight: 400
    maximumWidth: 600
    maximumHeight: 400
    title: qsTr("Live Telemetry Viewer")
    color: "#181818"

    Material.theme: Material.Dark
    Material.accent: Material.Yellow

    FontLoader{
        source:"fonts/Exo2-Regular.ttf"
        id:exo
    }
    FontLoader{
        source:"fonts/Exo2-ExtraBold.ttf"
        id:exoExtraBold
    }

    SerialSendComponent{
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
    }


}