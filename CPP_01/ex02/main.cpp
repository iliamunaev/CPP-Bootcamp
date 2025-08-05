#include <iostream>

void brain(void) {
  std::string s = "HI THIS IS BRAIN";

  std::string* stringPTR = &s;
  std::string& stringREF = s;

  std::cout << &s << ": memory address of the string variable" << std::endl;
  std::cout << stringPTR << ": memory address held by stringPTR" << std::endl;
  std::cout << &stringREF << ": memory address held by stringREF" << std::endl;

  std::cout << s << ": value pointed to by variable" << std::endl;
  std::cout << *stringPTR << ": value pointed to by stringPTR" << std::endl;
  std::cout << stringREF << ": value referenced by stringREF" << std::endl;
}

int main(void) {
  brain();

  return 0;
}
