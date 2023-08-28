#include"Motorbike.h"


Motorbike::Motorbike(){};
Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration() {

        std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(currentTime - getTime()) * 0.85;
    
}

