#ifndef WRONG_ANIMAL_00_HPP
#define WRONG_ANIMAL_00_HPP

#include <string>

class WrongAnimal {
  public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    void makeSound(void) const;
    std::string getType(void) const;

  protected:
    std::string m_type;
};

#endif // WRONG_ANIMAL_00_HPP
