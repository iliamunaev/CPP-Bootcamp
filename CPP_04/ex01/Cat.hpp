#ifndef CAT_01_HPP
#define CAT_01_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal {
  public:
    Cat();
    ~Cat() override;
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound(void) const override;
    std::string getType(void) const;

  private:
    Brain* brain;
};

#endif // CAT_01_HPP
