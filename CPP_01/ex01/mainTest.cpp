#include "Zombie.hpp"
#include <cstdlib>   // for std::atoi

int main(int argc, char** argv) {

    int count = std::atoi(argv[1]);

    Zombie* zh = zombieHorde(count, argv[2]);
    if (!zh) {
        std::cerr << "Failed to create zombie horde\n";
        return 1;
    }

    for (int i = 0; i < count; ++i)
        zh[i].announce();

    delete[] zh;
    return 0;
}
