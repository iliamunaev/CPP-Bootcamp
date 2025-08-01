#include "replace.hpp"

// test
int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    findAndReplace(filename, s1, s2);

    std::cout << "Replacement complete. Use: cat " << filename << ".replace" << std::endl;

    return 0;
}
