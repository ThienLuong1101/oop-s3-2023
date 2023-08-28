#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int vehicleCount = 0;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();

    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
};

#endif // PARKINGLOT_H
