/*
*  main.cpp
*
*  By: Ilia Munaev ilyamunaev@gmail.com
*  LinkedIn: https://www.linkedin.com/in/iliamunaev/
*
*  Created: 2025-08-10
*  Updated: 2025-08-10
*/
#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void testDog() {
  std::cout << "*** TEST Dog ***\n" << std::endl;

  {
    std::cout << "*** TEST Default constructor + makeSound ***" << std::endl;
    Dog a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
  }

  {
    std::cout << "\n*** TEST Copy constructor ***" << std::endl;
    Dog a;
    Dog b(a);
    std::cout << "a.type = " << a.getType() << " | b.type = " << b.getType() << std::endl;
  }

  {
    std::cout << "\n*** TEST Copy assignment operator ***" << std::endl;
    Dog a;
    Dog b;
    b = a;
    std::cout << "a.type = " << a.getType() << " | b.type = " << b.getType() << std::endl;
  }

  {
    std::cout << "\n*** TEST Self-assignment ***" << std::endl;
    Dog a;
    a = a;
    std::cout << "a.type = " << a.getType() << std::endl;
  }
  {
    std::cout << "\n*** TEST Const object  ***" << std::endl;
    const Dog a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
  }

  {
    std::cout << "\n*** TEST Polymorphic delete via Animal* ***" << std::endl;
    Animal* p = new Dog();
    std::cout << "p->getType() = " << p->getType() << std::endl;
    p->makeSound();
    delete p;
  }

  std::cout << "\n*** END TEST Dog ***\n" << std::endl;
}

void testCat() {
  std::cout << "*** TEST Cat ***\n" << std::endl;

  {
    std::cout << "*** TEST Default constructor + makeSound ***" << std::endl;
    Cat a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
  }

  {
    std::cout << "\n*** TEST Copy constructor ***" << std::endl;
    Cat a;
    Cat b(a);
    std::cout << "a.type = " << a.getType() << " | b.type = " << b.getType() << std::endl;
  }

  {
    std::cout << "\n*** TEST Copy assignment operator ***" << std::endl;
    Cat a;
    Cat b;
    b = a;
    std::cout << "a.type = " << a.getType() << " | b.type = " << b.getType() << std::endl;
  }

  {
    std::cout << "\n*** TEST Self-assignment ***" << std::endl;
    Cat a;
    a = a;
    std::cout << "a.type = " << a.getType() << std::endl;
  }

  {
    std::cout << "\n*** TEST Const object  ***" << std::endl;
    const Cat a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
  }

  {
    std::cout << "\n*** TEST Polymorphic delete via Animal* ***" << std::endl;
    Animal* p = new Cat();
    std::cout << "p->getType() = " << p->getType() << std::endl;
    p->makeSound();
    delete p;
  }

  std::cout << "\n*** END TEST Cat ***\n" << std::endl;
}

void testZooPolymorphism() {
  std::cout << "*** TEST Zoo (Animal* array of Dogs & Cats) ***\n" << std::endl;

  Animal* zoo[4];
  zoo[0] = new Dog();
  zoo[1] = new Cat();
  zoo[2] = new Dog();
  zoo[3] = new Cat();

  for (int i = 0; i < 4; ++i) {
    std::cout << "zoo[" << i << "] type = " << zoo[i]->getType() << " | sound: ";
    zoo[i]->makeSound();
  }

  for (int i = 0; i < 4; ++i) {
    delete zoo[i];
  }

  std::cout << "\n*** END TEST Zoo ***\n" << std::endl;
}

void testWrongCat() {
  std::cout << "*** TEST WrongCat ***\n" << std::endl;

  {
    std::cout << "*** TEST Default constructor + makeSound ***" << std::endl;
    WrongCat a;
    std::cout << "type = " << a.getType() << std::endl;
    a.makeSound();
  }

  {
    std::cout << "\n*** TEST Polymorphic delete via Animal* ***" << std::endl;
    WrongAnimal* p = new WrongCat();
    std::cout << "p->getType() = " << p->getType() << std::endl;
    p->makeSound();
    delete p;
  }

  std::cout << "\n*** END TEST WrongCAt ***\n" << std::endl;
}

int main() {
  // testAnimal(); // keep if you want to run base tests too
  testDog();
  testCat();
  testZooPolymorphism();
  testWrongCat();
  return 0;
}

// int main()
// {
//   const Animal* meta = new Animal();
//   const Animal* j = new Dog();
//   const Animal* i = new Cat();
//   std::cout << j->getType() << " " << std::endl;
//   std::cout << i->getType() << " " << std::endl;
//   i->makeSound(); //will output the cat sound!
//   j->makeSound();
//   meta->makeSound();

//   return 0;
// }
