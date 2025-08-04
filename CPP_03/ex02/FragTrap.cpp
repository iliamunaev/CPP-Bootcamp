#include "FragTrap.hpp"

FragTrap::FragTrap() {
  m_health = 100;
  m_energyPoints = 100;
  m_attackDamage = 30;

  std::cout << "FragTrap Default constructor called" << std::endl;
  std::cout << "Status for default FragTrap ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;
}

// Name constructor
FragTrap::FragTrap(const std::string& name) :
  ClapTrap(name) {
    m_health = 100;
    m_energyPoints = 100;
    m_attackDamage = 30;

    std::cout << "FragTrap Name Constructor for " << name << " called" << std::endl;
    std::cout << "Status for FragTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;
 }

 FragTrap::FragTrap(const FragTrap& other) :
  ClapTrap(other) {
    std::cout << "FragTrap Copy constructor for " << m_name << " called" << std::endl;
    std::cout << "Status for FragTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;

  }

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap Copy assignment for " << m_name << " called" << std::endl;

  if(this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "Status for FragTrap " << m_name << " ==> HP: " << m_health << " EP: " << m_energyPoints << " AD: " << m_attackDamage << std::endl;

  return *this;
}
 // Destructor 
FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor for " << m_name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap" << m_name << ": Hey, high five!" << std::endl;
}
