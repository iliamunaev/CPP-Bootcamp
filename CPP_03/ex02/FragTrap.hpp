/*
*  FragTrap.hpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define FT_NUM_HIT_POINTS 100
#define FT_NUM_ENERGY_POINTS 100
#define FT_NUM_ATTACK_DAMAGE 30

class FragTrap : public ClapTrap {
  public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    virtual ~FragTrap();

    void highFivesGuys(void);
};

#endif // FRAG_TRAP_HPP
