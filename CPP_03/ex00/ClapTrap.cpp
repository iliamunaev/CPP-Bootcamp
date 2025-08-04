#include "ClapTrap.hpp"
#include <iostream>

// Default constructor
ClapTrap::ClapTrap()
    : m_name(""), m_health(10), m_energyPoints(10), m_attackDamage(0) {
    std::cout << "ClapTrap Default constructor called" << std::endl;
}


// Name constructor
ClapTrap::ClapTrap(const std::string& name)
    : m_name(name), m_health(10), m_energyPoints(10), m_attackDamage(0) {
    std::cout << "ClapTrap Name Constructor for " << name << " called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
    : m_name(other.m_name),
      m_health(other.m_health),
      m_energyPoints(other.m_energyPoints),
      m_attackDamage(other.m_attackDamage) {
        std::cout << "ClapTrap Copy constructor for " << m_name << " called" << std::endl;
}

// Assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        m_name = other.m_name;
        m_health = other.m_health;
        m_energyPoints = other.m_energyPoints;
        m_attackDamage = other.m_attackDamage;
    }
    return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor for " << m_name << " called" << std::endl;
}

// Attack
void ClapTrap::attack(const std::string& target) {
    if (m_health <= 0) {
        std::cout << m_name << " has already dead!" << std::endl;
    } else if (m_energyPoints <= 0) {
        std::cout << m_name << " has no energy to attack!" << std::endl;
    } else {
        std::cout << m_name << " attacks " << target
                  << ", causing " << m_attackDamage << " points of damage!" << std::endl;
        --m_energyPoints;
    }

    std::cout << m_name << " current status:"
              << " HP: " << m_health
              << " EP: " << m_energyPoints
              << " AD: " << m_attackDamage
              << "\n" << std::endl;
}

// Take damage
void ClapTrap::takeDamage(unsigned int amount) {
    if (m_health <= 0) {
        std::cout << m_name << " is already dead!" << std::endl;
        return;
    }

    std::cout << m_name << " takes " << amount << " points of damage!" << std::endl;

    if (amount >= m_health) {
        m_health = 0;
        std::cout << m_name << " is dead! "
                  << "HP: " << m_health << std::endl;
    } else {
        m_health -= amount;
    }

    std::cout << ">>>> " << m_name << " current status:"
              << " HP: " << m_health
              << " EP: " << m_energyPoints
              << " AD: " << m_attackDamage
              << "\n" << std::endl;
}

// Repair
void ClapTrap::beRepaired(unsigned int amount) {
    if (m_health <= 0) {
        std::cout << m_name << " is dead and cannot repair!" << std::endl;
    } else if (m_energyPoints <= 0) {
        std::cout << m_name << " no energy points to repare!" << std::endl;
    } else {
        m_health += amount;
        --m_energyPoints;

        std::cout << m_name << " repairs itself for "
                  << amount << " HP!" << std::endl;
    }

    std::cout << ">>>> " << m_name << " current status:"
              << " HP: " << m_health
              << " EP: " << m_energyPoints
              << " AD: " << m_attackDamage
              << "\n" << std::endl;
}
