#ifndef SCAV_TRAP_01_HPP
#define SCAV_TRAP_01_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define NUM_HP_CT_ST 100
#define NUM_EP_CT_ST 50
#define NUM_AD_CT_ST 20

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string &n);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

    void guardGate();
};

#endif // SCAV_TRAP_01_HPP
