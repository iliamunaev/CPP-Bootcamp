#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
  std::cout << "Default constructor called\n" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) :
  m_name(name),
  m_health(10),
  m_energyPoints(10),
  m_attackDamage(0) {
    std::cout << "Constructor for " << name << " called" << std::endl;

  std::cout << ">>>> ClapTrap " << m_name << " current status:"
          << " HP: " << m_health
          << " EP: " << m_energyPoints
          << " AD: " << m_attackDamage
          << "\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
  m_name(other.m_name),
  m_health(other.m_health),
  m_energyPoints(other.m_energyPoints),
  m_attackDamage(other.m_attackDamage) {
    std::cout << "Copy constructor called\n" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  std::cout << "Copy assignment operator called\n" << std::endl;

  if(this != &other) {
    this->m_name = other.m_name;
    this->m_health = other.m_health;
    this->m_energyPoints = other.m_energyPoints;
    this->m_attackDamage = other.m_attackDamage;
  }

  return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor for " << m_name <<  " called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (m_health <= 0) {
    std::cout << "ClapTrap " << m_name << " has already dead!" << std::endl;
  } else if (m_energyPoints <= 0) {
    std::cout << "ClapTrap " << m_name << " has no energy to attack!" << std::endl;
  } else {
    std::cout << "ClapTrap " << m_name << " attacks " << target
              << ", causing " << m_attackDamage << " points of damage!" << std::endl;

    --m_energyPoints;
  }

  std::cout << ">>>> ClapTrap " << m_name << " current status:"
            << " HP: " << m_health
            << " EP: " << m_energyPoints
            << " AD: " << m_attackDamage
            << "\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << m_name << " takes " << amount
          << " points of damage!" << std::endl;

  if (m_health <= 0) {
    std::cout << "ClapTrap " << m_name << " is already dead!" << std::endl;
    return;
  } else {
    m_health -= amount;
  }

  if(m_health <= 0) {
    std::cout << "ClapTrap " << m_name << " is dead! "
              << "HP: " << m_health << std::endl;
  }

  std::cout << ">>>> ClapTrap " << m_name << " current status:"
          << " HP: " << m_health
          << " EP: " << m_energyPoints
          << " AD: " << m_attackDamage
          << "\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (m_energyPoints <= 0 && m_health > 0) {
    std::cout << "ClapTrap " << m_name << " has no energy to repair!" << std::endl;
  } else if (m_health <= 0) {
    std::cout << "ClapTrap " << m_name << " is dead and cannot repair!" << std::endl;
  } else {
    m_health += amount;
    --m_energyPoints;

    std::cout << "ClapTrap " << m_name << " repairs itself for "
              << amount << " HP!" << std::endl;
  }
  std::cout << ">>>> ClapTrap " << m_name << " current status:"
          << " HP: " << m_health
          << " EP: " << m_energyPoints
          << " AD: " << m_attackDamage
          << "\n" << std::endl;
}

