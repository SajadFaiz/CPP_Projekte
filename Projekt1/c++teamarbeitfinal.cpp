/*!
 * \file main.cpp
 * \author Ladhari,Mohamed Ali  (MAL), Bouzir ,Wael (WB), Faiz, Ahmad Sajad (ASF)
 * \version: 2022-11-25:
 *Zustandsautomat um einen Fahrzeug zu simulieren
 *erste version 2022.11.15  Difinition von Funktionen wie z.B. simulate,roll,accell,up,down ....
 *zweite version 2022.11.18 header datei und c++ quelldatei wurden zu vehicle gestellt.
 *dritte version 2022.11.22 der zustand automat mit header datei und c++ quelldatei wurden gestellt.
 *vierte version 2022.11.25 die beide teile wurden integreiert .
 */
#include <iostream>
#include "Vehicle.h"
#include "Statemachine.h"



using namespace std;


int main()
{
/*
    testVehicleSimulation();

 */
cout<<"Geben Sie b, um das Programm zu beginnen"<<endl;

do
    {

        cout<<"Ihre Angabe:"<<endl;

        cin>>driverInput;
        processEvent(driverInput);
        cout<<getStateString()<<endl;
        cout<<getVehicleString()<<endl;

    }
    while(driverInput!='e');


    cin.ignore();

    return 0;
}
