#ifndef __ENEMY
#define __ENEMY

#include <string>
#include "Weapon.hpp"
#include "Player.hpp"

class Enemy {
    private:
        std::string name;
        Weapon* weapon;
        int health;
    public:
        Enemy(const char*, int);
        void display();
        // setter
        void equipWeapon(Weapon*);
        void InAttack(int);
        void AttackPlayer(Player*);
};

#endif