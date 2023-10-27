#include"Obstacle.h"
#include"Avatar.h"
#include"GridUnit.h"
#include<iostream>
using namespace std;
int main() {
    GridUnit b(5,5,'X');
    Obstacle a(2,3);
    Avatar c(1,1);
    cout << b.getEntity() << endl;
    a.apply(b);
    cout << a.getEntity() << endl;
    c.shift(2,2);
    return 0;
}