/*
*  ScavTrap.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap() {
  m_hitPoints = ST_NUM_HIT_POINTS;
  m_energyPoints = ST_NUM_ENERGY_POINTS;
  m_attackDamage = ST_NUM_ATTACK_DAMAGE;
  std::cout << "ScavTrap Default constructor called" << std::endl;

  getStatus();
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) {
  m_hitPoints = ST_NUM_HIT_POINTS;
  m_energyPoints = ST_NUM_ENERGY_POINTS;
  m_attackDamage = ST_NUM_ATTACK_DAMAGE;
  std::cout << "ScavTrap Name Constructor for " << name << " called" << std::endl;

  getStatus();
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << "ScavTrap Copy constructor for " << other.m_name << " called" << std::endl;

  getStatus();

}

ScavTrap &ScavTrap::operator=(const ScavTrap& other) {
  std::cout << "ScavTrap Copy assignment for " << other.m_name << " called" << std::endl;
  if (this != &other) {
    ClapTrap::operator=(other);
  }

  getStatus();

  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor for " << m_name << " called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (m_hitPoints <= 0) {
    std::cout << "[ATTACK] ScavTrap " << m_name << " is already dead and cannot attack!" << std::endl;
  } else if (m_energyPoints <= 0) {
    std::cout << "[ATTACK] ScavTrap " << m_name << " has no energy to attack!" << std::endl;
  } else
  {
    if (target.empty()) {
      std::cout << "[ATTACK] ScavTrap attacks an unknown NAME"
                << ", causing " << m_attackDamage << " points of damage!" << std::endl;
    } else {
      std::cout << "[ATTACK] ScavTrap " << m_name << " attacks " << target
                << ", causing " << m_attackDamage << " points of damage!" << std::endl;
    }
    --m_energyPoints;
  }

  getStatus();
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << m_name << " is now in Gate keeper modd" << std::endl;
}
