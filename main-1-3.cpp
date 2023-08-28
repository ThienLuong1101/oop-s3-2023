#include"ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include"string"
using namespace std;

int main() {
    ParkingLot park(10);
    string type;
    for (int i = 0; i < 10; i++)
    {   Vehicle *newVehicle;
        cout<<"What type of vehicle parking here?: ";
        cin >> type;
        if (type == "car")
        {
            newVehicle = new Car(i);
        }
        else if (type == "bus")
        {
            newVehicle = new Bus(i);
        }
        else if (type == "motorbike")
        {
            newVehicle = new Motorbike(i);
        }
        park.parkVehicle(newVehicle);
    }
    std::time_t startTime = std::time(nullptr);
    int limit = 0;
    int ans = 0;
    while (limit<15) {
        std::time_t currentTime = std::time(nullptr);
        limit = static_cast<int>(currentTime - startTime);
        for (int i = 0; i < 10; i++) {
            cout << "Vehicle parking duration: " << park.getVehicle(i)->getParkingDuration() << endl;
        }
         int maxParkingDuration = 15;
        ans = park.countOverstayingVehicles(maxParkingDuration); 
    }
    

    cout << "there are " << ans << " are overstaying" <<endl;
    return 0;
}
