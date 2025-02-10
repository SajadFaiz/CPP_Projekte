#ifndef SMVEHICLEINTERFACE_H
#define SMVEHICLEINTERFACE_H
#include <iostream>
#include <sstream>
#include <iomanip>
#include <complex.h>
#include<string>
#include <vehicle.h>
#include<Statemachine.h>
#include<QObject>
#include<QString>


class SmVehicleInterface : public QObject {
    Q_OBJECT
public:

    Q_INVOKABLE virtual double runGetXPos( void)= 0;
    Q_INVOKABLE virtual double runGetYPos( void)= 0;
    Q_INVOKABLE virtual void runSimulate( void)= 0;
    virtual void runProcessEvent(char driverInputChar)= 0;
    Q_INVOKABLE virtual std::string getSmVehicleString(void)= 0;

    Q_INVOKABLE void runProcessEventWithQString(QString driverInputQString);
    void printInfoToDebugConsole( void);
    Q_INVOKABLE QString runGetSmVehicleQString(void);
    explicit SmVehicleInterface(QObject *parent = nullptr): QObject(parent){}
private:
    char getFirstChar(QString s);
};
#endif // SMVEHICLEINTERFACE_H
