#include <iostream>

void brain(void) {
  std::string s = "HI THIS IS BRAIN";

  std::string* stringPTR = &s;
  std::string& stringREF = s;

  std::cout << &s << ": memory address of the string variable\n";
  std::cout << stringPTR << ": memory address held by stringPTR\n";
  std::cout << &stringREF << ": memory address held by stringREF\n";

  std::cout << s << ": value pointed to by variable\n";
  std::cout << *stringPTR << ": value pointed to by stringPTR\n";
  std::cout << stringREF << ": value referenced by stringREF\n";
}

int main(void) {
  brain();

  return 0;
}
