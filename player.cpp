#include"player.h"
#include<iostream>
#include<string>
using namespace std;

        
Player::Player() {};
void Player::setName(string Name) {name = Name;}
string Player::getName() {return name;}


void Player::setHealth(int Health) {health = Health;}
int Player::getHealth() {return health;}

void Player::setDamage(int Damage) {damage = Damage;}
int Player::getDamage() {return damage;}

Player::Player(string name, int health, int damage) {
    setHealth(health);
    setName(name);
    setDamage(damage);
}

void Player::takeDamage(int damage) {
    health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
};

void Player::attack(Player* opponent, int dmg) {
    this-> damage = dmg;
    
};

Player::~Player() {};



