#ifndef GAME_H
#define GAME_H

#include <vector>
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    const std::vector<GameEntity*>& get_entities() const {
        return entities;
    }

    void set_entities(std::vector<GameEntity*> newEntities) {
        entities = newEntities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
        for (int i = 0; i < numShips; ++i) {
            std::tuple<int, int> shipPos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Ship(std::get<0>(shipPos), std::get<1>(shipPos)));
        }

        for (int i = 0; i < numMines; ++i) {
            std::tuple<int, int> minePos = Utils::generateRandomPos(gridWidth, gridHeight);
            entities.push_back(new Mine(std::get<0>(minePos), std::get<1>(minePos)));
        }

        return entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold) {
        for (int iteration = 0; iteration < maxIterations; ++iteration) {
            for (GameEntity* entity : entities) {
                if (dynamic_cast<Ship*>(entity)) {
                    // Move all Ship objects
                    static_cast<Ship*>(entity)->move(1, 0);

                    // Check for Mine objects within the mineDistanceThreshold
                    for (GameEntity* otherEntity : entities) {
                        if (dynamic_cast<Mine*>(otherEntity)) {
                            double distance = Utils::calculateDistance(entity->getPos(), otherEntity->getPos());
                            if (distance < mineDistanceThreshold) {
                                // Explode the Mine
                                Explosion explosion = static_cast<Mine*>(otherEntity)->explode();

                                // Apply the explosion to the Ship
                                explosion.apply(*entity);
                            }
                        }
                    }
                }
            }
        }
    }

    // Destructor to clean up memory
    ~Game() {
        for (GameEntity* entity : entities) {
            delete entity;
        }
    }
};

#endif // GAME_H
