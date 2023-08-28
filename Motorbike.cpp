#include"Motorbike.h"


Motobike::Motobike(){};
Motobike::Motobike(int id) : Vehicle(id) {}
int Motobike::getParkingDuration() {

    time_t currTime = time(nullptr);
    int elapsedTime = static_cast<int>(currTime - getTime());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 850));
    return elapsedTime; 
    
}

