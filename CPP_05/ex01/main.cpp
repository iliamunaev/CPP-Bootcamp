#include "Form.hpp"

int main() {

  // Tests basics
  std::cout << "\n[TEST]: Basics\n";

  try {
    Form f("Form", 1, 1);
    std::cout << "Success: " << f << "\n";

  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
   Form f("Form", 150, 150);
    std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Too High\n";

  try {
    Form f("Form", 0, 1);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Form f("Form", 1, 0);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Too Low\n";

  try {
    Form f("Form", 151, 1);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Form f("Form", 1, 151);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Both Too High\n";

  try {
    Form f("Form", 0, 0);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Both Too Low\n";

  try {
    Form f("Form", 151, 151);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: beSigned same lavel\n";
  try {
    Bureaucrat b ("Ilia", 1);
    Form f("Form", 1, 1);
    f.beSigned(b);
    std::cout << "Success: " << b << "\n";
    std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: beSigned lower lavel\n";
  try {
    Bureaucrat b ("Ilia", 2);
    Form f("Form", 1, 1);
    f.beSigned(b);
    std::cout << "Success: " << b << "\n";
    std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: beSigned higner lavel\n";
  try {
    Bureaucrat b ("Ilia", 2);
    Form f("Form", 3, 1);
    f.beSigned(b);
    std::cout << "Success: " << b << "\n";
    std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  return 0;
}
