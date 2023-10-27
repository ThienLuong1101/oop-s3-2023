#define AVATAR_H

#include"GridUnit.h"
class Avatar : public GridUnit
{

public:
    Avatar(int x, int y) : GridUnit(x,y,'A') {}
    void shift(int dx, int dy) {
        int x, y;
        tie(x,y) = coordinates;
        coordinates = make_tuple(x+dx,y+dy);
    }
};


