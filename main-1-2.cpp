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
    
    int id;
    cout << "enter an id to unpark a vehicle: ";
    cin >> id;
    park.unparkVehicle(id);
    
    return 0;
}
