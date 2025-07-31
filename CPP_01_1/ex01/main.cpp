/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:28 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 21:19:15 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @brief Entry point for the Zombie Horde program.
 *
 * This program prompts the user to input a number of Zombies to create and a base name for them.
 * It then uses the `zombieHorde()` function to create a horde of Zombies, which are dynamically
 * allocated on the heap. Once the horde is created, the program properly deletes the allocated memory
 * using `deleteZombie()` to prevent memory leaks.
 */
#include "Zombie.hpp"
#include "utils.hpp"

/**
 * @brief The main function of the Zombie Horde program.
 *
 * This function prompts the user to enter the number of Zombies to create and a base name for them.
 * It then creates a horde of Zombies using the `zombieHorde()` function and deletes the horde when finished.
 *
 * @return int Returns 0 upon successful completion, or 1 if invalid input is detected.
 */
int main() {
    std::string name;
    int N;
    std::string input;

    std::cout << "Type a number of Zombies to create: \n";
    std::cout << "> ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    if (!(ss >> N) || N <= 0 || N > MAX_NUM_ZOMBIES) {
        std::cerr << "N should be a positive number in the range 1-100." << std::endl;
        return 1;
    }

    std::cout << "Type in Zombie name: \n";
    std::cout << "> ";
    std::getline(std::cin, name);

    Zombie* horde = zombieHorde(N, name);
    if (!horde)
        return 1;

    deleteZombie(horde);

    return 0;
}
