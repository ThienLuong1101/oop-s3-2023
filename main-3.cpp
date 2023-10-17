#include <iostream>
#include "Game.h"

int main() {
    Game game;
    int numShips = 5;
    int numMines = 3;
    int gridWidth = 10;
    int gridHeight = 10;

    // Initialize the game
    std::vector<GameEntity*> entities = game.initGame(numShips, numMines, gridWidth, gridHeight);

    // Set the entities in the game
    game.set_entities(entities);

    // Simulate the game
    game.gameLoop(10, 2.5); // Simulate for 10 iterations with a mine distance threshold of 2.5

    // Display the state of the entities after the game loop
    const std::vector<GameEntity*>& finalEntities = game.get_entities();
    for (const GameEntity* entity : finalEntities) {
        std::cout << "Entity Type: " << entity->getType() << " at Position: ("
            << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    return 0;
}
