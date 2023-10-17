#include"Effect.h"
#include"GameEntity.h"
#include"Utils.h"


int main() {
    int gridWidth = 10;
    int gridHeight = 10;
    tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth,gridHeight);
    tuple<int,int> pos2 = Utils::generateRandomPos(gridWidth,gridHeight);
    
    double distance = Utils::calculateDistance(pos1, pos2);

     std::cout << "Random Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")" << std::endl;
    std::cout << "Random Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")" << std::endl;
    std::cout << "Distance between positions: " << distance << std::endl;
    return 0;
}