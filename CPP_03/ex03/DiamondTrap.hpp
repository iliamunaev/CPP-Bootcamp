/*
*  DiamondTrap.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public ScavTrap, public FragTrap {
  public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap() override;

    using ScavTrap::attack;

    void whoAmI() const;

  private:
    std::string m_name;
};

#endif // DIAMOND_TRAP_HPP
