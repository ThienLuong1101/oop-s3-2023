#include"AirVehicle.h"

class Airplane : public AirVehicle
{
private:
    int numPassengers;  
public:
    Airplane();                       
    Airplane(int w, int p);           // Create Airplane with weight w and passengers p

                 // number of passengers on the Airplan
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);          
};

