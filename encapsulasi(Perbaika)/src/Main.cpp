#include <iostream>
#include <string>
#include "Staging.h"

using namespace std;

int main(int argc, const char* argv[]) {

    Player* player1 = new Player("Swiper", 50);
    Weapon* WeaponPlayer1 = new Weapon("Sniper", 8);
    player1->equipWeapon(WeaponPlayer1);

    Enemy* enemy1 = new Enemy("Ucup", 40);
    Weapon* WeaponEnemy1 = new Weapon("Senapan", 5);
    enemy1->equipWeapon(WeaponEnemy1);

    player1->display();
    cout << endl;
    enemy1->display();
    cout << endl;

    // AttackPlayer, AttackPlayer
    AttackPlayer(player1, WeaponEnemy1);
    player1->display();


    cin.get();
    return 0;
}