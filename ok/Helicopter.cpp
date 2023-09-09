#include"Helicopter.h"

Helicopter::Helicopter() {};
Helicopter::Helicopter(int w, string n) {set_weight(w);};
void Helicopter::set_name(string n) {name = n;}
string Helicopter::get_name() {return name;} 
void Helicopter::fly(int headwind, int minutes)  {
    
    float curr = 0;
    float fu = get_fuel();
    int we = get_weight();
    if (fu >= 20)
    {
    
        if (headwind >= 40)
        {
            curr += 0.4*float(minutes);
        }
        else{
            curr += 0.18*float(minutes);
        }
        
        if (we > 5670)
        {
            curr+=float(we-5670)*0.01*float(minutes);
        }
        set_fuel(fu-curr);
        AirVehicle::fly(0,0);
    }
    
}