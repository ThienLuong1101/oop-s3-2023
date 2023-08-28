#ifndef VEHICLE_H
#define VEHICLE_H
#include <ctime>
using namespace std;
class Vehicle {
    private:
        time_t timeOfEntry = time(nullptr);
        int ID;
    public:
    Vehicle();
    Vehicle( int id);
    time_t getTime();
    int getID();
    virtual int getParkingDuration();
    ~Vehicle() ;
};

#endif