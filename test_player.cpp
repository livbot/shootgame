#include <iostream>
#include <cassert> // The most important tool for testing
#include "Player.h"

void runTests(){
    std::cout << "Starting Test Suite ..." << std::endl;

    // Test 1: Initialization
    Player testP("Tester");
    assert(testP.getName() == "Tester");
    assert(testP.isAlive() == true);
    std::cout << "[PASS] Initialization Test" << std::endl;

    // Test 2: Damage Logic
    testP.takeDamage(30);
    //Since health is private, we check logic via isAlive
    assert(testP.isAlive() == true);
    std::cout << "[PASS] Basic Damage Test" << std::endl;

    // Test 3: Lethal Damage
    testP.takeDamage(80); //Total 110 damage
    assert(testP.isAlive() == false);
    std::cout << "[PASS] Lethal Damage Test (Death State)" << std::endl;

    // Test 4: Healing the Dead
    testP.heal(50);
    assert(testP.isAlive() == false); //Should NOT come back to life
    std::cout << "[PASS] No-Resurrection Test" << std::endl;

    std::cout << "\nALL TESTS PASSED" << std::endl;
}

int main(){
    runTests();
    return 0;
}