#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const char* name, int attackPower) {
    this->name = name;
    this->attackPower = attackPower;
}

void Weapon::display() {
    std::cout << "Weapon Ini Adalah : " << this->name << std::endl;
    std::cout << "Power : " << this->attackPower << std::endl;
}

std::string Weapon::getName() {
    return this->name;
}

int Weapon::getAttackPower() {
    return this->attackPower;
}