/*
*  ScavTrap.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define ST_HIT_POINTS 100
#define ST_ENERGY_POINTS 50
#define ST_ATTACK_DAMAGE 20

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ScavTrap &operator=(const ScavTrap& other);
    ~ScavTrap() override;

    void attack(const std::string& target) override;
    void guardGate();
};

#endif // SCAV_TRAP_HPP
