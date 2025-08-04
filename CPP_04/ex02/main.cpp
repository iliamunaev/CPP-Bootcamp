#include "Dog.hpp"
#include "Cat.hpp"

int main() {
  Animal* animals[2];

  animals[0] = new Dog();
  animals[1] = new Cat();

  for (int i = 0; i < 2; ++i) {
    animals[i]->makeSound();
    delete animals[i];
  }

  return 0;
}
