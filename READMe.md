# C++ Combat Simulator & Test Suite

A modular C++ project demonstrating Object-Oriented Programming (OOP), strong typing with `enum class`, and automated unit testing.

## 🛠 Compilation & Execution

This project uses a split-file architecture. You must compile the implementation file (`Player.cpp`) alongside the entry point.

### 1. The Interactive Game
This version allows manual control via a command-line menu.
* **Compile:** `g++ -std=c++17 main.cpp Player.cpp -o game`
* **Run:** `./game`

### 2. The Automated Test Suite
This version runs a series of validation checks (assertions) to ensure the logic is robust.
* **Compile:** `g++ -std=c++17 test_player.cpp Player.cpp -o run_tests`
* **Run:** `./run_tests`

---

## 🧠 Architectural Overview

### Multi-File Structure
- **Player.h**: The interface (Blueprint). Defines the class structure and the `PlayerStatus` enum class.
- **Player.cpp**: The implementation (Logic). Contains the actual code for damage calculations, healing, and state changes.
- **main.cpp**: The application layer. Manages user input and game flow.
- **test_player.cpp**: The QA layer. Uses `assert` to verify that edge cases (like healing a dead player) are handled correctly.

### Key Technical Concepts
- **Encapsulation:** Player health and status are `private` to prevent external tampering.
- **Pass-by-Reference:** Functions like `applyEmergencyMedkit` use `Player &p` to modify the original object efficiently without memory-intensive copying.
- **Type Safety:** Used `enum class` to prevent accidental logic errors (e.g., comparing health to status).