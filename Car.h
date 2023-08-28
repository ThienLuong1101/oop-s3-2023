#include"Vehicle.h"
#include <chrono>
#include <thread>
#include<iostream>
using namespace std;

class Car : public Vehicle {
    public:
    Car();
    Car(int id);
    int getParkingDuration();
    
};