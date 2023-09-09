#include"Helicopter.h"
#include"AirVehicle.h"

#include<iostream>

using namespace std;

int main() {
    Helicopter h(5690,"God");
    h.set_fuel(45);
    h.fly(,45);
    cout<< h.get_weight() << endl;
    cout << h.get_fuel() << "%" << endl;
    cout<< h.get_numberOfFlights() << endl;
    
    return 0;
}