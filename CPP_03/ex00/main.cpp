#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap a("Tom");

    std::cout << "\n[TEST] Initial attack:\n";
    a.attack("Jerry");

    std::cout << "\n[TEST] Taking damage (5):\n";
    a.takeDamage(5);

    std::cout << "\n[TEST] Repairing (3):\n";
    a.beRepaired(3);

    std::cout << "\n[TEST] Edge: attack with 0 EP:\n";
    // Drain all energy
    for (int i = 0; i < 20; ++i)
        a.attack("Neighbour");

		// Fail due to no energy
    std::cout << "\n[TEST] Edge: repair with 0 EP:\n";
    a.beRepaired(1);

    std::cout << "\n[TEST] Edge: take 0 damage:\n";
    a.takeDamage(0);

		// No healing
    std::cout << "\n[TEST] Edge: repair 0 HP:\n";
    a.beRepaired(0);

		// Kill the ClapTrap
    std::cout << "\n[TEST] Fatal damage:\n";
    a.takeDamage(999);

		// Fail due to 0 HP
    std::cout << "\n[TEST] Attack after death:\n";
    a.attack("Jerry");

		// Fail due to 0 HP
    std::cout << "\n[TEST] Repair after death:\n";
    a.beRepaired(10);

    return 0;
}
