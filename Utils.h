#ifndef Utils_H
#define Utils_H

#include <iostream>
#include <tuple>
#include <random>
#include <cmath>
using namespace std;
class Utils
{
private:
    tuple<int, int> position;
    char type;
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> widthDist(0,gridWidth - 1);
        uniform_int_distribution<int> heightDist(0,gridHeight -1);

        int randomX = widthDist(gen);
        int randomY = heightDist(gen);

        return make_tuple(randomX, randomY);
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        int x1, y1, x2, y2;
        tie(x1,y1) = pos1;
        tie(x2, y2) = pos2;

        double dx = x1 - x2;
        double dy = y1 - y2;

        return sqrt(dx*dx + dy*dy);
    }
};



#endif
