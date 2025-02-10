import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
Window {
    id: myWindow
    width: 640
    height: 480
    visible: true
    color: "green"
    title: qsTr("Praktikum3 : ")

    Rectangle{ // Ziel
           id: ziel1
           x:810
           //y: 20
           width: 40
           height:400
           color: "black"
           Text {
           text: "Ziel"
           }
}
    Button {
        x: 20; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "b" );
            color: "black"
        }

        text: "'b'"
    }
    Button{
        x: 40; y: 40;
        onClicked: {
            mySmVehicle.runProcessEventWithQString( "a" );
        }
        text: "'a'"
    }
    Button{
        x: 60; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "r" );
        }
        text: "'r'"
    }
    Button{
        x: 80; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "d" );
        }
        text: "'u'"
    }
    Button{
        x: 100; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "u" );
        }
        text: "'d'"
    }

    Button{
        x: 120; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "0" );
        }
        text: "'0'"
    }
    Button{
        x: 240; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "o" );
        }
        text: "'zu null'"
    }

    Button{
        x: 140; y: 40;

        onClicked: {
            mySmVehicle.runProcessEventWithQString( "e" );
        }
        text: "'e'"
    }


    Rectangle{
        id : myCar1
    x: 100; y: 100; width: myWindow.width/8 ; height: width/2
    color: "gray"

    Text {
    id :text1
    text: "car1: " + myCar1.x
    //text: "car1: " + myCar1.y
    }
    Rectangle{

       anchors.top: parent.bottom
       anchors.left:parent.left
       width: parent.width/3 ;
       height: width;
       color: "red"
       border.color: "#000000"
       radius: width/2;

       }
    Rectangle{
      //    x: 10; y: 10;
       anchors.top: parent.bottom
       anchors.right:parent.right
       width: parent.width/3 ;
       height: width;
       color: "red"
       border.color: "#000000"
       radius: width/2;

       }
       Rectangle{
         //    x: 10; y: 10;
          anchors.bottom: parent.top
          anchors.horizontalCenter:parent.horizontalCenter
          width: parent.width/2 ; height: width/2;
          color: "gray"
          border.color: "#000000"

         }


    }


    Text {
        id: myText1
        text: "SmVehicleText"
        anchors.bottom: parent.bottom
    }
    Text {
        id: myText2
            x: 60; y: 10;
            color: "#3c21b5"
            text: "* Fahrzeugsimulation *"
        font.bold: true
        font.italic: true
        styleColor: "#68d96c"
        font.pointSize: 15
        // anchors.bottom: parent.bottom
    }
        Timer {
               id: mainTimer
               interval: 150; running: true ; repeat: true
               onTriggered: {
                   if(myCar1.x >560){

                       running: false;
                       myCar1 = 600;
                   }

            mySmVehicle.runProcessEventWithQString("t");
            mySmVehicle.runSimulate();
            myCar1.x= mySmVehicle.runGetXPos();
            myCar1.x = myCar1.x % myWindow.width
            myCar1.x = (myCar1.x >= 0) ? (myCar1.x) : (myCar1.x + myWindow.width)
            myCar1.y= mySmVehicle.runGetYPos();
           myCar1.y = myCar1.y % myWindow.width
            myCar1.y = (myCar1.y >= 0) ? (myCar1.y) : (myCar1.y + myWindow.width)
            myText1.text= "SmVehicle: " + mySmVehicle.runGetSmVehicleQString()
        }
    }
}

