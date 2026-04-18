#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

enum class CharacterRole {Protagonist, Antagonist, Sidekick, NPC};

class Character {
private:
    std::string name;
    int level;
    CharacterRole role;

public:
    Character(std::string n, int l, CharacterRole r); //Constructor
    void introduce(); //Behavior
}

#endif