/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:45:45 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 17:11:16 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file newZombie.cpp
 * @brief Implementation of the newZombie function.
 *
 * This file contains the definition of the newZombie function which dynamically
 * allocates a Zombie object on the heap and returns a pointer to it.
 */
#include "Zombie.hpp"

/**
 * @brief Creates a Zombie object on the heap and announces it.
 *
 * This function allocates a `Zombie` object using dynamic memory allocation (`new`),
 * calls the `announce()` method to print the zombie's message,
 * and returns a pointer to the created zombie. The caller is responsible
 * for deleting the zombie using `delete` to prevent memory leaks.
 *
 * @param name The name of the Zombie to be created.
 * @return Zombie* A pointer to the dynamically allocated Zombie object.
 */
Zombie* newZombie(std::string name) {
	Zombie* zombie = new Zombie(name);
	zombie->announce();

	return zombie;
}
