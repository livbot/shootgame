#ifndef PLAYER_H   //Step 1: Start of Header Guard  
#define PLAYER_H

#include "Character.h"
#include <string>

// Step 2: Define the Status enum so everyone knows what "Healthy" means
enum class PlayerStatus {Healthy, Wounded, Dead};

// Step 3: Wrap everything in the CLASS container
// Allow `Player` to use everything inside `Character`
class Player: public Character{
private:
    int health;
    PlayerStatus status;

public:
    Player(std::string n, int l, CharacterRole r); //Update the Constructor to pass the name and role to the Parent
    void takeDamage(int damage);
    void heal(int amount);
    bool isAlive();
    void introduce() override; // Player class/Child Override Character class/Parent
    virtual ~Player() {};
};

#endif // Step 4: End of Header Guard
