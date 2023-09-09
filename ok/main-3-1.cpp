#include"AirFleet.h"
#include"Airplane.h"
#include"AirVehicle.h"
#include"Helicopter.h"
#include<iostream>

using namespace std;

int main() {
    Airplane(20, 10);
    Helicopter(10000, "BlackHawk"); 
    AirVehicle(5000);
    Helicopter(100, "WhiteHawk");
    Airplane(15, 20);
    
    return 0;
}