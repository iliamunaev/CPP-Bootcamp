/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:02:18 by Ilia Munaev       #+#    #+#             */
/*   Updated: 2025/04/07 21:19:33 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file zombieHorde.cpp
 * @brief Implementation of the zombieHorde function.
 *
 * This file contains the implementation of the `zombieHorde()` function, which
 * creates an array of Zombie objects and assigns them the same name. Each Zombie
 * announces itself immediately upon creation.
 */
#include "Zombie.hpp"

/**
 * @brief Creates a horde of Zombies with the same name.
 *
 * This function dynamically allocates memory for an array of `Zombie` objects using `new[]`.
 * Each Zombie is given the same name and announces itself immediately by calling the `announce()` method.
 * The caller is responsible for properly deleting the horde using `deleteZombie()` to avoid memory leaks.
 *
 * @param N The number of Zombies to create. Must be greater than 0.
 * @param name The name to assign to all Zombies in the horde.
 * @return Zombie* A pointer to the dynamically allocated array of Zombies.
 *
 * @note If `N` is less than or equal to 0, the behavior is undefined.
 */
Zombie* zombieHorde(int N, std::string name) {

	if (N <= 0 || N > MAX_NUM_ZOMBIES) {
        std::cerr << "N should be a positive number in the range 1-100." << std::endl;
        return NULL;
    }

	Zombie* zombieHorde = new Zombie[N];
	if (!zombieHorde) {
		std::cerr << "Error: zombieHorde: memory allocation failed" << std::endl;
		return NULL;
	}

	for (int i = 0; i < N; i++) {
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
	}

	return zombieHorde;
}

