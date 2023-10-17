#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include<tuple>
using namespace std;
class GameEntity {
protected:
    std::tuple<int, int> position;
    char type;

public:
    GameEntity(int x, int y, char entity_type) : position(std::make_tuple(x, y)), type(entity_type) {}

    virtual ~GameEntity() {} // Add a virtual destructor

    std::tuple<int, int> getPos() const { // Mark getPos as const
        return position;
    }

    char getType() const { // Mark getType as const
        return type;
    }
};




#endif
