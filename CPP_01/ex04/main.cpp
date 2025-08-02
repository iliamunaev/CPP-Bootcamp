#include "replace.hpp"

// test
int main(int argc, char** argv) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <str1> <str2>" << std::endl;
    return 1;
  }

  std::string str1 = argv[2];
  if (str1.empty()) {
    std::cerr << "Error: s1 cannot be empty." << std::endl;
    return 1;
}


  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  return findAndReplace(filename, s1, s2);
}
