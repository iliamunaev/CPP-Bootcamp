#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  Animal k = Animal();

  const WrongAnimal* wrongMeta = new WrongAnimal();
  const WrongAnimal* m = new WrongCat();


  std::cout << "Type: " << meta->getType() << " " << std::endl;
  std::cout << "Type: " << wrongMeta->getType() << " " << std::endl;
  std::cout << "Type: " << j->getType() << " " << std::endl;
  std::cout << "Type: " << i->getType() << " " << std::endl;
  std::cout << "Type: " << k.getType() << " " << std::endl;
  std::cout << "Type: " << m->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  k.makeSound();
  m->makeSound();
  meta->makeSound();
  wrongMeta->makeSound();
  m->makeSound();

  delete meta;
  delete i;
  delete j;
  delete wrongMeta;
  delete m;

  return 0;
}
