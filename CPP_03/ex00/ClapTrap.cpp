/*
*  ClapTrap.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-09
*  Updated: 2025-08-09
*/
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : m_name("Default"),
      m_hitPoints(CT_HIT_POINTS),
      m_energyPoints(CT_ENERGY_POINTS),
      m_attackDamage(CT_ATTACK_DAMAGE) {
  std::cout << "ClapTrap Default constructor called" << std::endl;

  getStatus();
}

ClapTrap::ClapTrap(const std::string &name)
    : m_name(name), m_hitPoints(CT_HIT_POINTS), m_energyPoints(CT_ENERGY_POINTS), m_attackDamage(CT_ATTACK_DAMAGE) {
  std::cout << "ClapTrap Name Constructor for " << m_name << " called" << std::endl;

  getStatus();
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : m_name(other.m_name),
      m_hitPoints(other.m_hitPoints),
      m_energyPoints(other.m_energyPoints),
      m_attackDamage(other.m_attackDamage) {
  std::cout << "ClapTrap Copy constructor for " << other.m_name << " called" << std::endl;

  getStatus();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap Copy assignment operator for " << other.m_name<< " called" << std::endl;
  if (this != &other) {
    m_name = other.m_name;
    m_hitPoints = other.m_hitPoints;
    m_energyPoints = other.m_energyPoints;
    m_attackDamage = other.m_attackDamage;
  }

  getStatus();

  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap Destructor for " << m_name << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (m_hitPoints <= 0) {
    std::cout << "[ATTACK] ClapTrap " << m_name << " is already dead and cannot attack!" << std::endl;
  } else if (m_energyPoints <= 0) {
    std::cout << "[ATTACK] ClapTrap " << m_name << " has no energy to attack!" << std::endl;
  } else
  {
    if (target.empty()) {
      std::cout << "[ATTACK] ClapTrap attacks an unknown NAME"
                << ", causing " << m_attackDamage << " points of damage!" << std::endl;
    } else {
      std::cout << "[ATTACK] ClapTrap " << m_name << " attacks " << target
                << ", causing " << m_attackDamage << " points of damage!" << std::endl;
    }
    --m_energyPoints;
  }

  getStatus();
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (m_hitPoints <= 0) {
    std::cout << "[DAMAGE] " << m_name << " is already dead!" << std::endl;
    return;
  }

  if (amount == 0) {
    std::cout << "[DAMAGE] " << m_name << " takes no damage!" << std::endl;
  }
  else {
    std::cout << "[DAMAGE] " << m_name << " takes " << amount << " points of damage!" << std::endl;
  }

  if (amount >= m_hitPoints) {
    m_hitPoints = 0;
    std::cout << "[DAMAGE] " << m_name << " is dead! HP: " << m_hitPoints << "" << std::endl;
  }
  else {
    m_hitPoints -= amount;
  }

  getStatus();
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (m_hitPoints <= 0) {
    std::cout << "[REPARE] " << m_name << " is dead and cannot repair!" << std::endl;
  } else if (m_energyPoints <= 0) {
    std::cout << "[REPARE] " << m_name << " has no energy points to repair!" << std::endl;
  } else if (amount == 0) {
    std::cout << "[REPARE] " << m_name << " tries to repair but gained no HP!" << std::endl;
  } else {
    m_hitPoints += amount;
    --m_energyPoints;

    std::cout << "[REPARE] " << m_name << " repairs itself for "
              << amount << " HP!" << std::endl;
  }

  getStatus();
}

// status output
void ClapTrap::getStatus(void) const {
  std::cout << "[STATUS] " << m_name << ":"
            << " HP: " << m_hitPoints
            << " EP: " << m_energyPoints
            << " AD: " << m_attackDamage
            << std::endl;
}
