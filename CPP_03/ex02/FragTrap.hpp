#ifndef FRAG_TRAP_02_HPP
#define FRAG_TRAP_02_HPP

#include <iostream>

#include "ClapTrap.hpp"

#define NUM_HP_FT 100
#define NUM_EP_FT 100
#define NUM_AD_FT 30

class FragTrap:public ClapTrap {
  public:
    FragTrap();
    FragTrap(const std::string& n);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif // FRAG_TRAP_02_HPP
