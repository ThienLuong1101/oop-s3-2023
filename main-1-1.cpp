#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motobike.h"
using namespace std;


int main() {
    int c, b, m;
    cout << "How many cars?: ";
    cin >> c;
    cout << "How many buses?: ";
    cin >> b;
    cout << "How many motobikes?: ";
    cin >> m;
    Vehicle** vehicles = new Vehicle*[c+b+m];
    for (int i = 0; i < c; i++)
    {
        vehicles[i] = new Car();
    }
    for (int i = 0; i < b; i++)
    {
        vehicles[i+c] = new Bus();
    }
    for (int i = 0; i < m; i++)
    {
        vehicles[i+c+b] = new Motobike();
    }

    while (true)
    {
        for (int i = 0; i < c+b+m; i++)
        {
            cout << vehicles[i]->getParkingDuration() << endl;
        }
    }





    for (int i = 0; i < c+b+m; i++)
    {
        delete vehicles[i];
    }
    delete [] vehicles;
    return 0;
}