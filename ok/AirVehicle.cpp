#include"AirVehicle.h"
AirVehicle::AirVehicle() {}
AirVehicle::AirVehicle(int w) {weight = w;}
float AirVehicle::get_fuel() {return fuel;}
void AirVehicle::set_fuel(float f) {fuel = f;}
int AirVehicle::get_weight() {return weight;}
void AirVehicle::set_weight(int w) {weight = w;}
int AirVehicle::get_numberOfFlights() {return numberOfFlights;}
void AirVehicle::set_numberOfFlights(int num) {numberOfFlights=num;}
void AirVehicle::refuel() {fuel = 100.0;}      // Resets fuel back to 100%
void AirVehicle::fly(int headwind, int minutes) {numberOfFlights++;} // headwind in km/h and minutes (time flying)
