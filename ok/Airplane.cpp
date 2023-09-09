#include "Airplane.h"

Airplane::Airplane() {}
Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

int Airplane::get_numPassengers() {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    if (get_fuel() < 20.0) {
        // Not enough fuel to take off.
        return;
    }

    double fuelConsumptionRate = 0.003;  // 0.3% fuel consumption per minute

    if (headwind >= 60) {
        fuelConsumptionRate = 0.005;  // 0.5% fuel consumption per minute in strong headwind
    }

    double extraFuelConsumption = 0.00001 * numPassengers;  // 0.001% extra fuel consumption per passenger

    set_fuel(get_fuel() - minutes * (fuelConsumptionRate + extraFuelConsumption));
    AirVehicle::fly(0,0);
}
