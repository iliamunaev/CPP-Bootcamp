#include "ScavTrap.hpp"
#include <iostream>

// Default constructor
ScavTrap::ScavTrap() {
    m_health = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

// Name constructor
ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
    m_health = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;
    std::cout << "ScavTrap Name Constructor for " << m_name << " called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other) {
    std::cout << "ScavTrap Copy constructor for " << m_name << " called" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap Copy assignment for " << m_name << " called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor for " << m_name << " called" << std::endl;
}
