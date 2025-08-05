#ifndef CAT_00_HPP
#define CAT_00_HPP

#include <iostream>

#include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat();
    ~Cat() override;
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound(void) const override;
    std::string getType(void) const;
};

#endif // CAT_00_HPP
