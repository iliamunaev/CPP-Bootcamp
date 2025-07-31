#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* zh = nullptr;

    try {
        zh = new Zombie[N];
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed\n";
        return nullptr;
    }

    for (int i = 0; i < N; ++i)
        zh[i].setName(name);

    return zh;
}
