#include"Airplane.h"
#include<iostream>
using namespace std;
int main() {
    Airplane c(1000,50);
    c.set_fuel(100);
    c.reducePassengers(4);
    cout << c.get_numPassengers() << endl;
    return 0;
}