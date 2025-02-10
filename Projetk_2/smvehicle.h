#ifndef SMVEHICLE_H
#define SMVEHICLE_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
#include <vehicle.h>
#include<Statemachine.h>
#include "smvehicleinterface.h"
//class SmVehicleInterface{
//public:
//    virtual double runGetXPos(void)=0;
//    virtual double runGetYPos(void)=0;
//    virtual void runSimulate(void)=0;
//    virtual void runProcessEvent (char diverInput)=0;
//    virtual std::string getSmVehicleString(void)=0;
//};
class SmVehicle : public SmVehicleInterface {
public:
    Vehicle myVehicle;
    Sm mySm;
    SmVehicle(void):myVehicle(), mySm(&myVehicle){}
    double runGetXPos(void) override;
     double runGetYPos(void) override;
    void runSimulate(void)override;
    void runProcessEvent (char driverInput)override;
    std::string getSmVehicleString(void)override;
};
#endif // SMVEHICLE_H
