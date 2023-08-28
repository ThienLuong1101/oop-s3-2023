#include"player.h"
using namespace std;

class Wizard : public Player
{  
private:
    int mana;
public:
    Wizard(string name, int health, int damage, int m);
    void castSpell(Player* opponent);
    ~Wizard();
};

