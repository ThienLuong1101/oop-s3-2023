#ifndef HELPER_H
#define HELPER_H

#include<iostream>
#include<tuple>
#include<random>
#include<cmath>
using namespace std;

class Helper
{

public:
    static tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution WidDist(0,gridWidth-1);
        uniform_int_distribution HeiDist(0,gridHeight-1);
        int x = WidDist(gen);
        int y = HeiDist(gen);

        return make_tuple(x,y);

    }

    static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
        int x1, x2, y1, y2;
        tie(x1,y1)= coords1;
        tie(x2,y2) = coords2;

        double dx = x2 - x1;
        double dy = y2 - y1;

        return sqrt(dx*dx+dy*dy);
    }

};

#endif