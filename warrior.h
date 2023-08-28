#include"player.h"
using namespace std;

class Warrior : public Player
{  
private:
    string weapon;
public:
    Warrior(string name, int health, int damage, string w);
    void swingWeapon(Player* opponent) ;
    ~Warrior();
};

