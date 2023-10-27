#define OBSTACLE_H

#include"GridUnit.h"
#include"Modifier.h"
class Obstacle : public GridUnit, Modifier
{
private:
    bool active = true;
public:
    Obstacle(int x, int y) : GridUnit(x,y,'O') {}
    bool isActive() {
        return active;
    }

    virtual void apply(GridUnit& unit) {
        if (active)
        {
            entity = 'O';
            active = false;
        }
    }

};

