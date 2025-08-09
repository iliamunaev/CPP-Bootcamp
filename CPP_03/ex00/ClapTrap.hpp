/*
*  ClapTrap.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-09
*  Updated: 2025-08-09
*/
#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>

#define CT_NUM_HIT_POINTS 10
#define CT_NUM_ENERGY_POINTS 10
#define CT_NUM_ATTACK_DAMAGE 0

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void getStatus(void) const;

  private:
    std::string m_name;
    unsigned int m_hitPoints;
    unsigned int m_energyPoints;
    unsigned int m_attackDamage;
};

#endif // CLAP_TRAP_H
