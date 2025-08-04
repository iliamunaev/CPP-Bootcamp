#ifndef WRONG_ANIMAL_00_HPP
#define WRONG_ANIMAL_00_HPP

#include <string>

class WrongAnimal {
  public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    virtual void makeSound(void) const;
    virtual std::string getType(void) const;

  protected:
    std::string m_type;
};

#endif // WRONG_ANIMAL_00_HPP
