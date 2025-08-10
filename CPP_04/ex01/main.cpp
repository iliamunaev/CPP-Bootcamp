#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void separator(const std::string& title) {
    std::cout << "\n========== " << title << " ==========" << std::endl;
}

void testAnimalArray() {
    separator("Polymorphic Array of Animals");

    const int size = 10;
    Animal* animals[size];

    // Fill first half with Dogs
    for (int i = 0; i < size / 2; ++i) {
        animals[i] = new Dog();
    }

    // Fill second half with Cats
    for (int i = size / 2; i < size; ++i) {
        animals[i] = new Cat();
    }

    std::cout << "\n--- Making Sounds ---" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << i << ": ";
        animals[i]->makeSound();
    }

    std::cout << "\n--- Cleaning up ---" << std::endl;
    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }
}

void testDogDeepCopy() {
    separator("Deep Copy Test (Dog)");

    Dog d;
    d.getBrain().setIdea(0, "I like bones.");
    d.getBrain().setIdea(1, "I want to bark.");

    {
        Dog deepDog = d; // Copy constructor (Deep copy)
        std::cout << "Inside deepDog - deepDog idea[0]: " << deepDog.getBrain().getIdea(0) << "" << std::endl;
        std::cout << "Inside deepDog - deepDog idea[1]: " << deepDog.getBrain().getIdea(1) << "" << std::endl;

        deepDog.getBrain().setIdea(0, "I hate cats.");
        std::cout << "Modified deepDog idea[0] to: " << deepDog.getBrain().getIdea(0) << "" << std::endl;

        std::cout << "Inside deepDog - deepDog idea[0]: " << deepDog.getBrain().getIdea(0) << "" << std::endl;

    }

    // After deepDog is destroyed, d should still have its own Brain
    std::cout << "After deepDog - d idea[0]: " << d.getBrain().getIdea(0) << "" << std::endl;
    std::cout << "After deepDog - d idea[1]: " << d.getBrain().getIdea(1) << "" << std::endl;
}

void testCopyConstructor() {
    separator("Copy Constructor Test");

    Dog d1;
    d1.getBrain().setIdea(0, "I want a bone");
    d1.getBrain().setIdea(1, "I want to play");

    Dog d2(d1);

    std::cout << "d1 Idea[0]: " << d1.getBrain().getIdea(0) << "" << std::endl;
    std::cout << "d2 Idea[0]: " << d2.getBrain().getIdea(0) << "" << std::endl;
    std::cout << "d1 Idea[0]: " << d1.getBrain().getIdea(1) << "" << std::endl;
    std::cout << "d2 Idea[0]: " << d2.getBrain().getIdea(1) << "" << std::endl;

    // d1 is unaffected
    d2.getBrain().setIdea(0, "I hate cats");

    std::cout << "After modification:" << std::endl;
    std::cout << "d1 Idea[0]: " << d1.getBrain().getIdea(0) << "" << std::endl;
    std::cout << "d2 Idea[0]: " << d2.getBrain().getIdea(0) << "" << std::endl;
    std::cout << "d1 Idea[0]: " << d1.getBrain().getIdea(1) << "" << std::endl;
    std::cout << "d2 Idea[0]: " << d2.getBrain().getIdea(1) << "" << std::endl;
}



int main() {
    testAnimalArray();
    testDogDeepCopy();
    testCopyConstructor();

    return 0;
}
