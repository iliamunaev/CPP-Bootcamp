#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() {
  m_health = 100;
  m_energyPoints = 50;
  m_attackDamage = 20;

  std::cout << "ScavTrap Default constructor called" << std::endl;
  std::cout << "Status for default ScavTrap ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;
}

// Name constructor
ScavTrap::ScavTrap(const std::string& name) :
  ClapTrap(name) {
    m_health = 100;
    m_energyPoints = 50;
    m_attackDamage = 20;

    std::cout << "ScavTrap Name Constructor for " << m_name << " called" << std::endl;
    std::cout << "Status for ScavTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;

}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) :
  ClapTrap(other) {
    std::cout << "ScavTrap Copy constructor for " << m_name << " called" << std::endl;
    std::cout << "Status for ScavTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;

}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  std::cout << "ScavTrap Copy assignment for " << m_name << " called" << std::endl;
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  
  std::cout << "Status for ScavTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;
  return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor for " << m_name << " called" << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << m_name << " is now in Gate keeper mode" << std::endl;
}
