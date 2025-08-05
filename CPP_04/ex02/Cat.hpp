#ifndef CAT_02_HPP
#define CAT_02_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  public:
    Cat();
    virtual ~Cat() override;
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);

    void makeSound(void) const override;
    std::string getType(void) const;
    Brain& getBrain(void) const;
    std::string getIdea(int i) const;

  private:
    Brain* brain;
};

#endif // CAT_02_HPP
