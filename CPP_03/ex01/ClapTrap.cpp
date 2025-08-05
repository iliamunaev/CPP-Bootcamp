#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitPoints(NUM_HP_CT), energyPoints(NUM_EP_CT), attackDamage(NUM_AD_CT) {
  std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &n)
    : name(n), hitPoints(NUM_HP_CT), energyPoints(NUM_EP_CT), attackDamage(NUM_AD_CT) {
  std::cout << "ClapTrap Name Constructor for " << n << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage) {
  std::cout << "ClapTrap Copy constructor for " << name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap Copy assignment operator called" << std::endl;
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap Destructor for " << name << " called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (hitPoints <= 0) {
    std::cout << "[ATTACK] " << name << " is already dead and cannot attack!" << std::endl;
  } else if (energyPoints <= 0) {
    std::cout << "[ATTACK] " << name << " has no energy to attack!" << std::endl;
  } else
  {
    if (target.empty()) {
      std::cout << "[ATTACK] " << name << " attacks an unknown target"
                << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
      std::cout << "[ATTACK] " << name << " attacks " << target
                << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    --energyPoints;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n"
            << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "[DAMAGE] " << name << " is already dead!" << std::endl;
    return;
  }

  if (amount == 0) {
    std::cout << "[DAMAGE] " << name << " takes no damage!" << std::endl;
  }
  else {
    std::cout << "[DAMAGE] " << name << " takes " << amount << " points of damage!" << std::endl;
  }

  if (amount >= static_cast<unsigned int>(hitPoints)) {
    hitPoints = 0;
    std::cout << "[DAMAGE] " << name << " is dead! HP: " << hitPoints << std::endl;
  }
  else {
    hitPoints -= amount;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "[REPARE] " << name << " is dead and cannot repair!" << std::endl;
  } else if (energyPoints <= 0) {
    std::cout << "[REPARE] " << name << " has no energy points to repair!" << std::endl;
  } else if (amount == 0) {
    std::cout << "[REPARE] " << name << " tries to repair but gained no HP!" << std::endl;
  } else {
    hitPoints += amount;
    --energyPoints;

    std::cout << "[REPARE] " << name << " repairs itself for "
              << amount << " HP!" << std::endl;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n"
            << std::endl;
}
