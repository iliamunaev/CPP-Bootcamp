#ifndef  CLAP_TRAP_00_H
#define  CLAP_TRAP_00_H

#include <iostream>

class ClapTrap {
  public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std:: string m_name;
    unsigned int m_hitPoints;
    unsigned int m_energyPoints;
    unsigned int m_attacDamage;

};

#endif // CLAP_TRAP_00_H
