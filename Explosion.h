#ifndef EXPLOSION_H
#define EXPLOSION_H

#include"GameEntity.h"
#include"Effect.h"
class Explosion: public GameEntity, Effect
{
private:

public:
    Explosion(int x, int y) : GameEntity(x,y,'E') {}
    virtual void apply(GameEntity& entity) {
        entity = GameEntity(-1,-1,'X');
    }
};



#endif