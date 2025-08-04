#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const int size = 10;
    Animal* animals[size];

    // Fill first half with Dogs
    for (int i = 0; i < size / 2; ++i) {
        std::cout << i << std::endl;
        animals[i] = new Dog();
    }

    // Fill second half with Cats
    for (int i = size / 2; i < size; ++i) {
        std::cout << i << std::endl;
        animals[i] = new Cat();
    }

    std::cout << "\n--- Making Sounds ---\n";
    for (int i = 0; i < size; ++i) {
        std::cout << i << std::endl;
        animals[i]->makeSound();
    }

    std::cout << "\n--- Cleaning up ---\n";
    for (int i = 0; i < size; ++i) {
        std::cout << i << std::endl;
        delete animals[i];  // polymorphic deletion
    }

    return 0;
}
