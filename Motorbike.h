#include"Vehicle.h"
#include <chrono>
#include <thread>
#include<iostream>
using namespace std;


class Motorbike : public Vehicle {
    public:
    Motorbike();
    Motorbike(int id);
    int getParkingDuration();
};