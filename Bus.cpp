#include"Bus.h"

Bus::Bus() {};
Bus::Bus(int id) {};
int Bus::getParkingDuration() {
    std::time_t currentTime = std::time(nullptr);
    return static_cast<int>(currentTime - getTime()) * 0.75;
}
