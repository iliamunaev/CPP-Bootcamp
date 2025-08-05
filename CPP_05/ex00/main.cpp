#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat a("a", 1);
    std::cout << "Success: " << a.getName() << " grade: "<< a.getGrade() << std::endl;

  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
   Bureaucrat b("b", 150);
    std::cout << "Success: " << b.getName() << " grade: "<< b.getGrade() << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat c("c", 0);
        std::cout << "Success: " << c.getName() << " grade: "<< c.getGrade() << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat d("d", 151);
    std::cout << "Success: " << d.getName() << " grade: "<< d.getGrade() << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  try {
    Bureaucrat f("d", -1);
    std::cout << "Success: " << f.getName() << " grade: "<< f.getGrade() << std::endl;
  } catch (std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  }

  return 0;
}
