#include"Vehicle.h"
#include <chrono>
#include <thread>
#include<iostream>
using namespace std;

class Bus : public Vehicle {
    public:
    Bus();
    Bus(int id);
    int getParkingDuration();
};