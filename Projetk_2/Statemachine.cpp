#include <iostream>
#include <string>
#include<vehicle.h>
#include<Statemachine.h>
#include "smvehicleinterface.h"
#include "smvehicle.h"

string Sm:: getStateString(void){
    string str;
    switch (state){

        case off_state:{
            str = "Off_state";
        break;
        }
        case neutral_state:{
            str = "neutral_states";
        break;
        }
        case accel_state:{
            str = "accel_state";
        break;
        }
        case decel_state:{
            str = "deccel_state";
        break;
        }

    }
    return str;
}
void Sm::processEvent(char driverInput){

    switch (state){

    case off_state:{

        Vehicle();


        if(driverInput == 'b'){
            cout<<" ... done-at-event- 'b'"<<endl<<endl;
            Vehicle();
            state = neutral_state;
        }else if(driverInput == 't'){
            cout<< "... Done_at_event-'b'"<<endl<<endl;
            timer1++;
            --timeout2;
            cout<<"Wechsel in neutral in timer "<<timeout2<<endl;
            if(timer1 >= timeout1){
                Vehicle();
                state = neutral_state;
            }
        }

        break;
    }
    case neutral_state:{
//        if(driverInput == 'b'){
//            cout<<" ... done-at-event- 'b'"<<endl<<endl;
//            veh_ptr->Vehicle();
//            state = neutral_state;
//        }
        if(driverInput=='a'){
            cout<<"... done-at-event-'a'"<<endl<<endl;
            state=accel_state;
            veh_ptr->accel();veh_ptr->simulate();
        }
        else if(driverInput=='r'){
            cout<<"... done-at-event-'r'"<<endl<<endl;
            state=decel_state;
            veh_ptr->decel();veh_ptr->simulate();
        }

        else if(driverInput=='t'){
            cout<<"...done at-event-'t'"<<endl<<endl<<endl<<endl;
            state=neutral_state;
            veh_ptr->roll();veh_ptr->simulate();

        }
        else if(driverInput=='e'){
            cout<<"...done at-event-'e'"<<endl<<endl<<endl<<endl;
            state=neutral_state;
            Vehicle();
            veh_ptr->stop();

        }
        else if(driverInput=='o'){
            cout<<"...done at-event-'o'"<<endl<<endl<<endl<<endl;
            state= off_state;
         veh_ptr->init();
                veh_ptr->simulate();
                timer1 = 0;
        }
        else if(driverInput=='u'){
            cout<<"...done-at-event-up"<<endl<<endl;
            veh_ptr->up();veh_ptr->simulate();
            state=neutral_state;
        }
        else if(driverInput=='d'){
            cout<<"...done-at-event-down"<<endl<<endl;
            veh_ptr->down();veh_ptr->simulate();
            state=neutral_state;
        }


        break;
    }
    case accel_state:{

        if(driverInput=='0'){
            cout<<"...done-at-event-'0'"<<endl<<endl;
            state=neutral_state;
            veh_ptr->roll();veh_ptr->simulate();
        }
        else if(driverInput=='u'){
            cout<<"...done-at-event-up"<<endl<<endl;
            veh_ptr->up();veh_ptr->simulate();
            state=accel_state;
        }
        else if(driverInput=='d'){
            cout<<"...done-at-event-down"<<endl<<endl;
            veh_ptr->down();veh_ptr->simulate();
            state=accel_state;
        }
        else if(driverInput=='t'){
            cout<<"...done at-event-'t'"<<endl<<endl;
            state=accel_state;
            veh_ptr->accel();veh_ptr->simulate();
        }
        else if(driverInput=='a'){
            cout<<"... done-at-event-'a'"<<endl<<endl;
            state=accel_state;
            veh_ptr->accel();veh_ptr->simulate();
        }
        else if(driverInput=='o'){
            cout<<"...done at-event-'o'"<<endl<<endl<<endl<<endl;
            state= off_state;
         veh_ptr->init();
                veh_ptr->simulate();
                timer1 = 0;
        }
        else if(driverInput=='e'){
            cout<<"...done at-event-'e'"<<endl<<endl<<endl<<endl;
            state=neutral_state;
            Vehicle();
            veh_ptr->stop();
        }
        break;
    }//case
    case decel_state:{

        if(driverInput=='0'){
            cout<<"...done-at-event-'0'"<<endl<<endl;
            state=neutral_state;
            veh_ptr->roll();veh_ptr->simulate();

        }
        else if(driverInput=='u'){
            cout<<"...done-at-event-up"<<endl<<endl;
            veh_ptr->up();veh_ptr->simulate();
            state=decel_state;
        }
        else if(driverInput=='d'){
            cout<<"...done-at-event-down"<<endl<<endl;
            veh_ptr->down();veh_ptr->simulate();
            state=decel_state;
        }
        else if (driverInput=='t'){
            cout<<"...done-at-event-'t'"<<endl<<endl;
            state=decel_state;
        }
        else if(driverInput=='r'){
            cout<<"... done-at-event-'r'"<<endl<<endl;
            state=decel_state;
            veh_ptr->decel();veh_ptr->simulate();
        }
        else if(driverInput=='o'){
            cout<<"...done at-event-'o'"<<endl<<endl<<endl<<endl;
            state= off_state;
         veh_ptr->init();
                veh_ptr->simulate();
                timer1 = 0;
        }
        else if(driverInput=='e'){
            cout<<"...done at-event-'e'"<<endl<<endl<<endl<<endl;
            state=neutral_state;
            Vehicle();
            veh_ptr->stop();
        }

        break;
    }

    }
}

/*void testStateMachine(void){
     cout<<"\n Zum Starten  Bitte 'b' eingeben\n"<<endl<<endl;
           do{
                    cout<< "Ihre Eingabe: ";
                    cin>> driverInput;


                    processEvent(driverInput);


                    cout <<getVehicleString()<<endl<<endl<<endl<<endl;

                    cout<<"\n****************************************************************************************************\n";




           }while(driverInput!= 'e');


       }
*/
