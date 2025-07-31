#include "Zombie.hpp"

bool is_valid(char *e, long n) {
    if (*e != '\0' || n <= 0 || n > 1000) {
        std::cout << "Error: Number of zombies must be a positive int (max 1000).\n";
        return false;
    }

    return true;
}

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cout << "Error: too many arguments.\nUsage Zombie <number of zombies> <name>\n";
        return 1;
    }

    char* end;
    long N = std::strtol(argv[1], &end, 10);

    if (!is_valid(end, N)) {
        return 1;
    }

    std::string name = argv[2];

    Zombie* zh = zombieHorde(N, name);
    if (!zh)
        return 1;
        
    // test
    // for (int i = 0; i < N; ++i)
    //         zh[i].announce();

    delete[] zh;

    return 0;
}
