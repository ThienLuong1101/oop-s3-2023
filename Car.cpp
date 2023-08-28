#include"Car.h"

Car::Car() {};
Car::Car(int id) : Vehicle(id){}

int Car::getParkingDuration(){ 
    time_t currTime = time(nullptr);
    int elapsedTime = static_cast<int>(currTime - getTime());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    return elapsedTime; 

}
