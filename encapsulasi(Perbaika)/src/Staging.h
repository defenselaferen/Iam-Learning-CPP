#ifndef STAGING_H
#define STAGING_H

#include <string>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_STAGING
#define STAGING __declspec(dllexport)
#else
#define STAGING __declspec(dllimport)
#endif

void __stdcall STAGING TestPlay();

class STAGING Weapon {
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

class STAGING Player {
    private:
        std::string name;
        Weapon* weapon;
        int health;
    public:
        Player(const char*, int);
        void display();
        // setter
        void equipWeapon(Weapon*);
        void InAttack(Weapon*);
};

class STAGING Enemy {
    private:
        std::string name;
        Weapon* weapon;
        int health;
    public:
        Enemy(const char*, int);
        void display();
        // setter
        void equipWeapon(Weapon*);
        void InAttack(Weapon*);
};

void STAGING AttackPlayer(Player*, Weapon*);
void STAGING AttackEnemy(Enemy*, Weapon*);

#ifdef __cplusplus
}
#endif
#endif