#include "Character.h"
#include <iostream>

Character::Character(std::string n, int l, CharacterRole r): name(n), level(l), role(r) {}

void Character::introduce(){
    std::cout << "I am " << name << ", a Level " << level << "warrior!" << std::endl;
}