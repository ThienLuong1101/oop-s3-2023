#include"GameSession.h"
#include"Avatar.h"
#include"Obstacle.h"
#include"Helper.h"

int main() {
    GameSession game;
    game.initGameSession(3,3,5,5);
    game.gameCycle(2,2);
    std::vector<GridUnit*>& grid = game.getGrid();
    return 0;
}