#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hitPoints(NUM_HP_CT), energyPoints(NUM_EP_CT), attackDamage(NUM_AD_CT) {
  std::cout << "ClapTrap Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &n)
    : name(n), hitPoints(NUM_HP_CT), energyPoints(NUM_EP_CT), attackDamage(NUM_AD_CT) {
  std::cout << "ClapTrap Name Constructor for " << n << " called\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name),
      hitPoints(other.hitPoints),
      energyPoints(other.energyPoints),
      attackDamage(other.attackDamage) {
  std::cout << "ClapTrap Copy constructor for " << name << " called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  std::cout << "ClapTrap Copy assignment operator called\n";
  if (this != &other) {
    name = other.name;
    hitPoints = other.hitPoints;
    energyPoints = other.energyPoints;
    attackDamage = other.attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap Destructor for " << name << " called\n";
}

void ClapTrap::attack(const std::string &NAME) {
  if (hitPoints <= 0) {
    std::cout << "[ATTACK] ClapTrap " << name << " is already dead and cannot attack!\n";
  } else if (energyPoints <= 0) {
    std::cout << "[ATTACK] ClapTrap " << name << " has no energy to attack!\n";
  } else {
    if (NAME.empty()) {
      std::cout << "[ATTACK] ClapTrap " << name << " attacks an unknown NAME"
                << ", causing " << attackDamage << " points of damage!\n";
    } else {
      std::cout << "[ATTACK] ClapTrap " << name << " attacks " << NAME
                << ", causing " << attackDamage << " points of damage!\n";
    }
    --energyPoints;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "[DAMAGE] " << name << " is already dead!\n";
    return;
  }

  if (amount == 0) {
    std::cout << "[DAMAGE] " << name << " takes no damage!\n";
  }
  else {
    std::cout << "[DAMAGE] " << name << " takes " << amount << " points of damage!\n";
  }

  if (amount >= static_cast<unsigned int>(hitPoints)) {
    hitPoints = 0;
    std::cout << "[DAMAGE] " << name << " is dead! HP: " << hitPoints << "\n";
  } else {
    hitPoints -= amount;
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints <= 0) {
    std::cout << "[REPARE] " << name << " is dead and cannot repair!\n";
  } else if (energyPoints <= 0) {
    std::cout << "[REPARE] " << name << " has no energy points to repair!\n";
  } else if (amount == 0) {
    std::cout << "[REPARE] " << name << " tries to repair but gained no HP!\n";
  } else {
    hitPoints += amount;
    --energyPoints;

    std::cout << "[REPARE] " << name << " repairs itself for "
              << amount << " HP!\n";
  }

  std::cout << "[STATUS] " << name << ":"
            << " HP: " << hitPoints
            << " EP: " << energyPoints
            << " AD: " << attackDamage
            << "\n";
}
