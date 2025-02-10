/*!
 * \Filename main.cpp
 * \Authoren Bouzir, Wael (WB) --- Dhahri, Mohamed Wassim (MWD) --- Faiz, Ahmad Sajad (ASF)
 * version: 2023-05-14:
 * Zustandsautomat zur Simualtion eines Fahrzeugs.
 * erste version 2023.05.04  Die Funktionen wie z.B. simulate,roll,accel,decel,up,down,GetXPos und andere notwendige Funktionen wurden definiert.
 * zweite version 2023.05.05 Die Dateien Vehicle.cpp & Vehicle.h werden gestellt .
 * dritte version 2023.05.12 Wir haben den Zustandautomat mit aller Zuständen geschrieben und die Statemachine.cpp & Statemachine.h gestellt.
 * vierte version 2023.05.13 Heute haben wir die beiden Teile des Programms mit einander integriert.
 * fuenftge Version 2023.05.14 Wir haben den Code nochmal kontrolliert und werden ihn in dem zustandigen Ordner Hochladen.
 */
#include <iostream>
#include "Vehicle.h"
#include "Statemachine.h"



using namespace std;


int main()
{

cout<<" Tippen Sie bitte b, um das Programm zu starten: "<<endl;

do
    {


        cin>>driverInput;
        processEvent(driverInput);
        cout<<getStateString()<<endl;
        cout<<getVehicleString()<<endl;

    }
    while(driverInput!='e');


    cin.ignore();

    return 0;
}
