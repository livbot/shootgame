#include <iostream>
#include "Player.h"
#include "Character.h"


// A helper function that takes a REFERENCE to a player
// Passing by reference (&) means we modify the original player
void applyEmergencyMedkit(Player &p) {
    std::cout << " Emergency medkit has been dropped for " << p.getName() << "!" << std::endl;
    p.heal(40); 
}

int main() {
    Player p1("Alpha");
    Player p2("Beta");

    // The game keeps going as long as both are ALINE
    while (p1.isAlive() && p2.isAlive()){
         // Let the battle begin
        p2.takeDamage(60); // Beta is now Wounded
    
        // Beta finds a medkit!
        applyEmergencyMedkit(p2); 

    }
    return 0;
}