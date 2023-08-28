#include"Car.h"

Car::Car() {};
Car::Car(int id) : Vehicle(id){}

int Car::getParkingDuration(){ 
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(currentTime - getTime()) * 0.9;
}
