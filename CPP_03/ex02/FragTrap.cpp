#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap() {
  hitPoints = NUM_HP_FT;
  energyPoints = NUM_EP_FT;
  attackDamage = NUM_AD_FT;

  std::cout << "FragTrap Default constructor called\n";
}

// Name constructor
FragTrap::FragTrap(const std::string& n) :
  ClapTrap(n) {
    hitPoints = NUM_HP_FT;
    energyPoints = NUM_EP_FT;
    attackDamage = NUM_AD_FT;

    std::cout << "FragTrap Name Constructor for " << n << " called\n";
 }

 FragTrap::FragTrap(const FragTrap& other) :
  ClapTrap(other) {
    std::cout << "FragTrap Copy constructor for " << name << " called\n";

  }

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap Copy assignment for " << name << " called\n";

  if(this != &other) {
    ClapTrap::operator=(other);
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor for " << name << " called\n";
}

void FragTrap::highFivesGuys(void) {
  if (hitPoints > 0) {
    std::cout << "FragTrap " << name << ": Hey, high five!\n";
  } else {
    std::cout << "FragTrap " << name << ": is dead... no any five anymore...\n";
  }
}
