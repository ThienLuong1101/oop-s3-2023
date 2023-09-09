#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle
{
 // creates an AirVehicle with weight w
float fuel =100;
int weight;        // the weight of AirVehicle float fuel;                  // fuel percentage, initially 100%
int numberOfFlights = 0; // initially 0
public:
    AirVehicle();
    AirVehicle(int w);
    float get_fuel();
    void set_fuel(float f);
    int get_weight();
    void set_weight(int w);
    int get_numberOfFlights();
    void set_numberOfFlights(int num);
    void refuel();      // Resets fuel back to 100%
    virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};


#endif