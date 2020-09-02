#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.hpp"
#include "Enemy.hpp"

class Player {
    private:
        std::string name;
        Weapon* weapon;
        int health;
    public:
        Player(const char*, int);
        void display();
        // setter
        void equipWeapon(Weapon*);
        void InAttack();
        void AttackEnemy(Enemy*);
};

#endif