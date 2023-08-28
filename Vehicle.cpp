#include"Vehicle.h"
#include <ctime>
using namespace std;

Vehicle::Vehicle(){};
Vehicle::Vehicle( int id) : ID(id) {}
time_t Vehicle::getTime() {return timeOfEntry;}
int Vehicle::getID() {return ID;}

Vehicle::~Vehicle() {};

