#include"Bus.h"

Bus::Bus() {};
Bus::Bus(int id) {};
int Bus::getParkingDuration() {
    time_t currTime = time(nullptr);
    int elapsedTime = static_cast<int>(currTime - getTime());
    std::this_thread::sleep_for(std::chrono::milliseconds(1000 - 750));
    return elapsedTime; 
}
