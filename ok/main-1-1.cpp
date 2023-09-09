#include"AirVehicle.h"
#include<iostream>
using namespace std;
int main() {
    AirVehicle a(100);
    a.set_fuel(100);
    a.set_numberOfFlights(2);
    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;
    cout << a.get_weight() << endl;
    a.refuel();
    cout << a.get_fuel() << "%" << endl;
    return 0;
}