#include"AirVehicle.h"
#include<iostream>
using namespace std;
class Helicopter : public AirVehicle
{
    string name;  
    public:
        Helicopter();
        void set_name(string n);
        string get_name();
        Helicopter(int w, string n) ;    // creates a Helicopter with weight w and name n

                        // name of the Helicopter
        void fly(int headwind, int minutes);
};

