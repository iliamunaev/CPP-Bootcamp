/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void testAnimal() {
  {
    std::cout << "*** TEST Animal ***\n" << std::endl;
    std::cout << "*** TEST Dafault constructor ***" << std::endl;

    Animal a;
  }
  {
    std::cout << "*** TEST Animal ***\n" << std::endl;
    std::cout << "*** TEST Type constructor ***" << std::endl;

    Animal a("AnyAnimalType");
  }
  {
    std::cout << "*** TEST Animal ***\n" << std::endl;
    std::cout << "*** TEST Copy constructor ***" << std::endl;

    Animal a("Animal_1");
    Animal b(a);
  }
  {
    std::cout << "*** TEST Animal ***\n" << std::endl;
    std::cout << "*** TEST Copy assignment operator ***" << std::endl;

    Animal a("Animal_1");
    Animal b("Animal_2");
    a = b;
  }
  {
    std::cout << "*** TEST Animal ***\n" << std::endl;
    std::cout << "*** TEST Copy assignment operator ***" << std::endl;

    Animal a("Animal_1");
    Animal b("Animal_2");
    a = b;
  }
  std::cout << "\n*** END TEST Animal ***\n" << std::endl;
}

void testDog() {
  {
    std::cout << "*** TEST Dog ***\n" << std::endl;
    std::cout << "*** TEST Dafault constructor ***" << std::endl;

    Dog a;
  }
  {
    std::cout << "*** TEST Dog ***\n" << std::endl;
    std::cout << "*** TEST Type constructor ***" << std::endl;

    Dog a("Dog");
  }
  {
    std::cout << "*** TEST Dog ***\n" << std::endl;
    std::cout << "*** TEST Copy constructor ***" << std::endl;

    Animal a("Dog_1");
    Animal b(a);
  }
  {
    std::cout << "*** TEST Dog ***\n" << std::endl;
    std::cout << "*** TEST Copy assignment operator ***" << std::endl;

    Animal a("Dog_1");
    Animal b("Dog_2");
    a = b;
  }
  {
    std::cout << "*** TEST Dog ***\n" << std::endl;
    std::cout << "*** TEST Copy assignment operator ***" << std::endl;

    Animal a("Dog_1");
    Animal b("Dog_2");
    a = b;
  }
  std::cout << "\n*** END TEST Dog ***\n" << std::endl;
}

int main() {

  testAnimal();
  // testDog();
  // testCat();

  return 0;
}
