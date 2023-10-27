#define OBSTACLE_H

#include"GridUnit.h"
#include"Modifier.h"
class Obstacle : public GridUnit, Modifier
{
private:
    /* data */
public:
    Obstacle(int x, int y) : GridUnit(x,y,'O') {}
};

