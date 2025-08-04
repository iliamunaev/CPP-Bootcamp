#ifndef WRONG_CAT_00_HPP
#define WRONG_CAT_00_HPP

#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif // WRONG_CAT_00_HPP
