/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:28 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 17:11:05 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @brief Entry point for the Zombie program.
 *
 * This program allows the user to create Zombie objects in two ways:
 * - On the heap using `newZombie()`.
 * - On the stack using `randomChump()`.
 *
 * The heap-allocated Zombie must be manually deleted to avoid memory leaks.
 */
#include "Zombie.hpp"

/**
 * @brief The main function of the Zombie program.
 *
 * This function prompts the user to enter a Zombie name and then demonstrates
 * the creation of Zombies using both heap allocation and stack allocation.
 *
 * - Heap allocation uses the `newZombie()` function, which returns a pointer
 *   to a dynamically allocated Zombie object. The memory must be freed using `delete`.
 *
 * - Stack allocation uses the `randomChump()` function, which creates a Zombie
 *   object on the stack that is automatically destroyed when it goes out of scope.
 *
 * @return int Returns 0 upon successful completion of the program.
 */
int main() {
	std::string name;

	std::cout << "Type in Zombie name: \n";
	std::cout << "> ";
	std::getline(std::cin, name);

	Zombie* heapZombie  = newZombie(name);
	delete heapZombie;

	randomChump(name);

	return 0;
}
