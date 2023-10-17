#include"Explosion.h"
#include"Ship.h"
#include"Mine.h"

#include<iostream>
using namespace std;
int main() {
    Ship ship(2,3);
    Mine mine(4,5);

    ship.move(1,1);
    cout << "Ship Position: (" << get<0>(ship.getPos()) << "," << get<1>(ship.getPos()) << ")" << endl;
    cout << "Ship Type: " << ship.getType() << endl;
    Explosion explosion(2,2);
    cout << explosion.getType() << endl;
    explosion = mine.explode();
    cout << "Mine Type after explosion: " << mine.getType() << endl;
    explosion.apply(ship);
    cout << "Ship Position after explosion: (" << get<0>(ship.getPos()) << ", " << get<1>(ship.getPos()) << ")" << endl;
    cout << "Ship Type after explosion: " << ship.getType() << endl;

    return 0;
}