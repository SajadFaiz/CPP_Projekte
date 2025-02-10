//author Ibrahim Regaieg , Josua Fuchs , Oussama ben Hamouda
/*05.05.2022 : die Funktionen accel, roll, deccel und simulate sind in main.cpp codiert
 *07.05.2022 : Ibrahim Regaieg,
 *ein Quell- und Headerdatei von Vehicle erstellt
 *die Funktionen sind von main.cpp nach vehicle.cpp gebracht
 *und die Variablen werden als complex<double> deklariert
 *
 *10.05.2022 : Josua Fuchs,
 *Quell- und Headerdatei von Statemachine erstellt
 *Switch-case und enum werden verwendet
 *die Funktione getStateString und testStateMachine implementiert
 *
 *13.05.2022 : Oussama ben Hamouda
 *Code fuer getXPos und getYPos hinzugefuegt
 *Funktion testVehicleSimulation implementieren
 *
 *17.05.2022 : Alle Mitglieder,
 *die Funktionen und die code verbessern
 *Zusammenbau in main.cpp (vehicle und Statemachine integrieren)
 */
/*31.05.2022 : Verbesserungsvorschläge und die Aufgaben teilen
 *07.06.2022 : Ibrahim Regaieg, Oussama ben Hamouda
 *vehicle.cpp ,vehicle.h verbessern
 *07.06.2022 : Josua Fuchs
 *Statemachine weiter entwickeln und verbessern
 *
 *14.06.2022 : Alle Mitglieder
 *smvehicleinterface.cpp , .h und smvehicle.cpp, .h erstellen
 *schwierigkeiten beim Integration
 *Qmldatei erstellen
 *
 *17.06.2022 : Alle
 *weiter mit Qml arbeiten
 *22.06.2022 : Dokumentation
 */



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

