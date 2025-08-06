#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap() {
  hitPoints = NUM_HP_ST;
  energyPoints = NUM_EP_ST;
  attackDamage = NUM_AD_ST;
  std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &n)
    : ClapTrap(n) {
  hitPoints = NUM_HP_ST;
  energyPoints = NUM_EP_ST;
  attackDamage = NUM_AD_ST;

  std::cout << "ScavTrap Name Constructor for " << n << " called\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap Copy constructor for " << name << " called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << "ScavTrap Copy assignment for " << name << " called\n";
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor for " << name << " called\n";
}

void ScavTrap::guardGate(void) {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode\n";
}

void ScavTrap::attack(const std::string &target) {
  if (hitPoints <= 0) {
    std::cout << "[ATTACK] ScavTrap " << name << " is already dead and cannot attack!\n";
  } else if (energyPoints <= 0) {
    std::cout << "[ATTACK] ScavTrap " << name << " has no energy to attack!\n";
  } else {
    std::cout << "[ATTACK] ScavTrap " << name << " throws a gate slam at " << target
              << ", dealing " << attackDamage << " points of damage!\n";
    --energyPoints;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n";
}
