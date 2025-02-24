#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <vehicle.h>
#include<Statemachine.h>
#include<smvehicle.h>
#include "smvehicleinterface.h"
#include "smvehicle.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{


    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    SmVehicleInterface * mySmVehiclePtr =new SmVehicle ;
    Vehicle p1;
    // cout<<p1.v<<endl;
    p1.Aktuelle_werte();
    p1.testVehicleSimulation();

    engine.rootContext()->setContextProperty("mySmVehicle", mySmVehiclePtr);

   engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
   if (engine.rootObjects().isEmpty())
       return -1;
   return app.exec();

}

