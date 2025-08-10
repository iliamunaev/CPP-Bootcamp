/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void basicTest() {
  std::cout << "*** TEST Shallow copy ***\n" << std::endl;
  Dog basic;
  {
    Dog tmp = basic;
  }
}

void testDog() {
  std::cout << "*** TEST Dog ***\n" << std::endl;

  {
    Dog a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
    a.setIdea(0, "I have an idea!");
    std::cout << a.getIdea(0) << std::endl;
  }
    {
    std::cout << "\n*** Brain bounds check (expect exception) ***" << std::endl;
    Dog a;
    try {
      a.setIdea(100, "oops");
      std::cout << "NO exception (check your Brain bounds logic)\n";
    } catch (const std::out_of_range& e) {
      std::cout << "caught std::out_of_range: " << e.what() << std::endl;
    } catch (...) {
      std::cout << "caught unknown exception\n";
    }
  }

  std::cout << "\n*** END TEST Dog ***\n" << std::endl;
}

void testCat() {
  std::cout << "*** TEST Cat ***\n" << std::endl;

  {
    Cat a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
    a.setIdea(0, "I have an idea!");
    std::cout << a.getIdea(0) << std::endl;
  }
    {
    std::cout << "\n*** Brain bounds check (expect exception) ***" << std::endl;
    Cat a;
    try {
      a.setIdea(-1, "oops");
      std::cout << "NO exception (check your Brain bounds logic)\n";
    } catch (const std::out_of_range& e) {
      std::cout << "caught std::out_of_range: " << e.what() << std::endl;
    } catch (...) {
      std::cout << "caught unknown exception\n";
    }
  }

  std::cout << "\n*** END TEST Cat ***\n" << std::endl;
}

int main() {
  basicTest();
  testDog();
  testCat();

  // test abstract error
  // AAnimal a;

  return 0;
}

