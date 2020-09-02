#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon {
    private:
        std::string name;
        int attackPower;
    public:
        Weapon(const char*, int);
        void display();
        // getter, readonly
        std::string getName();
        int getAttackPower();
};

#endif