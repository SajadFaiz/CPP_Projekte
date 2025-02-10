//Authoren Bouzir, Wael (WB) --- Dhahri, Mohamed Wassim (MWD) --- Faiz, Ahmad Sajad (ASF)
// Die Kommenter zum Programm ist in main.cpp geschrieben

#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include <iostream>
#include<string>
//enum vehicle_states{off_state,neutral_state,accel_state,decel_state};

using namespace std;

string getStateString();
void processEvent(char driverInput);

char driverInput;

#endif // STATEMACHINE_H
