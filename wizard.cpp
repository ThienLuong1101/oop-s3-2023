#include"wizard.h"
#include<iostream>
using namespace std;


Wizard::Wizard(string name, int health, int damage, int m) :Player(name,health,damage),mana(m) {

}
void Wizard::castSpell(Player* opponent) {
    attack(opponent, mana);
    cout << getName() << " casts a spell on " << opponent->getName() << " for " << getDamage() << " damage.\n";
    opponent->takeDamage(mana);
};
Wizard::~Wizard(){};

