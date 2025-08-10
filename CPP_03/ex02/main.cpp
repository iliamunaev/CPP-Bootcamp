/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "FragTrap.hpp"

int main() {
  std::cout << "\n[TEST] Create Default FragTrap" << std::endl;
  FragTrap a;

  std::cout << "\n[TEST] Create Copy FragTrap" << std::endl;
  FragTrap h;
  FragTrap c(h);


  std::cout << "\n[TEST] Create FragTrap f(\"Frank\")" << std::endl;
  FragTrap f("Frank");

  std::cout << "\n[TEST] Frank requests a high five (alive)" << std::endl;
  f.highFivesGuys();

  return 0;
}
