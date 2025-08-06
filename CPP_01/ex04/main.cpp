#include "replace.hpp"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Error: usage <fileName> <s1> <s2>" << std::endl;
    return 1;
  }

  const std::string &file = argv[1];
  const std::string &s1 = argv[2];
  const std::string &s2 = argv[3];

  if (findAndReplace(file, s1, s2) == 1) {
    return 1;
  }

  return 0;
}
