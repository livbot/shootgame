#include "Player.h"
#include <iostream>

//The Constructor:: sets up the Player

Player::Player(std::string n):name(n), health(100), status(PlayerStatus::Healthy){}

// The takeDamage implementation
void Player::takeDamage(int damage){
    if(status == PlayerStatus::Dead) {
        std::cout << name << "is already dead! Stop Shooting" << std::endl;
        return;
    }

    health -= damage;
    std::cout << name << "took" << damage << "damage. (Current Health: " << health << ")" << std::endl;
    if (health <= 0){
        health = 0;
        status = PlayerStatus::Dead;
    }
}

void Player::heal(int amount) {
    if (status == PlayerStatus::Dead) {
        std::cout << name << " is beyond help..." << std::endl;
        return;
    }
    
    health += amount;
    if (health > 100) health = 100;
    
    // If they were wounded, they might be healthy again
    if (health >= 50) status = PlayerStatus::Healthy;

    std::cout << name << " used a Medkit! (Health: " << health << ")" << std::endl;
}

bool Player::isAlive(){
    return status !=PlayerStatus::Dead;
}

std::string Player::getName() {
    return name;
}