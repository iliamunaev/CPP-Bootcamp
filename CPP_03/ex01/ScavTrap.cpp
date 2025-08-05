#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap() {
  hitPoints = NUM_HP_CT_ST;
  energyPoints = NUM_EP_CT_ST;
  attackDamage = NUM_AD_CT_ST;
  std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &n)
    : ClapTrap(n) {
  hitPoints = NUM_HP_CT_ST;
  energyPoints = NUM_EP_CT_ST;
  attackDamage = NUM_AD_CT_ST;

  std::cout << "ScavTrap Name Constructor for " << n << " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap Copy constructor for " << name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "ScavTrap Copy assignment for " << name << " called" << std::endl;
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor for " << name << " called" << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
