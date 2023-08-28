#include"Vehicle.h"
#include <chrono>
#include <thread>
#include<iostream>
using namespace std;


class Motobike : public Vehicle {
    public:
    Motobike();
    Motobike(int id);
    int getParkingDuration();
};