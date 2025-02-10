//Authoren Bouzir, Wael (WB) --- Dhahri, Mohamed Wassim (MWD) --- Faiz, Ahmad Sajad (ASF)
// Die Kommenter zum Programm ist in main.cpp geschrieben

#include <iostream>
#include "Vehicle.h"
#include <string>
#include <complex>

using namespace std;

static Vehicle v1;

void simulate (void)
{

    complex <double> v_letzte=v1.v;

    v1.v=v1.v+(v1.a*v1.dt);

    complex <double> v_mittel=(v_letzte+v1.v)*0.5;

    v1.s=v1.s+(v_mittel*v1.dt);

    v1.a = v1.F_akt / v1.mass;

    v1.v = v1.v + v1.a*v1.dt;

    if (v1.v.real ()   <= -20 ){

        v1.v.real(-20);
    }

    v1.s = v1.s + v1.v*v1.dt;
    v1.F_akt=complex<double> (0,0);
}

void accel (void){

    v1.F_akt.real(v1.F_max);

}

void roll(void){

     v1.F_akt = complex<double>(0. , 0.);
}

void decel(void){

    v1.F_akt.real(-v1.F_max);
}

void up(void){

    v1.F_akt.imag(v1.F_max);
}

void down(void){

    v1.F_akt = complex<double>(0. , -v1.F_max);
}

double GetXPos(void){

    return v1.s.real();
}

double GetYPos(void){

    return v1.s.imag();
}

void Init_Vehicle(double dt_in,double Fmax_in,double mass_in, complex <double> s_in)
{

    v1.dt=dt_in;
    v1.mass=mass_in;
    v1.F_max=Fmax_in;
    v1.F_akt= complex<double> (0,0);
    v1.s= s_in;
    v1.v= complex<double> (0,0);
    v1.a= complex<double> (0,0);
}

string getVehicleString(void)
{

    cout << "Daten des Fehrzeugs : "<<endl;

    return "\n aktuelle Pos in den X & Y Achsen:\t" "("+ to_string(v1.s.real())+","+to_string(v1.s.imag())+")"
          +"\n Geschwindigkeit in den X & Y Achsen:" "("+ to_string(v1.v.real())+","+to_string(v1.v.imag())+")"
          +"\n Beschelunigung in den X & Y Achsen:" "("+ to_string(v1.a.real())+","+to_string(v1.a.imag())+")"
          +"\n Die Masse lautet:\t"+ to_string(v1.mass);

}

void testVehicleSimulation(void)
{
    Init_Vehicle(1.,10000.,500.,0.0); //Param.: (dt, F, m, s)
    cout<<getVehicleString()<<endl;

    decel();
    simulate();
    cout<<getVehicleString()<<endl;

    accel();
    simulate();
    cout << getVehicleString()<< endl;

    cout << "Position der  X Achse:" << GetXPos()<< endl;
    cout << "Position der Y Achse:" << GetYPos() << endl;

    up();
    simulate();
    cout << getVehicleString() << endl;

    roll();
    simulate();
    cout << getVehicleString() << endl;

    down();
    simulate();
    cout << getVehicleString() << endl;
}
