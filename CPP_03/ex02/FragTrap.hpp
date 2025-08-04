#ifndef FRAG_TRAP_02_HPP
#define FRAG_TRAP_02_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap {
  public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif // FRAG_TRAP_02_HPP
