#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
#include <vehicle.h>

//char driverInput;

class Sm {
private: int state; Vehicle *veh_ptr;
public: Sm(Vehicle *veh_ptr_in): state(0), veh_ptr(veh_ptr_in){}

    enum vehicle_state{off_state,neutral_state,accel_state,decel_state};
    //vehicle_state state = off_state;
    int timer1 = 0;
    static const int timeout1 = 3;
    int timeout2 = 4;
    std::string getStateString();

    void processEvent(char driverInput);
    //void testStateMachine(void);
    //char driverInput_prufer(char driverinput);

};
#endif // STATEMACHINE_H
