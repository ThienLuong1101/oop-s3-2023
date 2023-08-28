#include"Vehicle.h"
#include <chrono>
#include <thread>
#include<iostream>
using namespace std;

class Car : public Vehicle {
    public:
    Car(int id);
    int getParkingDuration();
    
};