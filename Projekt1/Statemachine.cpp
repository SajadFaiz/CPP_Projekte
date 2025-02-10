//Authoren Bouzir, Wael (WB) --- Dhahri, Mohamed Wassim (MWD) --- Faiz, Ahmad Sajad (ASF)
// Die Kommenter zum Programm ist in main.cpp geschrieben

#include <iostream>
#include<string>
#include<Vehicle.h>
//#include<Statemachine.h>


using namespace std;

enum vehicle_states{off_state,neutral_state,accel_state,decel_state};

static vehicle_states Zustand =off_state;
static int timer1=0;
static const int timeout1=3;
string getStateString(){
    string s;
    if (Zustand==0){
        s= "off";
    }
    else  if (Zustand==1){
        s= "neutral_state";
    }
    else if (Zustand==2){
        s= "accel_state";
    }
    else if (Zustand==3){
        s ="decel_state";
    }
    return s;
}
void processEvent(char driverInput){
    switch (Zustand) {

    case off_state:{
        if(driverInput=='b'){
            cout << "---done at event 'b'---" << endl;
            Init_Vehicle();
            Zustand= neutral_state;
        }
     else    if (driverInput=='t'){
            cout<< "---done at event 't'---" << endl ;
            timer1++;
            if(timer1>=timeout1){
                Zustand=neutral_state; Init_Vehicle(); timer1=0;
            }
        }
    break;
    }

    case neutral_state:{
        roll();simulate();

        if(driverInput=='e'){
        cout << "---done at event '0'---" << endl;
            Zustand=off_state;
        }
        else if(driverInput=='a'){
            cout << "---done at event 'a'---" << endl;
            Zustand=accel_state;
        }
        else if(driverInput=='r'){
            cout << "---done at event 'r'---" << endl;
            Zustand=decel_state;
        }
        else if(driverInput=='u'){
            cout << "---done at event up---" << endl;
            up();
        }
        else if(driverInput=='d'){
            cout << "done-at-event-down" << endl;
            down();
        }
    break;
    }

    case accel_state:{
        accel();simulate();

        if(driverInput=='0'){
            cout << "done-at-event-'0'" << endl;
            Zustand=neutral_state;
        }
        else  if(driverInput=='e'){
             cout << "---done at event 'e'---" << endl;
             Zustand=off_state;
        }
        else if(driverInput=='u'){
            cout << "---done at event up---" << endl;
            up();
        }
        else if(driverInput=='d'){
            cout << "---done at event down---" << endl;
            down();
        }
        else  if(driverInput=='r'){
            cout << "Change in State is not Possible!" << endl;
        }

    break;
    }

    case decel_state:{
        decel();simulate();

        if(driverInput=='0'){
            cout << "done at event 'NULL'---" << endl;
            Zustand=neutral_state;
        }
        else  if(driverInput=='e'){
             cout << "---done at event 'NULL'---" << endl;
             Zustand=off_state;
        }
        else if(driverInput=='u'){
            cout << "---done at event up---" << endl;
            up();
        }
        else  if(driverInput=='d'){
            cout << "---done at event down---" << endl;
            down();
        }
        else  if(driverInput=='a'){
            cout << "Change in State is not Possible!" << endl;
        }
    break;
    }
}
}
