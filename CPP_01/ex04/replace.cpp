#include "replace.hpp"

void findAndReplace(const std::string& file, const std::string& str1, const std::string& str2) {
    std::ifstream inFile(file);
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open input file " << file << std::endl;
        return;
    }

    std::ofstream outFile(file + ".replace");
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not create output file " << file << ".replace" << std::endl;
        inFile.close();
        return;
    }

	// Read inFile line by line
    std::string line;
    while (std::getline(inFile, line)) {
		size_t pos = 0;
		// Find str1 in line
        while ((pos = line.find(str1, pos)) != std::string::npos) {
            // Extract part of the string strBefore str1
            std::string strBefore = line.substr(0, pos);
            // Extract part of the string strAfter str1
            std::string strAfter = line.substr(pos + str1.length());

            // Build a new string
            line = strBefore + str2 + strAfter;

			// Update the position
            pos += str2.length();
        }
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
}
