#ifndef CAT_02_HPP
#define CAT_02_HPP

#include <string>

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

#endif // CAT_02_HPP
