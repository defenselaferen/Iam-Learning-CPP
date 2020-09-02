#include <iostream>
#include <string>
#include "lib/Player.hpp"
#include "lib/Weapon.hpp"
#include "lib/Enemy.hpp"

using namespace std;

int main(int argc, const char *argv[]) {
    Player* player1 = new Player("Ucup", 100);
    Weapon* weaponPlayer1 = new Weapon("senapan", 50);

    Enemy* Enemy1 = new Player("Marti", 100);
    Weapon* weaponEnemy1 = new Weapon("senapan", 50);

    // Implementasi setter untuk mengequip weapon
    player1->equipWeapon(weaponPlayer1);
    Enemy1->equipWeapon(weaponEnemy1);


    player1->display();

    return 0;
}