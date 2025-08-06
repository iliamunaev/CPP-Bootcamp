#include "Bureaucrat.hpp"

int main() {

  // Tests basics
  std::cout << "\n[TEST]: Basics\n";

  try {
    Bureaucrat a("a", 1);
    std::cout << "Success: " << a << "\n";

  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
   Bureaucrat b("b", 150);
    std::cout << "Success: " << b << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat c("c", 0);
        std::cout << "Success: " << c << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat d("d", 151);
    std::cout << "Success: " << d << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  // Tests decreaseGrade() increaseGrade()
  std::cout << "\n[TEST]: decreaseGrade()\n";
  try {
    Bureaucrat g("g", 1);
    g.decreaseGrade();
    std::cout << "Success: " << g << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat h("h", 150);
    h.decreaseGrade();
    std::cout << "Success: " << h << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: increaseGrade()\n";
  try {
    Bureaucrat i("i", 2);
    i.increaseGrade();
    std::cout << "Success: " << i << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat j("j", 1);
    j.increaseGrade();
    std::cout << "Success: " << j << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  return 0;
}
