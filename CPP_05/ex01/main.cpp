#include "Form.hpp"

int main() {

  // Tests basics
  std::cout << "\n[TEST]: Basics\n";

  try {
    Form f("Form_1_1", 1, 1);
    std::cout << "Success: " << f << "\n";

  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
   Form f("Form_150_150", 150, 150);
    std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Too High\n";

  try {
    Form f("Form_0_1", 0, 1);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Form f("Form_1_0", 1, 0);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Too Low\n";

  try {
    Form f("Form_151_1", 151, 1);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  try {
    Form f("Form_1_151", 1, 151);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Both Too High\n";

  try {
    Form f("Form_0_0", 0, 0);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }

  std::cout << "\n[TEST]: Both Too Low\n";

  try {
    Form f("Form_151_151", 151, 151);
        std::cout << "Success: " << f << "\n";
  } catch (std::exception& e) {
    std::cout << "Caught exception: " << e.what() << "\n";
  }
  return 0;
}
