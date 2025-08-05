#include "replace.hpp"

int findAndReplace(const std::string& fileName, const std::string& str1, const std::string& str2) {
  if (str1.empty()) {
    std::cerr << "Error: Search string cannot be empty." << std::endl;
    return 1;
  }

  std::ifstream inFile(fileName);
  if (!inFile.is_open()) {
    std::cerr << "Error: Could not open input file '" << fileName << "'" << std::endl;
    return 1;
  }

  std::ofstream outFile(fileName + ".replace");
  if (!outFile.is_open()) {
    std::cerr << "Error: Could not create output file '" << fileName << ".replace'" << std::endl;
    return 1;
  }

  // Handle empty file
  if (inFile.peek() == std::ifstream::traits_type::eof()) {
    std::cerr << "Error: Input file is empty." << std::endl;
    inFile.close();
    outFile.close();
    return 1;
  }

  std::string line;
  while (std::getline(inFile, line)) {
    size_t pos = 0;
    while ((pos = line.find(str1, pos)) != std::string::npos) {
      line.erase(pos, str1.length());
      line.insert(pos, str2);
      pos += str2.length();
    }
    outFile << line << '\n';
  }

  inFile.close();
  outFile.close();

  std::cout << "Success: cat " << fileName + ".replace" << std::endl;
  return 0;
}
