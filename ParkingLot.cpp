#include"ParkingLot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), vehicleCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

int ParkingLot::getCount() const {
    return vehicleCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicleCount >= maxCapacity) {
        cout << "The lot is full" << endl;
        return;
    }

    vehicles[vehicleCount] = vehicle;
    vehicleCount++;
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicleCount--;

            // Shift remaining vehicles in the array
            for (int j = i; j < vehicleCount; ++j) {
                vehicles[j] = vehicles[j + 1];
            }
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}

Vehicle* ParkingLot::getVehicle(int i) {
    return vehicles[i];
}
int ParkingLot::countOverStayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
} 
ParkingLot::~ParkingLot() {
    for (int i = 0; i < vehicleCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}