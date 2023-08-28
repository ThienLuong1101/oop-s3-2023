#include"Motorbike.h"


Motorbike::Motorbike(){};
Motorbike::Motorbike(int id) : Vehicle(id) {}
int Motorbike::getParkingDuration() {

    time_t currTime = time(nullptr);
    int elapsedTime = static_cast<int>(currTime - getTime());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 850));
    return elapsedTime; 
    
}

