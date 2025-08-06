#include "Bureaucrat.hpp"

int main() {

  // Tests basics
  std::cout << "\n[TEST]: Basics" << std::endl;

  try {
    Bureaucrat a("a", 1);
    std::cout << "Success: " << a << std::endl;

  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
   Bureaucrat b("b", 150);
    std::cout << "Success: " << b << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat c("c", 0);
        std::cout << "Success: " << c << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat d("d", 151);
    std::cout << "Success: " << d << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  // Tests decreaseGrade() increaseGrade()
  std::cout << "\n[TEST]: decreaseGrade()" << std::endl;
  try {
    Bureaucrat g("g", 1);
    g.decreaseGrade();
    std::cout << "Success: " << g << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat h("h", 150);
    h.decreaseGrade();
    std::cout << "Success: " << h << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  std::cout << "\n[TEST]: increaseGrade()" << std::endl;
  try {
    Bureaucrat i("i", 2);
    i.increaseGrade();
    std::cout << "Success: " << i << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat j("j", 1);
    j.increaseGrade();
    std::cout << "Success: " << j << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  return 0;
}
