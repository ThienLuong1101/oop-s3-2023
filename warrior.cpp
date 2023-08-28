#include"warrior.h"
#include<iostream>
using namespace std;


Warrior::Warrior(string name, int health, int damage, string w) :Player(name,health,damage) {
        weapon = w;
}
void Warrior::swingWeapon(Player* opponent) {
    cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, getDamage());
    opponent->takeDamage(getDamage());
};
Warrior::~Warrior(){};


