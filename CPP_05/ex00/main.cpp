#include "Bureaucrat.hpp"

int main() {

  // Tests basics
  std::cout << "\n[TEST]: Basics\n";

  try {
    Bureaucrat a("a_1", 1);
    std::cout  << a << "\n";
  } catch (std::exception& e) {
    std::cout << "a_1: Caught exception: " << e.what() << "\n";
  }

  try {
   Bureaucrat b("b_150", 150);
    std::cout << b << "\n";
  } catch (std::exception& e) {
    std::cout << "b_150: Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat c("c_0", 0);
        std::cout << c << "\n";
  } catch (std::exception& e) {
    std::cout << "c_0: Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat d("d_151", 151);
    std::cout << d << "\n";
  } catch (std::exception& e) {
    std::cout << "d_151: Caught exception: " << e.what() << "\n";
  }

  // Tests decreaseGrade() increaseGrade()
  std::cout << "\n[TEST]: decreaseGrade()\n";
  try {
    Bureaucrat f("f_1", 1);
    f.decreaseGrade();
    std::cout << f << "\n";
  } catch (std::exception& e) {
    std::cout << "f_1: Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat g("g_150", 150);
    g.decreaseGrade();
    std::cout << g << "\n";
  } catch (std::exception& e) {
    std::cout << "g_150: Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: increaseGrade()\n";
  try {
    Bureaucrat h("h_2", 2);
    h.increaseGrade();
    std::cout << h << "\n";
  } catch (std::exception& e) {
    std::cout << "h_2: Caught exception: " << e.what() << "\n";
  }

  try {
    Bureaucrat i("i_1", 1);
    i.increaseGrade();
    std::cout << i << "\n";
  } catch (std::exception& e) {
    std::cout << "i_1: Caught exception: " << e.what() << "\n";
  }

  return 0;
}
