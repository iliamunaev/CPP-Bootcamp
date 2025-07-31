// • A string variable initialized to "HI THIS IS BRAIN".
// • stringPTR: A pointer to the string.
// • stringREF: A reference to the string.
// Your program has to print:
// • The memory address of the string variable.
// • The memory address held by stringPTR.
// • The memory address held by stringREF.
// And then:
// • The value of the string variable.
// • The value pointed to by stringPTR.
// • The value pointed to by stringREF.

#include <iostream>

void brain(void) {
    std::string s = "HI THIS IS BRAIN\n";

    std::string* stringPTR = &s;
    std::string& stringREF = s;

    std::cout  << &s << ": memory address of the string variable" << std::endl;
    std::cout  << stringPTR << ": memory memory address held by stringPTR" << std::endl;
    std::cout  << &stringREF << ": memory memory address held by stringREF" << std::endl;
}

int main(void) {
    brain();

    return 0;
}
