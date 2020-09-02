#include <iostream>
#include <string>
#include "Staging.h"

using namespace std;

// Check Testing Void

__stdcall void TestPlay() {
    cout << "Staging Play Is Ready" << endl;
}

// End Check Testing Void

// Start Of Class Weapon

Weapon::Weapon(const char* name, int ATP) {
    this->name = name;
    this->attackPower = ATP;
}

void Weapon::display() {
    cout << "Name Weapon : " << this->name << endl;
    cout << "Power Weapon : " << this->attackPower << endl;
}

std::string Weapon::getName() {
    return this->name;
}

int Weapon::getAttackPower() {
    return this->attackPower;
}

// End Of class Weapon

// Start Of Class Player 

Player::Player(const char* name, int HT) {
    this->name = name;
    this->health = HT;
}

void Player::equipWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Player::InAttack(Weapon* weapon) {
    this->health -= weapon->getAttackPower();
}

void Player::display() {
    cout << "Name Player : " << this->name << endl;
    cout << "Heath Player : " << this->health << endl;
    cout << "Name Weapon : " << this->weapon->getName() << endl;
    cout << "Power Of Weapon Is : " << this->weapon->getAttackPower() << endl;
}

// End Of Class Player

// Start Of Class Enemy

Enemy::Enemy(const char* name, int HT) {
    this->name = name;
    this->health = HT;
}

void Enemy::equipWeapon(Weapon* weapon) {
    this->weapon = weapon;
}

void Enemy::InAttack(Weapon* weapon) {
    this->health -= weapon->getAttackPower();
}

void Enemy::display() {
    cout << "Name Enemy : " << this->name << endl;
    cout << "Heath Enemy : " << this->health << endl;
    cout << "Name Weapon : " << this->weapon->getName() << endl;
    cout << "Power Of Weapon Is : " << this->weapon->getAttackPower() << endl;
}

// End Of Class Enemy

// Make Attack Void

void AttackPlayer(Player* PLY, Weapon* weapon){
    PLY->InAttack(weapon);
}
void AttackEnemy(Enemy* EMY, Weapon* weapon){
    EMY->InAttack(weapon);
}

// End Attack Void