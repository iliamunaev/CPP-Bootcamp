/*
*  DiamondTrap.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
  : ClapTrap(),
    ScavTrap(),
    FragTrap() {
      m_name = ClapTrap::m_name;
      ClapTrap::m_name += "_clap_name";
      m_hitPoints    = FT_HIT_POINTS;
      m_energyPoints = ST_ENERGY_POINTS;
      m_attackDamage = FT_ATTACK_DAMAGE;

      std::cout << "DiamondTrap Default constructor called" << std::endl;

      getStatus();
}

DiamondTrap::DiamondTrap(const std::string& name)
  : ClapTrap(name + "_clap_name"),
    ScavTrap(),
    FragTrap(),
    m_name(name) {
      m_hitPoints    = FT_HIT_POINTS;
      m_energyPoints = ST_ENERGY_POINTS;
      m_attackDamage = FT_ATTACK_DAMAGE;

      std::cout << "DiamondTrap Name Constructor for " << name << " called" << std::endl;

      getStatus();
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
  : ClapTrap(other),
    ScavTrap(other),
    FragTrap(other),
    m_name(other.m_name) {
      m_hitPoints    = FT_HIT_POINTS;
      m_energyPoints = ST_ENERGY_POINTS;
      m_attackDamage = FT_ATTACK_DAMAGE;

      std::cout << "DiamondTrap Copy constructor for " << other.m_name << " called" << std::endl;

      getStatus();
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    ScavTrap::operator=(other);
    FragTrap::operator=(other);

    m_name = other.m_name;
    m_hitPoints    = FT_HIT_POINTS;
    m_energyPoints = ST_ENERGY_POINTS;
    m_attackDamage = FT_ATTACK_DAMAGE;
  }

  std::cout << "DiamondTrap Copy assignment for " << other.m_name << " called" << std::endl;

  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap Destructor for " << m_name << " called" << std::endl;
}

void DiamondTrap::whoAmI() const {
  std::cout << "DiamondTrap's ClapTrap name: " << ClapTrap::m_name << std::endl;
  std::cout << "DiamondTrap's name: " << m_name << std::endl;
}
