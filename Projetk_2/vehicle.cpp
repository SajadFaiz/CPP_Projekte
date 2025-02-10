#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
#include <vehicle.h>

using namespace std;


    void Vehicle::accel (void){
        this->F_akt.real(this->F_max);
    }
    void Vehicle::simulate (void){
        this->a = this->F_akt / this->M_veh;
        this->v = this->v + this->a;
        this->s = this->s + this->v;
    }
    void Vehicle::roll(void){
         this->F_akt = complex<double>(0. , 0.);
    }
    void Vehicle::decel(void){
        this->F_akt.real(-this->F_max);
    }
    void Vehicle::up(){
        this->F_akt.imag(this->F_max);
    }
    void Vehicle::down(){
        this->F_akt.imag(-this->F_max);
    }
    double Vehicle::getXPos(void){
        return this->s.real();
    }
    double Vehicle::getYPos(void){
        return this->s.imag();
    }
    void Vehicle::stop (void){
        this->a = 0;
        this->v = 0;

    }
    void Vehicle::init (void){
        this->a = 0;
        this->v = 0;
        this->s = complex<double>(0., 200.);
    }

    string Vehicle::getVehicleString(){
    std::string vehicule_data= "F_max :"+ to_string(this->F_max)+"\t\tM_veh:"+ to_string(this->M_veh)+"\t\tF_akt: "+to_string(this->F_akt.real())+" | "+to_string(this->F_akt.imag())+"\ns : "+ to_string(this->s.real())+"  "+to_string(this->s.imag())+"\t\tv:"+to_string(this->v.real())+"  "+to_string(this->v.imag())+" \t\ta     :"+to_string(this->a.real())+"  "+to_string(this->a.imag());
    return vehicule_data;
    }
    void Vehicle::testVehicleSimulation(void){

    //init_vehicle(10000 , 500 ,(0 , 0),(0 , 0),(0 , 0),(0 , 0));
    cout<< "\nTest der VehicleSimulation:\n";
    cout << "\nSimulate int_vehicle:\n\n"<<getVehicleString()<<endl<<endl<<endl<<endl;
    accel();
    simulate();
    cout << "Simulate accel:\n\n"<<getVehicleString()<<endl<<endl<<endl<<endl;
    roll();
    simulate();
    cout <<"Simulate roll:\n\n"<< getVehicleString()<<endl<<endl<<endl<<endl;


    }
    void Vehicle::Aktuelle_werte(void){
       // init_vehicle();
        Vehicle();
        cout<< "\nAktuelle Werte:\n"<<endl;
        cout<<"Position       :\t("<<this->s.real()<<","<<this->s.imag()<<")"<<endl;
        cout<<"Geschwindigkeit:\t("<<this->v.real()<<","<<this->v.imag()<<")"<<endl;
        cout<<"Beschleunigung :\t("<<this->a.real()<<","<<this->a.imag()<<")"<<endl;
        cout<<"Masse          :\t "<<this->M_veh<<endl;
        cout<<"Kraft Max      :\t"<<this->F_max<<endl;
        cout<<"Aktuelle Kraft :\t("<<this->F_akt.real()<<","<<this->F_akt.imag()<<")"<<endl;
    }


