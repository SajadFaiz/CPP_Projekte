#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
#include <vehicle.h>
#include<Statemachine.h>
#include<smvehicle.h>
using namespace std;


double SmVehicle::runGetXPos(void){
    return this->myVehicle.getXPos();
}
double SmVehicle:: runGetYPos(void){
    return this->myVehicle.getYPos();
}
void SmVehicle:: runSimulate(void){this->myVehicle.simulate();}
void SmVehicle::runProcessEvent (char driverInput){this->mySm.processEvent(driverInput);}
string SmVehicle::getSmVehicleString(void){
  return this->myVehicle.getVehicleString()+"\n\n    *****   state ist => "+this->mySm.getStateString()+"  *****  ";}
