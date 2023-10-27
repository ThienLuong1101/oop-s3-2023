#include"GridUnit.h"
#include"Helper.h"
#include"Modifier.h"

#include"tuple"
#include<iostream>
using namespace std;

int main() {
    GridUnit unit(5,5,'X');
    tuple<int,int> pos1 = unit.getCoordinates();
    cout << get<0>(pos1) << get<1>(pos1) << endl;
    cout << unit.getEntity() << endl;
    tuple<int,int> pos2 = Helper::generateRandomCoordinates(5,5);
    cout << get<0>(pos2) << get<1>(pos2) << endl;
    cout << Helper::calculateDistance(pos1,pos2)<< endl;
    return 0;
}