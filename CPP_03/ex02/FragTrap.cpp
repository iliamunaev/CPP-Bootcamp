#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap() {
  hitPoints = NUM_HP_FT;
  energyPoints = NUM_EP_FT;
  attackDamage = NUM_AD_FT;

  std::cout << "FragTrap Default constructor called" << std::endl;
}

// Name constructor
FragTrap::FragTrap(const std::string& n) :
  ClapTrap(n) {
    hitPoints = NUM_HP_FT;
    energyPoints = NUM_EP_FT;
    attackDamage = NUM_AD_FT;

    std::cout << "FragTrap Name Constructor for " << n << " called" << std::endl;
 }

 FragTrap::FragTrap(const FragTrap& other) :
  ClapTrap(other) {
    std::cout << "FragTrap Copy constructor for " << name << " called" << std::endl;

  }

FragTrap& FragTrap::operator=(const FragTrap& other) {
  std::cout << "FragTrap Copy assignment for " << name << " called" << std::endl;

  if(this != &other) {
    ClapTrap::operator=(other);
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor for " << name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  if (hitPoints > 0) {
    std::cout << "FragTrap " << name << ": Hey, high five!" << std::endl;
  } else {
    std::cout << "FragTrap " << name << ": is dead... no any five anymore..." << std::endl;
  }
}
