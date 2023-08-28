#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>

using namespace std;

int main() {
    int numCars, numBuses, numMotorbikes;
    cout << "How many cars?: ";
    cin >> numCars;
    cout << "How many buses?: ";
    cin >> numBuses;
    cout << "How many Motorbikes?: ";
    cin >> numMotorbikes;

    // Create instances of derived classes
    Motorbike m(1);
    Bus b(1);
    Car c(3);

    Vehicle** vehicles = new Vehicle*[numCars + numBuses + numMotorbikes];

    // Assign objects to the array
    for (int i = 0; i < numCars; i++) {
        vehicles[i] = new Car(c);
    }

    for (int i = 0; i < numBuses; i++) {
        vehicles[numCars + i] = new Bus(b);
    }

    for (int i = 0; i < numMotorbikes; i++) {
        vehicles[numCars + numBuses + i] = new Motorbike(m);
    }

    // Display parking durations
    while (true) {
        for (int i = 0; i < numCars + numBuses + numMotorbikes; i++) {
            cout << "Vehicle parking duration: " << vehicles[i]->getParkingDuration() << endl;
        }
    }

    // Clean up memory
    for (int i = 0; i < numCars + numBuses + numMotorbikes; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;

    return 0;
}
