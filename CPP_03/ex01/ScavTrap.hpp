#ifndef SCAV_TRAP_01_HPP
#define SCAV_TRAP_01_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string& nama);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

};

#endif // SCAV_TRAP_01_HPP
