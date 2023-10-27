#include"GameSession.h"


int main() {
    GameSession game;
    game.initGameSession(3,3,5,5);
    game.gameCycle(2,2);
    return 0;
}