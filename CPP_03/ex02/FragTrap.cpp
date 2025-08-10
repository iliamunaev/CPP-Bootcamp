/*
*  FragTrap.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap() {
  m_hitPoints = FT_HIT_POINTS;
  m_energyPoints = FT_ENERGY_POINTS;
  m_attackDamage = FT_ATTACK_DAMAGE;
  std::cout << "FragTrap Default constructor called" << std::endl;

  getStatus();
}

FragTrap::FragTrap(const std::string& n) :
  ClapTrap(n) {
    m_hitPoints = FT_HIT_POINTS;
    m_energyPoints = FT_ENERGY_POINTS;
    m_attackDamage = FT_ATTACK_DAMAGE;
    std::cout << "FragTrap Name Constructor for " << n << " called" << std::endl;

  getStatus();
 }

 FragTrap::FragTrap(const FragTrap& other) :
  ClapTrap(other) {
    std::cout << "FragTrap Copy constructor for " << other.m_name << " called" << std::endl;

  getStatus();
  }

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap Copy assignment for " << other.m_name  << " called" << std::endl;

  if(this != &other) {
    ClapTrap::operator=(other);
  }

  getStatus();

  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor for " << m_name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  if (m_hitPoints > 0) {
    std::cout << "FragTrap " << m_name << ": Hey, high five!" << std::endl;
  } else {
    std::cout << "FragTrap " << m_name << ": is dead... no any five anymore..." << std::endl;
  }
}
