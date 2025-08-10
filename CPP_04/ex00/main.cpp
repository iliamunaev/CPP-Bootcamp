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

void separator(const std::string& title) {
  std::cout << "\n========== " << title << " ==========" << std::endl;
}

int main() {
  separator("Polymorphic Array Test");

  const int size = 4;
  const Animal* zoo[size] = {
      new Dog(),
      new Cat(),
      new Dog(),
      new Cat()
  };

  for (int i = 0; i < size; ++i) {
    std::cout << zoo[i]->getType() << " says: ";
    zoo[i]->makeSound();
  }

  for (int i = 0; i < size; ++i)
    delete zoo[i];

  separator("WrongAnimal Test");

  const WrongAnimal* wAnimal = new WrongAnimal();
  const WrongAnimal* wCat = new WrongCat();

  std::cout << "Type: " << wAnimal->getType() << "" << std::endl;
  std::cout << "Type: " << wCat->getType() << "" << std::endl;

  wAnimal->makeSound();
  wCat->makeSound();

  delete wAnimal;
  delete wCat;

  separator("Copy Constructor & Assignment");

  Dog basic;
  {
    Dog copy = basic; // Copy constructor
  }

  Cat alpha;
  Cat beta;
  beta = alpha; // Copy assignment

  separator("Object Slicing");

  Dog dog;
  Animal sliced = dog;  // Slicing occurs
  std::cout << "Sliced.getType(): " << sliced.getType() << "" << std::endl;
  sliced.makeSound(); // Calls Animal::makeSound(), not Dog’s

  separator("Stack Allocation & Destruction");

  Dog d1;
  Cat c1;

  return 0;
}
