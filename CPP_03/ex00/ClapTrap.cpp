#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
  m_name(name),
  m_hitPoints(10),
  m_energyPoints(10),
  m_attackDamage(0) {
    std::cout << "Constructor for " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
  m_name(other.m_name),
  m_hitPoints(other.m_hitPoints),
  m_energyPoints(other.m_energyPoints),
  m_attackDamage(other.m_attackDamage) {
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << "Copy assignment operator called" << std::endl;

  if(this != &other) {
    this->m_name = other.m_name;
    this->m_hitPoints = other.m_hitPoints;
    this->m_energyPoints = other.m_energyPoints;
    this->m_attackDamage = other.m_attackDamage;
  }

  return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor for " << m_name <<  " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (m_hitPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " has already dead!" << std::endl;
    return;
  }

  if (m_energyPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " has no energy to attack!" << std::endl;
    return;
  }

  std::cout << "ClapTrap " << m_name << " attacks " << target
        << ", causing 1 points of damage!" << std::endl;

  --m_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (m_hitPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " is already dead!" << std::endl;
    return;
  }

  m_hitPoints -= amount;
  std::cout << "ClapTrap " << m_name << " takes " << amount
            << " points of damage! Remaining HP: " << m_hitPoints << std::endl;

  if (m_hitPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " is dead!" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (m_energyPoints <= 0 && m_hitPoints > 0) {
    std::cout << "ClapTrap " << m_name << " has no energy to repair!" << std::endl;
  } else if (m_hitPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " is dead and cannot repair!" << std::endl;
  } else {
    m_hitPoints += amount;
    m_energyPoints--;

    std::cout << "ClapTrap " << m_name << " repairs itself for "
              << amount << " HP! New HP: " << m_hitPoints
              << ", Energy: " << m_energyPoints << std::endl;
  }
}

