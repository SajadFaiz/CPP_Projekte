//Authoren Bouzir, Wael (WB) --- Dhahri, Mohamed Wassim (MWD) --- Faiz, Ahmad Sajad (ASF)
// Die Kommenter zum Programm ist in main.cpp geschrieben

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <complex>

struct Vehicle {
    std::complex <double> s;     // Position
    std::complex <double> v;     // Geschwindigkeit
    std::complex <double> a;     // Beschleunigung
    double mass;            // Masse
    double F_max;           // Maximale Kraft
    std::complex <double> F_akt; // Aktuelle wirkende Kraft
    double dt;              // Zeitschritt

};

std::string getVehicleString();
void Init_Vehicle(double dt_in=1.,double Fmax_in=5000. ,double mass_in=500., std::complex <double> s_in = std::complex <double>(0.,0.));
void testVehicleSimulation(void);

void simulate(void);
void accel(void);
void decel(void);
void roll (void);
void up(void);
double GetXPos(void);
double GetYPos(void);
void up (void);
void down(void);

#endif // VEHICLE_H
