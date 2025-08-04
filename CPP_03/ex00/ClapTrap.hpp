#ifndef  CLAP_TRAP_00_H
#define  CLAP_TRAP_00_H

#include <iostream>

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std:: string m_name;
    unsigned int m_health;
    unsigned int m_energyPoints;
    unsigned int m_attackDamage;
};

#endif // CLAP_TRAP_00_H
