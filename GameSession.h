#ifndef GAMESESSION_H
#define GAMESESSION_H

#include"GridUnit.h"
class GameSession
{
private:
    /* data */
public:
    GameSession(/* args */);
    ~GameSession() {
        for (GridUnit unit : unities)
        {
            delete unit;
        }
        
    }
};




#endif