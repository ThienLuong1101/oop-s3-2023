#define MODIFIER_H
#include"GridUnit.h"
class Modifier
{
private:
    /* data */
public:
   virtual void apply(GridUnit& unit) = 0;
};
