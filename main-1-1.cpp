#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"
using namespace std;


int main() {
    int ca, bu, mo;
    cout << "How many cars?: ";
    cin >> ca;
    cout << "How many buses?: ";
    cin >> bu;
    cout << "How many Motorbikes?: ";
    cin >> mo;
    Motorbike m(3);
    Bus b(1);
    Car c(2);
    Vehicle** vehicles = new Vehicle*[ca+bu+mo];
    for (int i = 0; i < ca; i++)
    {
        vehicles[i] = new Car(c);
    }
    for (int i = 0; i < bu; i++)
    {
        vehicles[i+ca] = new Bus(b);
    }
    for (int i = 0; i < mo; i++)
    {
        vehicles[i+ca+bu] = new Motorbike(m);
    }

    while (true)
    {
        for (int i = 0; i < ca+bu+mo; i++)
        {
            cout << vehicles[i]->getParkingDuration() << endl;
        }
    }





    for (int i = 0; i < ca+bu+mo; i++)
    {
        delete vehicles[i];
    }
    delete [] vehicles;
    return 0;
}