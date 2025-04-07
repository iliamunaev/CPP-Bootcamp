#include "Zombie.hpp"

/**
 * @brief Deletes the entire Zombie horde allocated on the heap.
 *
 * This function uses `delete[]` to properly free the memory allocated
 * by the `new[]` operator when creating a Zombie horde.
 *
 * @param zombieHorde Pointer to the first element of the Zombie array.
 */
void deleteZombie(Zombie* zombieHorde) {
    delete[] zombieHorde;
}
