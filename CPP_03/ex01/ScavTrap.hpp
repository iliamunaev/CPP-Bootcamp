#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define ST_NUM_HIT_POINTS 100
#define ST_NUM_ENERGY_POINTS 50
#define ST_NUM_ATTACK_DAMAGE 20

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ScavTrap &operator=(const ScavTrap& other);
    ~ScavTrap();

    void attack(const std::string& target) override;
    void guardGate();
};

#endif // SCAV_TRAP_HPP
