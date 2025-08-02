#include "replace.hpp"

int findAndReplace(const std::string& fileName, const std::string& str1, const std::string& str2) {
  std::ifstream inFile(fileName); // open file for reading
  if (!inFile.is_open()) {
    std::cerr << "Error: Could not open input file " << fileName << std::endl;
    return 1;
  }

  std::ofstream outFile(fileName + ".replace"); // open file for writing
  if (!outFile.is_open()) {
    std::cerr << "Error: Could not create output file " << fileName << ".replace" << std::endl;
    inFile.close();
    return 1;
  }

  // Read file line by line and find str1
  std::string line;
  while (std::getline(inFile, line)) {
    size_t pos = 0;

    while ((pos = line.find(str1, pos)) != std::string::npos) {  // Find index of the first char of the str1
      std::string strBefore = line.substr(0, pos); // Save part of the string befor str1
      std::string strAfter = line.substr(pos + str1.length()); // Save part of the string after str1

      line = strBefore + str2 + strAfter; // Replace str1 wit str2 and create a new string

      pos += str2.length(); // Update position for the next iteration
    }
    outFile << line << std::endl;
  }
  inFile.close();
  outFile.close();

  std::cout << "Success: cat " << fileName + ".replace" << std::endl;

  return 0;
}
