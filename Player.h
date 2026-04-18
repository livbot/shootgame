#ifndef PLAYER_H   //Step 1: Start of Header Guard  
#define PLAYER_H

#include <string>

// Step 2: Define the Status enum so everyone knows what "Healthy" means
enum class PlayerStatus {Healthy, Wounded, Dead};

// Step 3: Wrap everything in the CLASS container
class Player{
private:
    std::string name;
    int health;
    PlayerStatus status;

public:
    Player(std::string n);
    void takeDamage(int damage);
    void heal(int amount);
    bool isAlive();
    std::string getName();
};

#endif // Step 4: End of Header Guard
