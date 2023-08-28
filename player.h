#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;
class Player
{
    private:
        string name;
        int health;
        int damage;
    public:
        
        Player();
        void setName(string Name);
        string getName();
        void setHealth(int Health);
        int getHealth();
        void setDamage(int Damage);
        int getDamage();
        Player(string name, int health, int damage);
        void takeDamage(int damage);
        void attack(Player* opponent, int dmg) ;
        ~Player() ;
};



#endif