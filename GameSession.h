#ifndef GAMESESSION_H
#define GAMESESSION_H

#include"GridUnit.h"
#include"Avatar.h"
#include"Obstacle.h"
#include"Helper.h"
#include<vector>
using namespace std;
class GameSession
{
private:
    vector<GridUnit*> grid;
    int maxHei, maxWid;
    
public:
    GameSession(){}
    vector<GridUnit*>& getGrid() {
            return grid;
        }
    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
        maxHei = gridHeight;
        maxWid = gridWidth;
        for (int i = 0; i < numAvatars; i++)
        {
            std::tuple<int, int> pos = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Avatar(std::get<0>(pos), std::get<1>(pos)));
        }
        for (int i = 0; i < numObstacles; i++)
        {
            std::tuple<int, int> Pos = Helper::generateRandomCoordinates(gridWidth, gridHeight);
            grid.push_back(new Obstacle(std::get<0>(Pos), std::get<1>(Pos)));
        }
        
    }


    void gameCycle(int maxCycles, double obstacleActivationDistance){
            bool win = false;
            for (int currentCycle = 0; currentCycle < maxCycles; ++currentCycle) {
                for (GridUnit* one : grid) {
                    if (one->getEntity() == 'A' && win == false) {
                        static_cast<Avatar*>(one)->shift(1,0);
                        tuple<int, int> newOne = one->getCoordinates();
                        if (get<0>(newOne) > this->maxWid || get<1>(newOne) > this->maxHei){

                            cout << "Avatar has won the game!" << endl;
                            win = true;
                            break;

                        }

                        for (GridUnit* two : grid) {
                            if (two->getEntity() == 'O' ) {
                                double distance = Helper::calculateDistance(one->getCoordinates(), two->getCoordinates());
                                if (distance < obstacleActivationDistance) {
                                    Avatar ava(1,1);
                                    static_cast<Obstacle*>(two)->apply(ava);
                                    one->setEntity('O');

                                }
                            }
                        }
                    }
                }
            }
            if (win == false){
                cout << "Maximum number of cycles reached. Game over." << endl;
            }
    }

    ~GameSession() {
        // for (GridUnit* unit : grid)
        // {
        //     delete unit;
        // }
        
    }
};




#endif