/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "DiamondTrap.hpp"

int main() {
  {
    std::cout << "\n[TEST] Create Default DiamondTrap" << std::endl;
    DiamondTrap a;
  }
  {
    std::cout << "\n[TEST] Create `Ilon Musk` DiamondTrap" << std::endl;
    DiamondTrap a("Ilon Musk");
  }
  {
    std::cout << "\n[TEST] whoAmI()" << std::endl;
    DiamondTrap a("Ironman");
    a.whoAmI();
  }

  return 0;
}
