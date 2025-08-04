#ifndef WRONG_CAT_00_HPP
#define WRONG_CAT_00_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {
  public:
    WrongCat();
    ~WrongCat() override;
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);

    void makeSound(void) const override;
    std::string getType(void) const;
};

#endif // WRONG_CAT_00_HPP
