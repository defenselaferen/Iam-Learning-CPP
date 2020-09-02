#include <iostream>
#include <stdlib.h>
#include "Player.hpp"

Player::Player(const char* name, int health) {
    this->health = health;
    this->name = name;
}

void Player::display() {
    std::cout << "PLayer Ini Adalah : " << this->name << std::endl;
    std::cout << "Menggunakan senjata : " << this->weapon->getName() << std::endl;
}

void Player::equipWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Player::AttackEnemy(Enemy* enemy) {
    enemy->InAttack(rand() * this->weapon->getAttackPower() + 1);
}

void Player::InAttack(int attack) {
    this->health -= attack;
}