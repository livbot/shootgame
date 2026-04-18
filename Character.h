#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

enum class CharacterRole {Protagonist, Antagonist, Sidekick, NPC};

class Character {
protected: //Changed from private
    std::string name;
    int level;
    CharacterRole role;

public:
    Character(std::string n, int l, CharacterRole r); //Constructor
    // Every child (Player) will now inherit getName automatically!
    std::string getName() const {return name;}
    virtual void introduce() = 0; // Makes Character class an "Abstract" class and the Player/children must give logic.
    virtual ~Character() {};

};

#endif