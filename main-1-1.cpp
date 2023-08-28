#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"

using namespace std;

int main() {
    //Wizard(name, health, damage, mana)
    Wizard wizard("Gandalf", 1000, 20, 50);
    //Warrior(name, health, damage, weapon)
    Warrior warrior("Aragorn", 150, 50, "Sword");
    
    cout << "Let the battle begin!" << endl;
    
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() > 0) {
            warrior.swingWeapon(&wizard);
        }
    }
    
    if (wizard.getHealth() > 0) {
        cout << wizard.getName() << " wins!" << endl;
    } else {
        cout << warrior.getName() << " wins!" << endl;
    }
    
    return 0;
}
