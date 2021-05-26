import QtQuick 2.14
import QtQuick.Controls 2.14
import QtQuick.Controls.Material 2.12


Page{

    Connections{
        target: bridge
        function onSetConsoleText(text, port) {
            if (port == beaconSCC.port){
                beaconSCC.textConsole.text += qsTr(text);
            }
            else if (port == receptorSCC.port){
                receptorSCC.textConsole.text += qsTr(text);
                print(text);
                bridge.updateComponents(text);
            }
        }
    }
    FormulaDialog{
        id: exceptionDialog
        color: "#962726"
        iconSource: "images/icon_error.svg"
    }
    FormulaDialog{
        id: sucessDialog
        color: "#252525"
        iconSource: "images/icon_success.svg"
    }

    Rectangle{
        color: "#181818"
        anchors.fill: parent
        id: pageRect
        // property alias text1: textConsole.text

        Rectangle{
            color: "#181818"
            anchors.horizontalCenter: parent.horizontalCenter
            width: parent.width*0.95
            height: parent.height*0.95

                Row{
                    spacing: parent.width * 0.02
                    anchors.fill: parent
                    RoundComponent{
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_console.svg"
                        iconWidth: 36
                        iconHeight: 32.4
                        text: "Console"
                            
                            
                            SerialConnectComponent{
                                id: beaconSCC
                                anchors.horizontalCenter: parent.horizontalCenter
                                anchors.verticalCenter: parent.verticalCenter
                            }
                        
                    }
                    
                    RoundComponent{
                        boxWidth: parent.width * 0.49
                        iconSource:"images/icon_debug.svg"
                        iconWidth: 36
                        iconHeight: 36
                        text: "Debug"

                        SerialConnectComponent{
                            id: receptorSCC
                            anchors.horizontalCenter: parent.horizontalCenter
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }
                }
            
        }
    }
    

    
}
