#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
using namespace std;
class Vehicle {
private:

public:
    double F_max ;
    double M_veh ;
    complex<double> s  ;
    complex<double> v;
    complex<double> a ;
    complex<double> F_akt ;

    Vehicle(void):F_max(100),M_veh(500),s(0., 200.),v(0., 0.),a(0., 0.),F_akt(0., 0.){}
    //void Printf_vehicle_data (void);
    void accel (void);
    void simulate (void);
    void roll(void);
    void decel(void);
    void up();
    void down();
    double getXPos(void);
    double getYPos(void);
    void stop (void);
    void init (void);

    std::string getVehicleString();
    void testVehicleSimulation(void);
    void Aktuelle_werte(void);

};

#endif // VEHICLE_H
