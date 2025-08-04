#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    // // Default constructor
    std::cout << "---------------- TEST: Default constructor ----------------" << std::endl;
    ScavTrap dBaby;
    std::cout << "---------------- END TEST ----------------\n"
              << std::endl;

    // Name constructor
    std::cout << "---------------- TEST: Name constructor ----------------" << std::endl;
    ScavTrap Baby("Baby");
    ScavTrap John("John");
    std::cout << "---------------- END TEST ----------------\n"
              << std::endl;

    // // Copy constructor
    std::cout << "---------------- TEST: Copy constructor ----------------" << std::endl;

    ScavTrap Bob(Baby);
    std::cout << "---------------- END TEST ----------------\n"
              << std::endl;

    // Copy assignment operator
    std::cout << "---------------- TEST: Copy assignment operator ----------------" << std::endl;
    ScavTrap Carl;

    Carl.guardGate();
    Carl = John;
    std::cout << "---------------- END TEST ----------------\n"
              << std::endl;

    Carl.guardGate();

    return 0;
}
