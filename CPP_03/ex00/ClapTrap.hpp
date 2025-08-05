#ifndef  CLAP_TRAP_00_H
#define  CLAP_TRAP_00_H

#include <iostream>

#define NUM_HP 10
#define NUM_EP 10
#define NUM_AD 0

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(const std::string& n);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std:: string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};

#endif // CLAP_TRAP_00_H
