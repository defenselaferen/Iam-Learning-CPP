#include <iostream>
#include <stdlib.h>
#include "Player.hpp"

Enemy::Enemy(const char* name, int health) {
    this->health = health;
    this->name = name;
}

void Enemy::display() {
    std::cout << "Enemy Ini Adalah : " << this->name << std::endl;
    std::cout << "Menggunakan senjata : " << this->weapon->getName() << std::endl;
}

void Enemy::equipWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Enemy::AttackPlayer(Player* player) {
    player->InAttack(rand() * this->weapon->getAttackPower() - 1);
}

void Enemy::InAttack(int attack) {
    this->health -= attack;
}