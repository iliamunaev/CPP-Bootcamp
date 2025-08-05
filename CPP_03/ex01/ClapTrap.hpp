#ifndef CLAP_TRAP_01_H
#define CLAP_TRAP_01_H

#include <iostream>

#define NUM_HP_CT 10
#define NUM_EP_CT 10
#define NUM_AD_CT 0

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(const std::string &n);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  protected:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;
};

#endif // CLAP_TRAP_01_H
