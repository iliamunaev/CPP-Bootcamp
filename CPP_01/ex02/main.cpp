
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
