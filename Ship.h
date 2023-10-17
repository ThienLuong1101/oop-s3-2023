#ifndef SHIP_H
#define SHIP_H

#include"GameEntity.h"
#include"Effect.h"
class Ship: public GameEntity
{
private:

public:
    Ship(int x, int y) : GameEntity(x,y,'X') {}
    void move(int dx, int dy) {
        int x, y;
        tie(x,y) = position;
        x += dx;
        y+= dy;
        position = make_tuple(x,y);
    }
};



#endif