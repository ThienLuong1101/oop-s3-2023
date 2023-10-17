#include"Ship.h"

void Ship::move(int dx, int dy) {
    int x, y;
    tie(x,y) = position;
    x += dx;
    y+= dy;
    position = make_tuple(x,y);
}